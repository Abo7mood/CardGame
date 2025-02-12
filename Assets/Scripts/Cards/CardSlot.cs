using UnityEngine.UI;
using UnityEngine;
using UnityEngine.EventSystems;
using static CardHandler;
public class CardSlot : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
{
   
    private CardHandler handler;
    private Card card;
    public bool isDrawed;
    public GameObject drawToggle, battleToggle;


    public bool isLeader=false;
    public bool CantMove;
    private void Awake()
    {
        card = GetComponent<Card>();
        handler = GetComponent<CardHandler>();
    }

    public void Toggler()
    {
      
        drawToggle.SetActive(false);
        battleToggle.SetActive(false);
        if (transform.GetComponentInParent<CardHolderSlot>()==null&& PhaseManager.instance.phases == PhaseManager.Phases.draw) 
         drawToggle.SetActive(true);
        else if (PhaseManager.instance.phases == PhaseManager.Phases.battle&& !card.isEnemy)
        {
            if (transform.parent.TryGetComponent<CardHolderSlot>(out CardHolderSlot slot) == true)
            {
                if(slot.isFront)
                battleToggle.SetActive(true);               
            }
        }     
    }

    public int ReDraw()
    {
        return drawToggle.GetComponent<DrawToggler>().DrawValue;
    }
    public void OnBeginDrag(PointerEventData eventData)
    {
        if (CantMove) return;
        handler.OnBeingDrag?.Invoke();
        handler.image.raycastTarget = false;
    }
    public void OnDrag(PointerEventData eventData)
    {
        if (CantMove) return;

        handler.OnDragDelegate?.Invoke();
    }
    public void OnEndDrag(PointerEventData eventData)
    {
        if (CantMove) return;
        //   OnEndSwitcher();
        handler.OnEndDrag?.Invoke();
        handler.image.raycastTarget = true;


    }

    public void Drawed() => isDrawed = !isDrawed;


}
