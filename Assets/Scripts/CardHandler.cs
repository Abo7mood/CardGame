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
    private EventHandler setParentHandler;
    private EventHandler setPreviousParentHandler;
    private EventHandler swapHandler;
    private EventHandler handHandler;

    #endregion
    #region Components
    [HideInInspector] public Transform parentAfterDrag { get; set; } // the current parent
    Transform previousParent; // the previous parent
    Transform swappedParent; // the second card we swapped with
    public Image image; // card image
    public GameObject monster; // this is the monster so we can destroy it easily

    Transform temp1;

  [HideInInspector] public CardSlot thisSlot; // pass our cardslot to the gamemanager idea
  [HideInInspector] public CardHandler thisHandler;
    CardHolderSlot cardHolderSlotBefore;
  [HideInInspector] public CardHolderSlot cardHolderSlotAfter;

    #endregion
    #region vectors


    #endregion

    #region booleans
    private bool flag = false;
    #endregion

    #region Integers
    [HideInInspector] public int previousSlotPos;
    [HideInInspector] public int slotPos;

     public int cardPlacedCounter { get; set; } //how many times the card placed on the card holder slot

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
            cardHolderSlotBefore = transform.parent.GetComponent<CardHolderSlot>();
            previousSlotPos = cardHolderSlotBefore.slotPos;

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

        swapHandler?.Invoke(this, EventArgs.Empty);

        setParentHandler?.Invoke(this, EventArgs.Empty);

        setPreviousParentHandler?.Invoke(this, EventArgs.Empty);

        CardManager.instance.checkHandlerDelegate?.Invoke();

        

        Activator();


    }
  
    private void SetParent(object sender, EventArgs e)
    {
        if (!Situation1()) return;
        transform.SetParent(parentAfterDrag); //change parent to parentafterdrag        
        setPreviousParentHandler -= SetPreviousParent;
    }

   

    private void SetPreviousParent(object sender, EventArgs e)
    {
        if (Situation2())
            transform.SetParent(previousParent); //change parent to parentafterdrag  
    }

    private void Swap(object sender, EventArgs e)
    {
        if (Situation3())
        {

            SwappedCard();
            flag = false;
            handHandler?.Invoke(this, EventArgs.Empty);
        }
    }
    private void Hand(object sender, EventArgs e)
    {
        if (IsHand(swappedParent))
        {
            Destroy(swappedParent.GetChild(swappedParent.childCount-1).gameObject);
            GameManager.instance.cardDropZone++;
            GameManager.instance.SetCardAmount();
        }
    }
    #region Booleans1
    private bool Situation1() => !IsFull(parentAfterDrag);
    private bool Situation2() => IsLeader(parentAfterDrag) && IsFull(parentAfterDrag);
    private bool Situation3() => IsFull(parentAfterDrag) && !IsLeader(parentAfterDrag) && IsSlot(parentAfterDrag);

    #endregion

    #region Booleans2
    bool IsFront(Transform parent) => parent.GetComponent<CardHolderSlot>() != null && parent.GetComponent<CardHolderSlot>().isFront; // if this card is a front card (attackable)
    bool IsFull(Transform transform) => transform.transform.childCount > 0 && transform.GetChild(0).transform != null && transform.GetComponent<CardHolderSlot>() != null; // if this card has  childrens
    bool IsHand(Transform transform) => transform.GetComponent<CardSizer>() != null;

    bool IsSlot(Transform transform) => transform.GetComponent<CardHolderSlot>() != null;
    bool IsLeader(Transform transform)
    {
        if (transform.GetComponent<CardHolderSlot>() != null)
            return transform.GetComponent<CardHolderSlot>().isLeader;
        else return false;
    }
    #endregion

    #region Behaviours
    #endregion
    #region Voids
    private void SwappedCard()
    {
        if (flag) return;

        temp1 = previousParent;
        transform.SetParent(parentAfterDrag);
        parentAfterDrag.GetChild(0).transform.SetParent(temp1);
        swappedParent = temp1;
        flag = true;
    }
  
    private void Activator()
    {
        setParentHandler += SetParent;
        setPreviousParentHandler += SetPreviousParent;
        swapHandler += Swap;
        handHandler += Hand;
        flag = false;
    }
    #endregion

}


