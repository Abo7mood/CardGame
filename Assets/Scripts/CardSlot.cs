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
        handler.OnBeingDrag?.Invoke();
        handler.image.raycastTarget = false;
    }
    public void OnDrag(PointerEventData eventData)
    {
        handler.OnDragDelegate?.Invoke();
    }
    public void OnEndDrag(PointerEventData eventData)
    {

        //   OnEndSwitcher();
        handler.OnEndDrag?.Invoke();
        handler.image.raycastTarget = true;


    }



}
