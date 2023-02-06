using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HolderData : MonoBehaviour
{
    public bool isLeader;

    public Monster monster;
    private void Update()
    {
        if (transform.childCount <= 0&& monster!=null) Destroy(monster.gameObject);
    }
}
