using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CardHandler : MonoBehaviour
{
    #region Delegate

    public BeingDragDelegate OnBeingDrag;
    public DragDelegate OnDragDelegate;
    public EndDragDelegate OnEndDrag;


    #endregion
    #region Events
    private EventHandler stopHandler;
    private EventHandler setParentHandler;
    private EventHandler createMonsterHandler;
    private EventHandler setPreviousParentHandler;
    private EventHandler swapHandler;
    private EventHandler deleteMonsterHandler;

    #endregion
    #region Components
    [HideInInspector] public Transform parentAfterDrag { get; set; } // the current parent
    Transform previousParent; // the previous parent
    public Image image; // card image
    public GameObject monster; // this is the monster so we can destroy it easily

    Transform temp1;

    CardSlot thisSlot; // pass our cardslot to the gamemanager idea
    CardHandler thisHandler;
    CardHolderSlot cardHolderSlot;
    #endregion
    #region vectors
    

    #endregion

    #region booleans
    private bool flag = false;
    #endregion

    #region Integers
    [HideInInspector] public int previousSlotPos;
    [HideInInspector] public int slotPos;
    #endregion
    private void Awake()
    {
        initialize();
    }
    private void initialize()
    {
        thisSlot = GetComponent<CardSlot>();
        thisHandler = GetComponent<CardHandler>();
        #region Delegate
        OnBeingDrag += BeingDrag;
        OnDragDelegate += Drag;
        OnEndDrag += EndDrag;
        #endregion
        #region Events

        Activator();
        #endregion

    }
    #region Delegate
    public delegate void BeingDragDelegate();
    public delegate void DragDelegate();
    public delegate void EndDragDelegate();

    #endregion
    public void BeingDrag()
    {
        if (transform.parent.GetComponent<CardHolderSlot>() != null)
        {
            cardHolderSlot = transform.parent.GetComponent<CardHolderSlot>();
            previousSlotPos = cardHolderSlot.slotPos;

        }

        parentAfterDrag = transform.parent; //set the new grid to my transform parent
        transform.SetParent(transform.root); // put the transform at the top of the list
        transform.SetAsLastSibling();//then make hte the last object 
        previousParent = parentAfterDrag; // make the previous is my parentafterdrag


    }
    public void Drag()
    {
        transform.position = Input.GetTouch(0).position; // get the positoin
    }
    public void EndDrag()
    {

        Action();

        GameManager.instance.CreateCard();
    }


    public void Action()
    {
        stopHandler?.Invoke(this, EventArgs.Empty);

        swapHandler?.Invoke(this, EventArgs.Empty);

        deleteMonsterHandler?.Invoke(this, EventArgs.Empty);

        createMonsterHandler?.Invoke(this, EventArgs.Empty);

        setParentHandler?.Invoke(this, EventArgs.Empty);

        setPreviousParentHandler?.Invoke(this, EventArgs.Empty);

        Activator();


    }
    private void Stop(object sender, EventArgs e)
    {if(Situation0())
        deleteMonsterHandler -= DeleteMonster;
    }
    private void SetParent(object sender, EventArgs e)
    {
        if (!Situation1()) return;
        transform.SetParent(parentAfterDrag); //change parent to parentafterdrag        
        setPreviousParentHandler -= SetPreviousParent;
    }

    private void CreateMonster(object sender, EventArgs e)
    {
        if (Situation2(slotPos))
            CreateMonster(parentAfterDrag, transform);
    }

    private void SetPreviousParent(object sender, EventArgs e)
    {
        if (Situation3())
            transform.SetParent(previousParent); //change parent to parentafterdrag  
    }

    private void Swap(object sender, EventArgs e)
    {
        if (Situation4())
        {

            SwappedCard();
            flag = false;
            SwappedMonster();
        }
    }
    private void DeleteMonster(object sender, EventArgs e)
    {

        if (Situation5() || Situation6())
            DeleteMonster();
    }
    #region Booleans1
    private bool Situation0() => previousSlotPos == slotPos;

    private bool Situation1() => !IsFull(parentAfterDrag);
    private bool Situation2(int index) => IsFront(parentAfterDrag) && !IsFull(parentAfterDrag) && GameManager.instance.monsterParents[index].transform.childCount <= 0;
    private bool Situation3() => IsLeader(parentAfterDrag) && IsFull(parentAfterDrag);
    private bool Situation4() => IsFull(parentAfterDrag) && !IsLeader(parentAfterDrag) && IsSlot(parentAfterDrag);
    private bool Situation5() => !IsFull(previousParent) && !IsFull(parentAfterDrag);
    private bool Situation6() => !IsFront(parentAfterDrag);
    #endregion

    #region Booleans2
    bool IsFront(Transform parent) => parent.GetComponent<CardHolderSlot>() != null && parent.GetComponent<CardHolderSlot>().isFront; // if this card is a front card (attackable)
    bool IsFull(Transform transform) => transform.transform.childCount > 0 && transform.GetChild(0).transform != null && transform.GetComponent<CardHolderSlot>() != null; // if this card has  childrens
    bool IsHand(Transform transform) => transform.GetComponent<CardSizer>() != null;
    bool IsEmpty(int monsterCount) => GameManager.instance.monsterParents[monsterCount].childCount <= 0;

    bool IsSlot(Transform transform) => transform.GetComponent<CardHolderSlot>() != null;
    bool IsLeader(Transform transform)
    {
        if (transform.GetComponent<CardHolderSlot>() != null)
            return transform.GetComponent<CardHolderSlot>().isLeader;
        else return false;
    }
    #endregion

    #region Behaviours
    Transform Monster(int monsterCount) => GameManager.instance.monsterParents[monsterCount].GetChild(0).transform;
    #endregion
    #region Voids
    private void SwappedCard()
    {
        if (flag) return;



        temp1 = previousParent;
        transform.SetParent(parentAfterDrag);
        parentAfterDrag.GetChild(0).transform.SetParent(temp1);

        deleteMonsterHandler -= DeleteMonster;
        flag = true;
    }

    private void SwappedMonster()
    {

        if (flag) return;



        if (previousParent.GetChild(0).transform.GetComponent<CardHandler>().monster != null)
        {
            previousParent.GetChild(0).transform.GetComponent<CardHandler>().monster.transform.SetParent(GameManager.instance.monsterParents[transform.GetComponent<CardHandler>().previousSlotPos]);
            previousParent.GetChild(0).transform.GetComponent<CardHandler>().monster.transform.localPosition = Vector3.zero;
        }
        if (monster != null)
        {
            monster.transform.SetParent(GameManager.instance.monsterParents[parentAfterDrag.GetChild(0).transform.GetComponent<CardHandler>().slotPos]);
            monster.transform.localPosition = Vector3.zero;

        }



        flag = true;
    }
    public void CreateMonster(Transform parent, Transform data)
    {
        GameManager.instance.CreateMonster(ref parent.GetComponent<CardHolderSlot>().cardTransform,
                ref data.GetComponent<Card>().data, parent.GetComponent<CardHolderSlot>().MonsterCount, ref thisHandler, ref thisSlot, slotPos); //create monster , what can I said
    }
    private void DeleteMonster()
    {
        Debug.Log("X");
        if (monster == null) return;
        Destroy(monster.gameObject);
    }
    private void Activator()
    {
        stopHandler += Stop;
        setParentHandler += SetParent;
        createMonsterHandler += CreateMonster;
        setPreviousParentHandler += SetPreviousParent;
        swapHandler += Swap;
        deleteMonsterHandler += DeleteMonster;
        flag = false;
    }
    #endregion

}


