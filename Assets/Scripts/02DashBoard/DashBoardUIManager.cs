using UnityEngine;
using UnityEngine.SceneManagement;

public class DashBoardUIManager : MonoBehaviour
{
    void Start()
    {
        
    }

    public void Back()
    {
        SceneManager.LoadScene(1);
    }
    public void EnterAR()
    {
        SceneManager.LoadScene(3);
    }

    public void EnterUserMenu()
    {
        SceneManager.LoadScene(4);
    }

    public void EnterDashBoardMenu()
    {
        SceneManager.LoadScene(2);
    }
}
