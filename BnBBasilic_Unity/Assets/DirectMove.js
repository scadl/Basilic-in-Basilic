#pragma strict

public var ControlableCamera:Camera;
//public var Controller_Name: String;
public var Speed:int;
public var Forward: KeyCode;
public var Backward: KeyCode;
public var Left_slide: KeyCode;
public var Right_slide: KeyCode;
public var Up_lift: KeyCode;
public var Down_lift: KeyCode;
public var Center_Name: String;

//private var Controller:GameObject;
private var Center:GameObject;

function Start () {

//Controller=GameObject.Find(Controller_Name);
Center=GameObject.Find(Center_Name);

}

function Update () {

//Center.transform.Rotate(Vector3(0,Speed,0)*Time.deltaTime);

}

function OnGUI(){

var kbd_evt: Event = Event.current;
if (kbd_evt.isKey){
	switch (kbd_evt.keyCode){
		case Forward: 
			ControlableCamera.transform.localPosition.z-=Speed;
			//Controller.transform.position.z+=Speed; 
		break;
		case Backward: 
			ControlableCamera.transform.localPosition.z+=Speed;
			//Controller.transform.position.z-=Speed; 
		break;
		case Left_slide:
			Center.transform.Rotate(Vector3(0,Speed,0)*Time.deltaTime); 
			//ControlableCamera.transform.localPosition.x-=Speed;
			//Controller.transform.position.x-=Speed; 
		break;
		case Right_slide:
			Center.transform.Rotate(Vector3(0,-Speed,0)*Time.deltaTime); 
			//ControlableCamera.transform.localPosition.x+=Speed;
			//Controller.transform.position.x+=Speed; 
		break;
		case Up_lift:
			ControlableCamera.transform.localPosition.y+=Speed;
		break;
		case Down_lift:
			ControlableCamera.transform.localPosition.y-=Speed;
		break;		
				
	}
}

}