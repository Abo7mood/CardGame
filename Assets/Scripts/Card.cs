using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Card : MonoBehaviour
{
    public bool isEnemy = false;

    public MonsterObject[] dataList; // all the cards scriptable objects

    [HideInInspector] public MonsterObject data; // scriptable object 

    [Space(5)]
    Image image; // the image for the card




    public bool isLeader { get; set; } = false;
    public bool isFieldLeader { get; set; } = false;

    private void Awake()
    {
        image = GetComponent<Image>();

        if (!isEnemy) data = dataList[Random.Range(0, dataList.Length)]; // assign scriptable object 
        else
            transform.eulerAngles = new Vector3(0, 0, 180);
    }
    private void Start()
    {

        StartCoroutine(awaitSetter());
    }
    void Setter(string name, Sprite cardImage)
    {
        gameObject.name = name;
        image.sprite = cardImage;     
    }
    IEnumerator awaitSetter()
    {
        yield return new WaitUntil(()=>data != null);
        Setter(data.name, data.cardImage);
    }
}
