using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class HealthSystem : MonoBehaviour
{
    public int currentHealth;
    public int maxHealth = 100;

    Card card;

    public Outline line;

    public Color lineColor;

   [SerializeField] HolderData slot;

    public Card[] cards;

    public bool thisToggle = false; // check if the card is the card that has a toggle
    private void Awake()
    {
        card = GetComponent<Card>();
    }
   

    public void TakeDamage()
    {
       
        if (LifePointSystem.isLeader && PhaseManager.instance.canDraw)
        {
            GameManager.instance.CreateCard(LifePointSystem.greenCard.GetComponent<Card>().data.Level);
            PhaseManager.instance.canDraw = false;
            Debug.Log("Work");

        }

        int damage = DamageAmount();
        maxHealth = card.data.heal;

        int damageAmount = damage - maxHealth;
        Debug.Log(damageAmount);
        if(damageAmount > 0)
        {
            if (slot != null)
            {
                if (slot.isLeader)
                {
                    LifePointSystem.instance.TakeDamage(damageAmount);
                }
                else
                {
                    CardManager.instance.DeleteCard(gameObject);
                }
            }
            Debug.Log("is greater than 0");

        }
       
    }

    private int DamageAmount()
    {
        int damage1 = LifePointSystem.greenCard.GetComponent<Card>().data.Attack;
        int damage2;

        if (LifePointSystem.greenCard.GetComponentInParent<CardHolderSlot>().backSlot.GetComponentInChildren<Card>() == null) damage2 = 0;
        else damage2 = LifePointSystem.greenCard.GetComponentInParent<CardHolderSlot>().backSlot.GetComponentInChildren<Card>().data.Attack;

        return damage1 + damage2;
    }
    public void BattleToggler() {
        
        CardManager.instance.BattleToggler();
        if (!GetComponent<Card>().isEnemy)
        {
            LifePointSystem.greenCard = gameObject.GetComponent<Card>();
            LifePointSystem.isLeader = gameObject.GetComponentInParent<CardHolderSlot>().isLeader;

            Debug.Log(LifePointSystem.isLeader + "X");
        }
    } 
    public void ThisToggle(bool on) => thisToggle = on;
}