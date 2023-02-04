using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class GameManager : MonoBehaviour
{
   public static cards cards; //class 
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
    public TextMeshProUGUI DropTXT; //drop zone cards amount

    [Space(5)]
    public Transform cardParent; // the card parent , where should the card instintinate inside 
    public Transform[] monsterParents;// the monsterParent , where should the monster instintinate inside 
    public Transform[] hideParents;// the hideParents , where we can hide the monsters so no one can see the monster


    #endregion
    #region ints
    public int cardDropZone { get; set; } = 0; // card slot when we start 
    #endregion

    /// <summary>
    /// singleton
    /// </summary>
    private void Awake()
    {
        Init();
         cards = new cards();
        monsters = new MonsterChild();
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
    private void Start()
    {
        SetCard();
    }
    public void SetCard() => cards.CardSetter();
    public virtual void CreateCard(int amount) => cards.CreateCard(amount);
    public virtual void CreateMonster(ref Transform transform, ref MonsterObject card,int Count, ref CardHandler handler, ref CardSlot slot, int slotPos) =>
        monsters.CreateMonster(ref transform,ref card,Count,ref handler,ref slot,slotPos);

    public void SetCardAmount()
    {
        cards.cardAmount = cardParent.transform.childCount;//set the card amount
        instance.cardTXT.text = cards.cardSlot.ToString(); // set card text to card amount
        instance.DropTXT.text = instance.cardDropZone.ToString();
    }
}
 public class cards :GameManager
{
     int index = 0; // index to count


    public int cardSlot { get; set; } = 40; // card slot when we start 

    int cardInTheGameMaximum => 5; // the maximum card in your hand

    public int cardAmount { get; set; } //current card amount in your hand

    public int drawCardsAmount { get; } = 5;

    public void CardSetter() => instance.SetCardAmount();

    public override void CreateCard(int amount)
    {
        Debug.Log("X");
        while (canGenerateCard&&index<amount)
        {
            GameObject newCard= Instantiate(instance.cardPrefab, instance.cardParent.position, Quaternion.identity, instance.cardParent);//create object 
            index++;
            cardSlot--;
        }
        instance.SetCardAmount();
        PhaseManager.instance.PhaseStart(); // so we can toggle cards;
        index = 0; // reset index

    }

    private bool canGenerateCard =>  cardSlot > 0;
}
class MonsterChild : GameManager
{
    public override void CreateMonster(ref Transform parent,ref MonsterObject card, int Count,ref CardHandler handler,ref CardSlot slot,int slotPos)
    {
       

        GameObject newMonster = Instantiate(instance.monsterPrefab, parent.position, Quaternion.identity, instance.monsterParents[slotPos]);//create object 
        newMonster.GetComponent<Monster>().data = card; // the monster card depend on the card data 
        newMonster.GetComponent<Monster>().MonsterCount = Count;// the monster Count depend on the card Count 
        instance.monstersChildren.Add(newMonster.GetComponent<Monster>()); // add the monster to 
        handler.monster = newMonster;
    }
}