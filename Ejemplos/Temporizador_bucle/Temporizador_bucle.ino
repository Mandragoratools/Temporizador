// Temporizador  "Ejemplo de uso".
//Creado por Mandragora Tools 2016
//Especial agradecimiento a Alfaville, Lucario448  y surbyte
//Web: http://bit.ly/mandragoratools

// "En este ejemplo usamos la libreria para repetir una accion determinada al transcurrir el tiempo indicado."

//Este archivo es de dominio publico, puedes usarlo cuando y como quieras.

#include <Temporizador.h>

Temporizador temp; //-----> Declaramos una instancia  del temporizador

void setup() {

pinMode(2,OUTPUT); //-----> Declaramos el pin 2 como salida

temp.iniciar(0,0,0,1,0);//-----> Iniciamos el temporizador por primera ves en este caso a un segundo

}

void loop() {

//comprobamos si el tiempo definido ha transcurrido
if(temp.completado()){ 
  digitalWrite(2,!digitalRead(2)); //-----> En este caso al transcurrir el tiempo indicado invertimos el estado del pin 2
  timer1.iniciar(0,0,0,1,0); //-----> volvemos a iniciar el temporizador para que se repita de nuevo en modo bucle
}


}
