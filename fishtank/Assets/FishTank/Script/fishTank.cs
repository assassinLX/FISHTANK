using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
public class fishTank : MonoBehaviour {
        
	public List<fishTankData> _fishdata; //存储点的信息
    public RectTransform pencil; //点的显示
	public Canvas _canvas; //将pencil限定在fishCanvas中 并且传递照相机探测的参数
	private RectTransform _rectTransform; //_canvas 的Recttransform的信息
	public Camera _camera;

	//限定鼠标的位置
	private float x_min;
	private float x_max;
	private float y_min;
	private float y_max;

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

    }
    
    void Start(){
        _rectTransform = _canvas.transform as RectTransform;

		float width = _rectTransform.sizeDelta.x;
		x_min = -Math.Abs(width/2);
		x_max = Math.Abs(width/2);
		y_min = -Math.Abs(_rectTransform.anchoredPosition.y);
		y_max = Math.Abs(_rectTransform.anchoredPosition.y);

    }

    void Update(){
            Vector2 pos;
            Vector2 _pos = Vector2.zero;
			if (RectTransformUtility.ScreenPointToLocalPointInRectangle(_rectTransform, Input.mousePosition, _camera, out pos))
            {        
				if(pos.x > x_min && pos.x < x_max){
					_pos.x = pos.x;
	            }
				if(pos.y > y_min && pos.y < y_max){
					_pos.y = pos.y;
		        }
				if (_pos.x != 0 && _pos.y != 0) {
					pencil.anchoredPosition = _pos;
					if(Input.GetMouseButton(0) || (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Moved))
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
		        //Debug.Log(pos);
			}

           
                 

        }
	
}
