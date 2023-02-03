using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeaderCard : MonoBehaviour
{
    private Card[] cards;

    private void Awake()
    {
        cards = GetComponentsInChildren<Card>();
    }

    private void Start()
    {

        for (int i=0; i < cards.Length; i++){
            if (cards[i].data.Level > 1) Destroy(cards[i].gameObject);
        }
    }
}
