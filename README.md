#Temporizador 
Copyrigth (c) Mandragora Tools 2016

[mandragoratools@gmail.com](mailto:mandragoratools@gmail.com)

[http://bit.ly/mandragoratools](http://bit.ly/mandragoratools)


#¿Que es Temporizador?

Temporizador es una libreria escrita para Arduino en general, que nos sirve para programar transcursos de tiempo y ejecutar acciones transcurrido el tiempo indicado.

Nos sirve para sustituir la función delay(); en nuestros sckechts y evitar así retardos indeseados.

#Referencia

Temporizador temp;   --------> Instanciar el temporizador, usaremos "Temporizador" seguido del nombre que deseemos en este caso "temp".

temp.encender();     --------> Esta linea nos servirá para activar el contador del tiempo.
                              (esta linea debe encontrarse en el void loop para que todo funciones correctamente).

temp.temporizar1(0,0,2,0); --------> En esta linea programaremos el tiempo deseado. en este caso 2 minutos.



#Tener en cuenta

*El temporizador nos permitirá programar hasta 5 temporizaciones como maximo en nuestro scketch.

De este modo:

temp.temporizar1(0,0,0,0);
temp.temporizar2(0,0,0,0);
temp.temporizar3(0,0,0,0);
temp.temporizar4(0,0,0,0);
temp.temporizar5(0,0,0,0);


-La primera cifra de la función es la correspondiente a los dias.

-La segunda cifra de la función es la correspondiente a las horas.

-La tercera cifra de la función es la correspondiente a los minutos.

-La cuarta cifra de la función es la correspondiente a los segundos.


*Ejemplo: temp.temporizar1(1  ,  3   ,   40    ,   20);

En este caso 1 dia 3 horas 40 minutos y 20 segundos.


#Usos
  
  //se encenderá o apagará cuando transcurra un dia.
  if (temp.temporizar1(1, 0, 0, 0) == true) {digitalWrite(13, !digitalRead(13));} 
   
 
  
  Cuando el condicional sea "true" se ejecutará lo que tengamos dentro del if.







