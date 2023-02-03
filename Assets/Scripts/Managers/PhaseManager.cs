using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class PhaseManager : MonoBehaviour
{
    public static PhaseManager instance;
    [HideInInspector] public int phaseNumber { get; set; } = 0;
    public Phases phases;
    public enum Phases
    {
        draw,
        leader,
        main,
        battle
       
    }
    [Space(10)]
    public CardSlot[] cards;
    [Space(10)]
    [SerializeField] TextMeshProUGUI phaseButtonTXT;
    private void Awake()
    {
        Init();
    }
    private void Start()
    {
        cards = FindObjectsOfType<CardSlot>();
    }
    public void SwitcherSetter()
    {
        if (phaseNumber >= 4) phaseNumber = 0;
        phases = (Phases)phaseNumber;
        phaseButtonTXT.text = PhaseString();
        Switcher();
        phaseNumber++;

    }
    public void Switcher()
    {
        PhaseStart();
        switch (phases)
        {
            case Phases.draw:
                StartCoroutine(StopMovingCards(0.05f,true));
                break;
            case Phases.leader:
                DestroyCards();
                DrawCards();

                break;
            case Phases.main:
                StartCoroutine(StopMovingCards(0.05f, false));

                break;
            case Phases.battle:
                break;            
            default:
                break;
        }
    }
    private void PhaseStart()
    {
        cards = FindObjectsOfType<CardSlot>();

        for (int i = 0; i < cards.Length; i++)
        {
            if(cards[i]!=null)
            cards[i].Toggler();
        }
    }
    private void DrawCards()
    {
        int index=0;
        for (int i = 0; i < cards.Length; i++)
        {
            index+= cards[i].ReDraw();
        }
        Debug.Log(index + $": {this.name}");
        GameManager.instance.CreateCard(index);
    }
    private void DestroyCards()
    {
        ///basically destroying the cards that we don't need at all
        for (int i = 0; i < cards.Length; i++)
        {
            if (cards[i].GetComponent<CardSlot>().isDrawed == true) CardManager.instance.DeleteCard(cards[i].gameObject);
        }

    }
    
    private string PhaseString()
    {
        string phaseName;
        switch (phases)
        {
            
            case Phases.draw:
                phaseName = "DP";
                break;
            case Phases.leader:
                phaseName = "LP";
                break;
            case Phases.main:
                phaseName = "MP";
                break;
            case Phases.battle:
                phaseName = "BP";
                break;
            default:
                phaseName = "SP";
                break;
        }
        return phaseName;
    }
    private IEnumerator StopMovingCards(float time,bool Stop)
    {
        yield return new WaitForSeconds(time);
        for (int i = 0; i < cards.Length; i++)
        {
            cards[i].CantMove = Stop;
        }
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
}
