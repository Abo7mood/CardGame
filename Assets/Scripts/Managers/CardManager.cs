using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardManager : MonoBehaviour
{
    public static CardManager instance;

    public Transform[] cardHolderSlots;

    public Transform[] enemyCards;

    private Monster[] monsters;
    [Space(15)]
    public CardHolderSlot cardPlayerSlot, cardEnemySlot;
    [Space(5)]
   [SerializeField] GameObject leaderPanel; //disable and enable panels to start the game

    [SerializeField] GameObject phaseButton;

    bool battleToggler;
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
    public void StartTheGame()
    {
        leaderPanel.SetActive(false);
        phaseButton.SetActive(true);
        PhaseManager.instance.phases = PhaseManager.Phases.draw;
    }
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
    public void DeleteCard( GameObject obj)
    {
        Destroy(obj);
        GameManager.instance.cardDropZone++;
        GameManager.instance.SetCardAmount();
    }
    private void Swap(int i)
    {    
        GameManager.instance.monsterParents[i].GetComponentInChildren<Monster>().data = card(child(cardHolderSlots[i])).data;
        GameManager.instance.monsterParents[i].GetComponentInChildren<Monster>().Setter();
    }

    public void BattleToggler()
    {
        battleToggler = !battleToggler;
        for (int i = 0; i < enemyCards.Length; i++)
        {
            if (enemyCards[i] == null) continue;
            enemyCards[i].GetComponent<HealthSystem>().line.enabled = battleToggler;
            enemyCards[i].GetComponent<HealthSystem>().line.effectColor = enemyCards[i].GetComponent<HealthSystem>().lineColor;
            enemyCards[i].GetComponent<Card>().battleToggle.SetActive(battleToggler);

        }
    }
}
