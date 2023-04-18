
using UnityEngine;
using UnityEngine.SceneManagement;

public class MusicManager : MonoBehaviour
{
	public AudioClip mainTheme;
	public AudioClip menuTheme;
    string sceneName;

	void Start()
	{
        OnLevelWasLoaded(0);
	}
    private void OnLevelWasLoaded(int sceneIndex)
    {
        string newSceneName = SceneManager.GetActiveScene().name;
        if (newSceneName != sceneName)
        {
            sceneName = newSceneName;
            Invoke("PlayMusic", .2f);
        }
    }
	void PlayMusic()
    {
		AudioClip clipToPlay = null;
        if (sceneName == "Login")
        {
            clipToPlay = menuTheme;
        }
        else if (sceneName == "Game") clipToPlay = mainTheme;
        if (clipToPlay != null)
        {
            AudioManager.instance.PlayMusic(clipToPlay, 2);
            Invoke("PlayMusic", clipToPlay.length);
        }
    }
}