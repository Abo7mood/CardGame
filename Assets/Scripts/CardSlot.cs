using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using static CardHandler;

public class CardSlot : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
{

    private CardHandler handler;
    private Card card;
    private void Awake()
    {
        card = GetComponent<Card>();
        handler = GetComponent<CardHandler>();
    }


    public void OnBeginDrag(PointerEventData eventData)
    {
        Debug.Log("BeginDrag");
        handler.OnBeingDrag?.Invoke();
        handler.image.raycastTarget = false;
    }
    public void OnDrag(PointerEventData eventData)
    {
        Debug.Log("OnDrag");
        handler.OnDragDelegate?.Invoke();
    }
    public void OnEndDrag(PointerEventData eventData)
    {
        handler.image.raycastTarget = true;

        //   OnEndSwitcher();
        handler.OnEndDrag?.Invoke();
        Debug.Log("OnEndDrag");


    }

   

}
