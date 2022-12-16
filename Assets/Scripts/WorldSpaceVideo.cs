using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class WorldSpaceVideo : MonoBehaviour
{
    private VideoPlayer video;
    private bool isPlaying = false; 

    private void Awake()
    {
        video = GetComponent<VideoPlayer>();
        video.Pause();
    }
    
    public void PlayVideo() {
        if(!isPlaying){
            video.Play();
            isPlaying = true;
        }
        else{
            video.Pause();
            isPlaying = false; 
        }
    }
}
