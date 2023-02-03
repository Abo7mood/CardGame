using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StateManager : MonoBehaviour
{
    public static StateManager instance;

    private void Awake()
    {
        Init();
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
