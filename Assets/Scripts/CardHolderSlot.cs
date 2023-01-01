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
        CardSlot draggableItem = dropped.GetComponent<CardSlot>();
        if(draggableItem!=null)
        draggableItem.parentAfterDrag = transform;
    }

  
}
