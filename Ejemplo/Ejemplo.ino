// Temporizador  "Ejemplo de uso".
//Creado por Mandragora Tools 2016.
//Web: http://bit.ly/mandragoratools
//Este archivo es de dominio publico, puedes usarlo cuando y como quieras.


//En esta versión de la libreria podremos usar solo 5 temporizadores simultaneos en nuestros scketchs,
//siendo asi:
//temp.temporizar1(dia,hora,minuto,segundo)
//temp.temporizar2(dia,hora,minuto,segundo)
//temp.temporizar3(dia,hora,minuto,segundo)
//temp.temporizar4(dia,hora,minuto,segundo)
//temp.temporizar5(dia,hora,minuto,segundo)



// In this version of the library we can use only 5 simultaneous timers in our scketchs,
// being thus:
//temp.temporizar1(day, hour, minute, second)
//temp.temporizar2(day, hour, minute, second)
//temp.temporizar3(day, hour, minute, second)
//temp.temporizar4(day, hour, minute, second)
//temp.temporizar5(day, hour, minute, second)


#include <Temporizador.h>

Temporizador temp; //-----> Creamos la instancia del temporizador  /Create instance of temporizador



void setup() {
  Serial.begin(9600);

  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  temp.encender();//-----> Activamos la cuenta del tiempo  /We activated time counter




  if (temp.temporizar1(1, 0, 0, 0) == true) { //La primera cifra corresponde a los dias, en este caso el pin 13  / The first figure corresponds to the days, in this case pin 13
    digitalWrite(13, !digitalRead(13));    //se encenderá o apagará cuando transcurra un dia                  / Will turn on or off after one day

  }




  if (temp.temporizar2(0, 2, 0, 0) == true) { //La segunda cifra corresponde a las horas, en este caso el pin 8   / The second figure corresponds to the hours, in this case pin 8
    digitalWrite(8, !digitalRead(8));     //se encenderá o apagará cuando transcurra 2 horas                  / Will turn on or off after two hours
  }




  if (temp.temporizar3(0, 0, 1, 0) == true) { //La tercera cifra corresponde a los minutos, en este caso el pin 7  / The third figure corresponds to the minutes, in this case pin 7
    digitalWrite(7, !digitalRead(7));      //se encenderá o apagará cuando transcurra 1 minuto                  / Will turn on or off after one minutes
  }



  if (temp.temporizar4(0, 0, 0, 10) == true) { //La tercera cifra corresponde a los segundos, en este caso el pin 6  / The fourth figure corresponds to the seconds, in this case pin 6
    digitalWrite(6, !digitalRead(6));      //se encenderá o apagará cuando transcurra 10 segundos                / Will turn on or off after ten seconds
  }



  if (temp.temporizar5(1, 3, 10, 15) == true) { //Podemos usar todas las cifras de este modo                                                   / We can use all the figures this way                                                     /
    digitalWrite(5, !digitalRead(5));      //el pin 5 se encenderá o apagara transcurridos 1 dia 3 horas 10 minutos y 15 segundos         / The pin 5 will turn on or off after 1 day 3 hours 10 minutes and 15 seconds


  }


}
