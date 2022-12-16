using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class FadeUI : MonoBehaviour
{
    [SerializeField] private CanvasGroup fadingCanvasGroup;

    private bool isFaded = true; 
    private bool noFade = false; 

    public void fadeIn()
    {
        if (!noFade)
        {
            isFaded = false;
            fadingCanvasGroup.DOFade(1,1);
        }
    }

    public void fadeOut()
    {
        if (!noFade)
        {
            isFaded = true;
            fadingCanvasGroup.DOFade(0,1);
            if (noFade){
                            fadingCanvasGroup.DOFade(1,0);

            }
        }
        else{
            fadingCanvasGroup.DOFade(1,0);
        }
    }

    public void stopFade()
    {
        if (!noFade){
        noFade = true;
        // fadingCanvasGroup.DOFade(1,0);
    }
    }
}

