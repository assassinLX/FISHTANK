using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class OnClick : MonoBehaviour {

	public Image WriteCanva;
	public void _buttonOnClick(string name){
	 	WriteCanva.sprite = (Sprite)Resources.Load(name,typeof(Sprite)); 
	}
	
}
