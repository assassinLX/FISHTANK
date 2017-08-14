using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
public class fishTank : MonoBehaviour {
        
	public List<fishTankData> _fishdata; //存储点的信息
    public RectTransform pencil; //点的显示
	public Canvas _canvas; //需要fishCanvas的参数
	private RectTransform _rectTransform; //_canvas 的Recttransform的信息
	 
	private float _size;
	public float Size {
		set{ 
			_size = value;
		}

		get{
			return _size;
		}
	}

	private Color _color;
	public Color PencilColor{
		set{
			_color = value;
		}
		get{ 
			return _color;
		}
	
	}
  
    void Awake(){
		_fishdata = new List<fishTankData>();
		//读取外部的size、color；
		_rectTransform = _canvas.transform as RectTransform;
    }
   

	public void OnDraw(ColorPickClick sender)
	{
		var size2 = _rectTransform.sizeDelta/2;
		var pos = Vector2.zero;
		pos.x = Mathf.Clamp(sender.ClickPoint.x, -size2.x, size2.x);
		pos.y = Mathf.Clamp(sender.ClickPoint.y, -size2.y, size2.y);
		pencil.anchoredPosition = pos;

		UpdatePoint(pos);
	}


	public void UpdatePoint(Vector2 _pos)
	{
		var clonePencil = (GameObject)Instantiate(pencil.gameObject,_canvas.transform.GetChild(0));
		clonePencil.GetComponent<RectTransform>().anchoredPosition = _pos;

		Debug.Log ("------------------------------current position : "+ _pos);
		//在fishdata可添加位置信息 
		//还需完成size信息的适配
		//color的调节
		//对接服务器 发送数据的时候需要id
		fishTankData _data = new fishTankData ();
		_data.position = _pos;
	}
	
}
