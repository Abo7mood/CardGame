using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardManager : MonoBehaviour
{
    public static CardManager instance;

    public Transform[] cardHolderSlots;
    private Monster[] monsters;
    private void Awake()
    {
        Init();
    }

    private void Start()
    {
        Subscriber();
    }



    private void Init()
    {

        if (instance == null)
            instance = this;
        else
        {
            if (instance != this)
            {
                Destroy(instance);
                instance = this;
            }
            else
                instance = this;
        }
    }
    private void Subscriber()
    {
        checkHandlerDelegate = Check;
        createMonsterDelegate = CreateMonster;
        deleteMonsterDelegate = DeleteMonster;
        swapMonstersDelegate = Swap;
    }

    #region Delegates
    public delegate void CheckDelegate();
    public CheckDelegate checkHandlerDelegate;
    public delegate void CreateMonsterDelegate(Transform parent, Transform data);
    private CreateMonsterDelegate createMonsterDelegate;
    public delegate void DeleteMonsterDelegate(int monster);
    private DeleteMonsterDelegate deleteMonsterDelegate;
    public delegate void SwapMonstersDelegate(int monster);
    private SwapMonstersDelegate swapMonstersDelegate;

    #endregion
    #region Components
    private CardHolderSlot holderSlot(Transform parent) => parent.GetComponent<CardHolderSlot>();
    private Card card(Transform parent) => parent.GetComponent<Card>();
    private CardHandler cardHandler (Transform parent) => parent.GetComponent<CardHandler>();
    private Transform child(Transform parent) => parent.GetChild(0).transform;

    #endregion
    #region Booleans
    bool IsEmptyMonster(int count) => GameManager.instance.monsterParents[count].transform.childCount <= 0;
    bool IsEmptyCardSlot(int count) => cardHolderSlots[count].childCount <= 0;
    bool IsTheSameEnemy(int count) => GameManager.instance.monsterParents[count].GetComponentInChildren<Monster>().data == card(child(cardHolderSlots[count])).data;
    #endregion
    public void Check()
    {
        for (int i = 0; i < cardHolderSlots.Length; i++)
        {

            if (!IsEmptyCardSlot(i)&&!IsEmptyMonster(i))
            {
                if (!IsTheSameEnemy(i))
                {
                    swapMonstersDelegate?.Invoke(i);
                    continue;
                }
            }
           
            Helpers.Logger(IsEmptyMonster(i) + " " + i);
            if (!IsEmptyCardSlot(i) && IsEmptyMonster(i))
            {
                createMonsterDelegate?.Invoke(cardHolderSlots[i], child(cardHolderSlots[i]));
                continue;
            }
            else if (IsEmptyCardSlot(i) && !IsEmptyMonster(i))
            {
                deleteMonsterDelegate?.Invoke(i);
                continue;

            }
        }


    }
    public void CreateMonster(Transform parent, Transform data)
    {

         GameManager.instance.CreateMonster(ref holderSlot(parent).cardTransform,
                ref card(data).data, holderSlot(parent).MonsterCount, ref cardHandler(data).thisHandler, ref cardHandler(data).thisSlot, cardHandler(data).slotPos); //create monster , what can I said
    }
    private void DeleteMonster(int monsterCount)
    {

        Destroy(GameManager.instance.monsterParents[monsterCount].transform.GetChild(0).gameObject);
    }
    private void Swap(int i)
    {    
            Helpers.Logger("X");
        GameManager.instance.monsterParents[i].GetComponentInChildren<Monster>().data = card(child(cardHolderSlots[i])).data;
        GameManager.instance.monsterParents[i].GetComponentInChildren<Monster>().Setter();
    }
}