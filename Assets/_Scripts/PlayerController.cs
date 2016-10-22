using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	// PUBLIC INSTANCE VARIABLES +++++++++++++++++++++++++++++++++++++++
	//public float speed;
	public Boundary boundary;

	// get a reference to the camera to make mouse input work
	public Camera _camera;
    public GameController gameController;
    public GameObject attack;
    public float timeBetweenFires = 3f;
    public float lastFired = -100f;
    public float attackSpeed;
    public Transform sightStart;
    public Transform sightEnd;

    [Header("Audio")]
    public AudioSource hitSound;
    public AudioSource tankSound;
    public AudioSource shoot;

    // PRIVATE INSTANCE VARIABLES
    private Vector2 _newPosition = new Vector2(0.0f, 0.0f);
    private int _livesValue;

    //Public Properties

    public int livesValue //updates power
    {
        get { return this._livesValue; }
        set
        {
            this._livesValue = value;
            this.gameController.livesLabel.text = "Lives: " + this._livesValue;
        }
    }

    // Use this for initialization
    void Start () {
        this.livesValue = 5;
        tankSound.Play();
        tankSound.loop = true;
    }

	// Update is called once per frame
	void Update () {
		this._CheckInput ();
        Debug.DrawLine(this.sightStart.position, this.sightEnd.position);

        if (Input.GetMouseButtonDown(1))
        {
                this.Attack();
        }

    }

	private void _CheckInput() {
		this._newPosition = gameObject.GetComponent<Transform> ().position; // current position

		/* movement by keyboard
		if (Input.GetAxis ("Horizontal") > 0) {
			this._newPosition.x += this.speed; // add move value to current position
		}
	
		
		if (Input.GetAxis ("Horizontal") < 0) {
			this._newPosition.x -= this.speed; // subtract move value to current position
		}
		*/

		// movement by mouse
		Vector2 mousePosition = Input.mousePosition;
		this._newPosition.x = this._camera.ScreenToWorldPoint (mousePosition).x;

		this._BoundaryCheck ();

		gameObject.GetComponent<Transform>().position = this._newPosition;
	}

	private void _BoundaryCheck() {
		if (this._newPosition.x < this.boundary.xMin) {
			this._newPosition.x = this.boundary.xMin;
		}

		if (this._newPosition.x > this.boundary.xMax) {
			this._newPosition.x = this.boundary.xMax;
		}
	}

    private void OnCollisionEnter2D(Collision2D other)
    {

        //hit by enemy
        if (other.gameObject.CompareTag("Enemy"))
        {
            this.livesValue -= 1;
            hitSound.Play();

            if (livesValue <= 0)
            {
                gameController.gameOver();
                tankSound.Stop();
            }

        }

        //hit by boss
        if (other.gameObject.CompareTag("Boss"))
        {
            this.livesValue -= 1;
            hitSound.Play();
            if (livesValue <= 0)
            {
                gameController.gameOver();
            }
        }

    }

    void Attack()
    {

        if (Time.time < lastFired + timeBetweenFires)
        {
            return;
        }

        lastFired = Time.time;

        GameObject attackShot = (GameObject)Instantiate(attack, transform.position, transform.rotation);
        attackShot.transform.position = transform.position;
        shoot.Play();
        Vector2 direction = sightEnd.transform.position - attackShot.transform.position;

        attackShot.GetComponent<ShellScript>().setDirection(direction);

    }
}
