using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class Monster : MonoBehaviour
{
    [Header("Data")]
    [SerializeField] MonsterObject[] dataList;// scirptable object list for enemy
    public MonsterObject data; // the scriptable object
    [Space(15)]
    public Card card_data;
    AnimatorOverrideController aoc; // the animation clip handler
    Animator monsterAnimator; // the monster animator

    TextMeshProUGUI textMesh; // the heal text
    RectTransform canvas; // the heal transform

    public bool isEnemy; // bool to check if he is an enemy or not 

   [HideInInspector] public int MonsterCount;

    public int RandomData;
    

    private void Awake()
    {
     ///references
        monsterAnimator = GetComponentInChildren<Animator>();
        textMesh = GetComponentInChildren<TextMeshProUGUI>();
        canvas = GetComponentInChildren<RectTransform>();
       
    }

   
    private void Start()
    {
        RandomData = Random.Range(0, dataList.Length); // set the random intgeger for the data
       
        
        MonsterData();
        Setter(data.clip, data.name, data.pos, data.spritePos,data.canvasPos, data.heal);
    }

    void MonsterData()
    {
        if (isEnemy)
        {
            data = dataList[RandomData]; MonsterCount = 4; /* generate random enemy , make the monster count is 4 , which mean impossible to                                      
         catch from the monster fields */
            card_data.data = data;
        }
        else { textMesh.text = string.Empty; /*delete health from them*/}

    }
    private void Setter(AnimationClip img, string name, Vector3 pos, Vector3 spritePos,Vector3 canvasPos, int heal)
    {
        SetAnimationController(ref img);
        gameObject.name = name;
        transform.position = transform.position + pos;
        textMesh.text = $"{heal}/{heal}";
        monsterAnimator.transform.localPosition = spritePos;
        canvas.anchoredPosition = canvasPos;
        transform.localScale = new Vector3(1, 1, 1);
        if(!isEnemy) textMesh.text = string.Empty;
    }
    private void SetAnimationController(ref AnimationClip clip)
    {

        aoc = new AnimatorOverrideController(monsterAnimator.runtimeAnimatorController);
        var anims = new List<KeyValuePair<AnimationClip, AnimationClip>>();

        anims.Add(new KeyValuePair<AnimationClip, AnimationClip>(aoc.animationClips[0], clip));

        aoc.ApplyOverrides(anims);

        monsterAnimator.runtimeAnimatorController = aoc;


    }
}
