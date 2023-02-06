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

    CardHolderSlot slot;

    public Card[] cards;

    public bool thisToggle = false; // check if the card is the card that has a toggle
    private void Awake()
    {
        card = GetComponent<Card>();
    }
    private void Start()
    {
    }

    public void TakeDamage()
    {
        Debug.Log(greenCard()+"-x");
        int damage = DamageAmount();
        maxHealth = card.data.heal;

        int damageAmount = damage - currentHealth;
        if(damage>0)
        {
            if (TryGetComponent<CardHolderSlot>(out CardHolderSlot slot) == true)
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
        }


        
    }

    private Card greenCard()
    {
        cards = FindObjectsOfType<Card>();
        for (int i = 0; i < cards.Length; i++)
        {
            if (cards[i].GetComponent<HealthSystem>().thisToggle&& !cards[i].isEnemy)
            {
                return cards[i];
               
            }
        }
        return null;
    }

    private int DamageAmount()
    {
        int damage1 = greenCard().GetComponent<HealthSystem>().maxHealth;
        int damage2;

        if (greenCard().GetComponentInParent<CardHolderSlot>().backSlot.GetComponent<HealthSystem>() == null) damage2 = 0;
        else damage2 = greenCard().GetComponentInParent<CardHolderSlot>().backSlot.GetComponent<HealthSystem>().maxHealth;

        return damage1 + damage2;
    }
    public void BattleToggler() => CardManager.instance.BattleToggler();
    public void ThisToggle(bool on) => thisToggle = on;
}