using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
public class CardHolderSlot : MonoBehaviour, IDropHandler
{
    [Header("Leader")]
    public bool isLeaderStartSlot;
    public Transform[] cardHolderSlots;
    [SerializeField] ScrollRect rect;
    [Header("Data")]
    public int slotPos;
    [Space(15)]
    public Sprite leaderImage; // the image for the leader , so we can change it from the script 
    private GridLayoutGroup grid;
    #region booleans
    public bool isFront = false; // boolean to check if the slot is front (attackable or not )
    public bool isLeader = false; // is leader or not 
    public bool isEnemy;// is Enemy or not 
    #endregion


    public Transform cardTransform; // where should be the field instinitate the monster
    private Image image;

    public int MonsterCount;// what is the monster count for this field 

    CardHandler draggableItem;

    GameObject dropped;

    public GameObject monster;
    private void Awake()
    {
        image = GetComponent<Image>();
        grid = GetComponent<GridLayoutGroup>();
    }
    private void Start()
    {
        if (isLeader) image.sprite = leaderImage;

        if (isEnemy)
        {
            grid.enabled = false;
            Destroy(this);
        }
    }

    public void OnDrop(PointerEventData eventData)
    {
        dropped = eventData.pointerDrag;
        draggableItem = dropped.GetComponent<CardHandler>();
        if (draggableItem == null) return;

        if (isLeaderStartSlot)
        {
            LeaderSlot();
           
        }
        Setter();

        if (isLeader && transform.childCount <= 0)
        {
            StartCoroutine(LeaderBehaviour(0.05f));
        }
    }

    private void LeaderSlot()
    {
        for (int i = 0; i < cardHolderSlots.Length; i++)
        {
            cardHolderSlots[i].gameObject.SetActive(true);
        }
        isLeaderStartSlot = false;
        rect.enabled = true;
        PhaseManager.instance.SwitcherSetter();
        CardManager.instance.StartTheGame();

    }
    private void Setter()
    {
        draggableItem.parentAfterDrag = transform;
        draggableItem.slotPos = slotPos;
        draggableItem.cardHolderSlotAfter = this;
        monster = draggableItem.monster;
        draggableItem.cardPlacedCounter++;
    }
    IEnumerator LeaderBehaviour(float time)
    {
        yield return new WaitForSeconds(time);
        draggableItem.OnBeingDrag -= draggableItem.GetComponent<CardHandler>().BeingDrag;
        draggableItem.OnDragDelegate -= draggableItem.GetComponent<CardHandler>().Drag;
        draggableItem.OnEndDrag -= draggableItem.GetComponent<CardHandler>().EndDrag;
        draggableItem.gameObject.GetComponent<Card>().isFieldLeader = true;

    }

}
