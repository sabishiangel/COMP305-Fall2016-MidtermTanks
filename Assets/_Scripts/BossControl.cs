using UnityEngine;
using System.Collections;

public class BossControl : MonoBehaviour
{
    // PUBLIC INSTANCE VARIABLES
    public Speed speed;
    public Boundary boundary;
    public Transform player;
    public GameObject canonball;
    public float canonDistance = 5f;
    public float timeBetweenFires = 2.5f;

    float lastFired = -100f; //absolute time of last fired shot

    //Private Instance Variables
    private float timeTilNextFire = 3.0f;
    private float _CurrentSpeed;
    private float _CurrentDrift;

    //Public Properties

    // Use this for initialization
    void Start()
    {
        this._Reset();
        player = GameObject.Find("Stephanie1").transform;
        if (!player)
            Debug.Log("ERROR could not find Player!");
    }

    // Update is called once per frame
    void Update()
    {
        Vector2 currentPosition = gameObject.GetComponent<Transform>().position;
        currentPosition.y -= this._CurrentSpeed;
        gameObject.GetComponent<Transform>().position = currentPosition;

        // Check bottom boundary
        if (currentPosition.y <= boundary.yMin)
        {
            this._Reset();
        }

        Invoke("ShootCanon", 1f);
    }

    // resets the gameObject
    private void _Reset()
    {
        this._CurrentSpeed = Random.Range(speed.minSpeed, speed.maxSpeed);
        Vector2 resetPosition = new Vector2(Random.Range(boundary.xMin, boundary.xMax), boundary.yMax);
        gameObject.GetComponent<Transform>().position = resetPosition;
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        //score points
        if (other.gameObject.CompareTag("ScorePlane"))
        {
            _Reset();
        }

        //hit player
        if (other.gameObject.CompareTag("Player"))
        {
            _Reset();

        }
    }

    void ShootCanon()
    {
        //audioSource.PlayOneShot(shootSound, 1.0f);

        if (Time.time < lastFired + timeBetweenFires)
        {
            return;
        }

        lastFired = Time.time;

        GameObject canonballShot = (GameObject)Instantiate(canonball, transform.position, transform.rotation);
        canonballShot.transform.position = transform.position;

        Vector2 direction = player.transform.position - canonballShot.transform.position;

        canonballShot.GetComponent<ShellScript>().setDirection(direction);

    }
}
