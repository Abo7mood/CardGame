using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
public class CardHolderSlot : MonoBehaviour,IDropHandler
{
    public Sprite leaderImage; // the image for the leader , so we can change it from the script 
    private GridLayoutGroup grid;
    #region booleans
  public bool isFront  = false; // boolean to check if the slot is front (attackable or not )
    public bool isLeader  = false; // is leader or not 
    public bool isEnemy;// is Enemy or not 
    #endregion
  

    public Transform cardTransform; // where should be the field instinitate the monster
    private Image image;
    
    public int MonsterCount;// what is the monster count for this field 

    CardHandler draggableItem;
    private void Awake()
    {
        image = GetComponent<Image>();
        grid = GetComponent<GridLayoutGroup>();
    }
    private void Start()
    {
        if (isLeader) image.sprite = leaderImage;

        if(isEnemy)
        {
            grid.enabled = false;
            Destroy(this);
        }
    }
    public void OnDrop(PointerEventData eventData)
    {  
        GameObject dropped = eventData.pointerDrag;
         draggableItem = dropped.GetComponent<CardHandler>();
        if (draggableItem == null) return;
        draggableItem.parentAfterDrag = transform;

        if (isLeader&& transform.childCount<=0)
        {
            StartCoroutine(LeaderBehaviour(0.05f));

        }
    }
    IEnumerator LeaderBehaviour(float time)
    {
        yield return new WaitForSeconds(time);
        draggableItem.GetComponent<CardHandler>().OnBeingDrag -= draggableItem.GetComponent<CardHandler>().BeingDrag;
        draggableItem.GetComponent<CardHandler>().OnDragDelegate -= draggableItem.GetComponent<CardHandler>().Drag;
        draggableItem.GetComponent<CardHandler>().OnEndDrag -= draggableItem.GetComponent<CardHandler>().EndDrag;
        draggableItem.GetComponent<Card>().isFieldLeader = true;
    }
  
}
