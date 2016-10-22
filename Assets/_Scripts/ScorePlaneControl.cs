using UnityEngine;
using System.Collections;

public class ScorePlaneControl : MonoBehaviour {

    //Public Instance Variables
    public GameController gameController;
    public AudioSource pointSound;

    //Public Properties

    public int scoreValue // updates score
    {
        get { return this.gameController._score; }
        set
        {
            this.gameController._score = value;
            this.gameController.scoreLabel.text = "Score: " + this.gameController._score;
            this.gameController.finalLabel.text = "Final Score: " + this.gameController._score;
        }
    }

    // Use this for initialization
    void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	}

    private void OnCollisionEnter2D(Collision2D other)
    {
        //score points
        if (other.gameObject.CompareTag("Enemy"))
        {

            this.scoreValue += 10;
            pointSound.Play();

            if(scoreValue == 500)
            {
                Instantiate(gameController.boss);
            }

            if (scoreValue == 1000)
            {
                Instantiate(gameController.boss);
            }
        }

        if (other.gameObject.CompareTag("Boss"))
        {

            this.scoreValue += 20;
            pointSound.Play();
            Debug.Log("SCORE");

        }
    }

}
