using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class DrawToggler : MonoBehaviour
{
    public int drawValue;
   public int DrawValue { get { return drawValue = GetComponent<Toggle>().isOn ? 1 : 0; ; } set { drawValue = GetComponent<Toggle>().isOn ? 1 : 0; } }
}
