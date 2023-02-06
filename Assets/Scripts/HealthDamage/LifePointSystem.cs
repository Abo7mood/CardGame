using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class LifePointSystem : MonoBehaviour
{
    public static LifePointSystem instance;

    public static Card greenCard;
    public static bool isLeader;
    [SerializeField] TextMeshProUGUI healthText;
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

    public int startingHealth = 100;
        public int currentHealth;
        public int maxHealth = 100;

        private void Start()
        {
            currentHealth = startingHealth;
        }

        public void TakeDamage(int damage)
        {
            currentHealth -= damage;

            if (currentHealth <= 0)
            {
                currentHealth = 0;
                Debug.Log("Player is Dead!");
            }
        healthText.text = currentHealth.ToString();
        }

        public void Heal(int healAmount)
        {
            currentHealth += healAmount;

            if (currentHealth > maxHealth)
            {
                currentHealth = maxHealth;
            }
        }
    
}
