using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/Monster")]
public class MonsterObject : ScriptableObject
{
    public new string name;

    public Vector3 pos;
    [Space(15)]
    public Vector3 canvasPos;
    [Space(15)]
    public Vector3 spritePos;

    public int heal;
    public int Attack;
    public int Defense;

    public AnimationClip clip;

    public Sprite cardImage;

    [Space(15)]
    public int Level;
    [Space(15)]
    public bool isLeader=false;
}
