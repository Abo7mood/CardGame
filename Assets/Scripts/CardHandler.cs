using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CardHandler : MonoBehaviour
{
    #region Events

    public BeingDragDelegate OnBeingDrag;
    public DragDelegate OnDragDelegate;
    public EndDragDelegate OnEndDrag;
    #endregion

    #region Components
    [HideInInspector] public Transform parentAfterDrag { get; set; } // the current parent
    Transform previousParent; // the previous parent
    public Image image; // card image
    public GameObject monster { get; set; } // this is the monster so we can destroy it easily

    #endregion

    #region booleans

    #endregion
    CardSlot thisSlot; // pass our cardslot to the gamemanager idea
    CardHandler thisHandler;
    private void Awake() {
        initialize();
    }
    private void initialize()
    {
        thisSlot = GetComponent<CardSlot>();
        thisHandler = GetComponent<CardHandler>();
       
        OnBeingDrag += BeingDrag;
        OnDragDelegate += Drag;
        OnEndDrag += EndDrag;
        

    }
    #region Delegate
    public delegate void BeingDragDelegate();
    public delegate void DragDelegate();
    public delegate void EndDragDelegate();

    #endregion
    public void BeingDrag()
    {
        parentAfterDrag = transform.parent; //set the new grid to my transform parent
        transform.SetParent(transform.root); // put the transform at the top of the list
        transform.SetAsLastSibling();//then make hte the last object 
        image.raycastTarget = false; // disable raycast so I can click on it
        previousParent = parentAfterDrag; // make the previous is my parentafterdrag
        
    }
    public void Drag()
    {
        transform.position = Input.GetTouch(0).position; // get the positoin
    }
    public void EndDrag()
    {
       
        DeleteMonster();
        SetParent();

        GameManager.instance.CreateCard();
    }
   
    private void DeleteMonster()
    {
        if (previousParent.GetComponent<CardHolderSlot>() == null||IsLeader(parentAfterDrag)) return; // null reference fix 
        Destroy(monster);
        if (parentAfterDrag.childCount > 0)
        {
            Debug.Log("A");

            Destroy(SwappedCard(parentAfterDrag).GetComponent<CardHandler>().monster);
            if (!IsFront(previousParent)) return;

            GameManager.instance.CreateMonster(ref previousParent.GetComponent<CardHolderSlot>().cardTransform,
               ref SwappedCard(parentAfterDrag).GetComponent<CardSlot>().GetComponent<Card>().data,
                previousParent.GetComponent<CardHolderSlot>().MonsterCount,ref thisHandler, ref SwappedCard(parentAfterDrag).GetComponent<CardHandler>().thisSlot);

        }


    }
    public void SetParent()
    {

        if (IsLeader(parentAfterDrag)&& isFull(parentAfterDrag))
        {
            transform.SetParent(previousParent); //change parent to parentafterdrag  
            return;
        }
        if (isFull(parentAfterDrag)) //check if the field has any cards
        {
            SwappedCard(parentAfterDrag).SetParent(previousParent);
            transform.SetParent(parentAfterDrag);//change parent to previousParent
            return;
        }
        else
        {
            transform.SetParent(parentAfterDrag); //change parent to parentafterdrag     
        }

        if (IsFront(parentAfterDrag))
        {
            CreateMonster(parentAfterDrag, transform);
        }
    }

    bool IsFront(Transform parent) => parent.GetComponent<CardHolderSlot>() != null && parent.GetComponent<CardHolderSlot>().isFront; // if this card is a front card (attackable)
    bool isFull(Transform transform) => transform.transform.childCount > 0&&transform.GetChild(0).transform; // if this card has  childrens
    bool isHand(Transform transform) => transform.GetComponent<CardSizer>() != null;
    bool IsLeader(Transform transform)
    {
        if (transform.GetComponent<CardHolderSlot>() != null)
            return transform.GetComponent<CardHolderSlot>().isLeader;
        else return false;
    }
    Transform SwappedCard(Transform swappedParent) => swappedParent.transform.GetChild(0).transform;
    public void CreateMonster(Transform parent, Transform data)
    {
        GameManager.instance.CreateMonster(ref parent.GetComponent<CardHolderSlot>().cardTransform,
                ref data.GetComponent<Card>().data, parent.GetComponent<CardHolderSlot>().MonsterCount,ref thisHandler, ref thisSlot); //create monster , what can I said
    }
}
