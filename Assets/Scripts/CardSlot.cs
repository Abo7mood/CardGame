using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
public class CardSlot : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
{
    #region Data

    #endregion
    private bool canDrag=true;
    public bool CanDrag { get => canDrag; set => canDrag = value; }
    [HideInInspector] public Transform parentAfterDrag; // the current parent
    Transform previousParent; // the previous parent
    public Image image; // card image
    CardSlot thisSlot; // pass our cardslot to the gamemanager idea
    public GameObject monster; // this is the monster so we can destroy it easily
    private void Awake()
    {
        thisSlot = this;
    }
    public void OnBeginDrag(PointerEventData eventData)
    {
        if (!canDrag) return;
        Debug.Log("BeginDrag");
        parentAfterDrag = transform.parent; //set the new grid to my transform parent
        transform.SetParent(transform.root); // put the transform at the top of the list
        transform.SetAsLastSibling();//then make hte the last object 
        image.raycastTarget = false; // disable raycast so I can click on it
        previousParent = parentAfterDrag; // make the previous is my parentafterdrag
    }
    public void OnDrag(PointerEventData eventData)
    {
        

        Debug.Log("OnDrag");
        transform.position = Input.GetTouch(0).position; // get the positoin

    }
    public void OnEndDrag(PointerEventData eventData)
    {
       

        Debug.Log("OnEndDrag");
        DeleteMonster();
        SetParent();
        image.raycastTarget = true;// enable raycast so I can click on it

        GameManager.instance.CreateCard();
       
    }
   private void DeleteMonster()
    {
        if (previousParent.GetComponent<CardHolderSlot>() == null) return; // null reference fix 
      
            Destroy(monster);
        if (parentAfterDrag.childCount > 0)
        {
            Destroy(SwappedCard(parentAfterDrag).GetComponent<CardSlot>().monster);
            if (!IsFront(previousParent)) return;

            GameManager.instance.CreateMonster(ref previousParent.GetComponent<CardHolderSlot>().cardTransform,
               ref SwappedCard(parentAfterDrag).GetComponent<CardSlot>().GetComponent<Card>().data,
                previousParent.GetComponent<CardHolderSlot>().MonsterCount, ref SwappedCard(parentAfterDrag).GetComponent<CardSlot>().thisSlot);

        }


    }
    private void SetParent()
    {
        if (isFull(parentAfterDrag)) //check if the field has any cards
        {


            SwappedCard(parentAfterDrag).SetParent(previousParent);
            transform.SetParent(parentAfterDrag);//change parent to previousParent
        
        }     
        else
        {
            transform.SetParent(parentAfterDrag); //change parent to parentafterdrag     
        }

        if (IsFront(parentAfterDrag)) 
        {
            CreateMonster(parentAfterDrag,transform);
        }
    }
    bool IsFront(Transform parent) => parent.GetComponent<CardHolderSlot>() != null && parent.GetComponent<CardHolderSlot>().isFront; // if this card is a front card (attackable)
    bool isFull(Transform transform) => transform.transform.childCount > 0; // if this card has  childrens
    bool isHand(Transform transform) =>transform.GetComponent<CardSizer>()!=null;
    Transform SwappedCard(Transform swappedParent) => swappedParent.transform.GetChild(0).transform;
    public void CreateMonster(Transform parent,Transform data)
    {
        GameManager.instance.CreateMonster(ref parent.GetComponent<CardHolderSlot>().cardTransform,
                ref data.GetComponent<Card>().data, parent.GetComponent<CardHolderSlot>().MonsterCount, ref thisSlot); //create monster , what can I said
    }
}
