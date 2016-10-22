using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {
	// PUBLIC INSTANCE VARIABLES
	public int tankCount;
    public int bossTankCount;
    public GameObject tank;
    public int _score;

    [Header("Labels")]
    public Text livesLabel;
    public Text scoreLabel;
    public Text gameOverLabel;
    public Text finalLabel;
    public Button restartButton;

    [Header("Audio")]
    public AudioSource BGM;
    public AudioSource endBGM;

    [Header("Game Objects")]
    public GameObject player;
    public GameObject enemy;
    public GameObject boss;
    public GameObject scorePlane;

    // Use this for initialization
    void Start () {
		this._GenerateTanks ();
        this.hideLabels();
        BGM.Play();
        BGM.loop = true;
    }
	
	// Update is called once per frame
	void Update () {
	
	}

	// generate Clouds
	private void _GenerateTanks() {
		for (int count=0; count < this.tankCount; count++) {
			Instantiate(tank);
		}
	}

    private void _GenerateBossTanks()
    {
        for (int count = 0; count < this.bossTankCount; count++)
        {
            Instantiate(boss);
        }
    }

    //Hide labels
    private void hideLabels()
    {
        gameOverLabel.gameObject.SetActive(false);
        finalLabel.gameObject.SetActive(false);
        restartButton.gameObject.SetActive(false);
    }

    public void gameOver()
    {
        gameOverLabel.gameObject.SetActive(true);
        finalLabel.gameObject.SetActive(true);
        restartButton.gameObject.SetActive(true);
        livesLabel.gameObject.SetActive(false);
        scoreLabel.gameObject.SetActive(false);
        player.gameObject.SetActive(false);
        scorePlane.gameObject.SetActive(false);
        BGM.Stop();
        endBGM.Play();
        endBGM.loop = true;
}

    public void restart_click()
    {
        SceneManager.LoadScene("Main");
    }
}
