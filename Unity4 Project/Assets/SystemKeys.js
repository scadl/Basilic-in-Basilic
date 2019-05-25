#pragma strict

var DualCamera:boolean;
var Camera_1:Camera;
var Camera_2:Camera;
var Spec: GameObject;

var Anno: GUIText;

function Start () {

Anno.text="Вид от первого лица - 1\n Свободная камера - 2\n\n Выход - Esc";

}

function Update () {

}

function OnGUI(){

var kb_evt: Event = Event.current;
if (kb_evt.isKey){
	switch (kb_evt.keyCode) {
		case KeyCode.Escape: Application.Quit(); break;
	}
	if (DualCamera){
		switch (kb_evt.keyCode) {
			case KeyCode.Alpha1:
					Camera_1.camera.active=true;
					Camera_2.camera.active=false;
					Anno.text="Вид от первого лица - 1\n Свободная камера - 2\n\n Выход - Esc";
			break; 
			case KeyCode.Alpha2:
					Camera_2.camera.active=true;
					Camera_1.camera.active=false;
					Anno.text="Подъём - R\n Спуск - Y\n Скольжение влево - F\n Скольжение вправо - H\n Движение вперёд - T\n Движение назад - G";
			break;
		}
		
	}
	}
}

