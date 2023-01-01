using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class GameManager : MonoBehaviour
{
    cards cards; //class 
    MonsterChild monsters;//class 
    public List<Monster> monstersChildren;//list for all monsters inside the game
    public static GameManager instance;//singleton
     
    public Transform[] monsterFields;//list for all monsterfields
    #region Cards
    public GameObject monsterPrefab; // the monster prefab
    [Space(10)]
    public GameObject cardPrefab;// the card prefab
    [Space(15)]
    public TextMeshProUGUI cardTXT; //card text like 33
    [Space(5)]
    public Transform cardParent; // the card parent , where should the card instintinate inside 
    public Transform monsterParent;// the monsterParent , where should the monster instintinate inside 


    #endregion




    /// <summary>
    /// singleton
    /// </summary>
    private void Awake()
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
        cards = new cards();
        monsters = new MonsterChild();
    }
    private void Start()
    {
       
        cards.CardSetter();
    }

    public void CreateCard() => cards.CreateCard();
    public void CreateMonster(ref Transform transform, ref MonsterObject card,int Count,ref CardSlot slot) => monsters.CreateMonster(ref transform,ref card,Count,ref slot);
}
class cards :GameManager
{
     int index = 0; // index to count

     int cardInTheGame; // card amount in the game 
    int cardSlot { get; set; } = 33; // card slot when we start 
     int cardInTheGameMaximum => 5; // the maximum card in your hand
     int cardRequire => 3; // how many cards can you pick in your hand at the moment

     int cardAmount { get; set; } //current card amount in your hand

    public void CardSetter()
    {
        cardAmount = instance.cardParent.transform.childCount;//set the card amount
        SetCardAmount();
        CreateCard();
    }
    public new void CreateCard()
    {
        while (canGenerateCard)
        {
            GameObject newCard= Instantiate(instance.cardPrefab, instance.cardParent.position, Quaternion.identity, instance.cardParent);//create object 
            index++;
            cardInTheGame++;
            cardSlot--;
            SetCardAmount();
        }
        index = 0; // reset index
    }

    private string SetCardAmount() => instance.cardTXT.text = cardSlot.ToString(); // set card text to card amount

    private bool canGenerateCard => index < cardRequire && instance.cardParent.transform.childCount < cardRequire && cardInTheGame < cardInTheGameMaximum && cardSlot > 0;
}
class MonsterChild : GameManager
{
    public new void CreateMonster(ref Transform parent,ref MonsterObject card, int Count,ref CardSlot slot)
    {
        GameObject newMonster = Instantiate(instance.monsterPrefab, parent.position, Quaternion.identity, monsterParent);//create object 
        newMonster.GetComponent<Monster>().data = card; // the monster card depend on the card data 
        newMonster.GetComponent<Monster>().MonsterCount = Count;// the monster Count depend on the card Count 
        instance.monstersChildren.Add(newMonster.GetComponent<Monster>()); // add the monster to 
        slot.monster = newMonster;
    }
}