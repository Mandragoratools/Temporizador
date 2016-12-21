/*
Temporizador.cpp "Libreria que nos evita usar Millis"
Uso: Esta libreria es de uso libre.
Autor: Mandragora Tools 2016
Web: http://bit.ly/mandragoratools
*/

#include "Arduino.h"
#include "Temporizador.h"
int hora;
int minuto;
int dia;
int segundo;
int diaAnt;
int horaAnt;
int minutoAnt;
int segundoAnt;

int hora2;
int minuto2;
int dia2;
int segundo2;
int diaAnt2;
int horaAnt2;
int minutoAnt2;
int segundoAnt2;


int hora3;
int minuto3;
int dia3;
int segundo3;
int diaAnt3;
int horaAnt3;
int minutoAnt3;
int segundoAnt3;

int hora4;
int minuto4;
int dia4;
int segundo4;
int diaAnt4;
int horaAnt4;
int minutoAnt4;
int segundoAnt4;

int hora5;
int minuto5;
int dia5;
int segundo5;
int diaAnt5;
int horaAnt5;
int minutoAnt5;
int segundoAnt5;

Temporizador::Temporizador()
{

}


void Temporizador::encender()
{
segundo = millis() / 1000;
minuto = segundo / 60; 
hora=minuto / 60;
dia=hora / 24;

segundo2 = millis() / 1000;
minuto2 = segundo2 / 60; 
hora2=minuto2 / 60;
dia2=hora2 / 24;

segundo3 = millis() / 1000;
minuto3 = segundo3 / 60; 
hora3=minuto3 / 60;
dia3=hora3 / 24;

segundo4 = millis() / 1000;
minuto4 = segundo4 / 60; 
hora4=minuto4 / 60;
dia4=hora4 / 24;

segundo5 = millis() / 1000;
minuto5 = segundo5 / 60; 
hora5=minuto4 / 60;
dia5=hora4 / 24;
}

bool Temporizador::temporizar1(int diat, int horat, int minutot, int segundot)
{
if (diat != 0 && horat==0 && minutot==0 && segundot==0) {

    if ((dia - diaAnt) >= diat) {
      diaAnt = dia;
      return true;
    } else {
      return false;
    }
  }

if (diat == 0 && horat!=0 && minutot==0 && segundot==0) {

    if ((hora - horaAnt) >= horat) {
      horaAnt = hora;
      return true;
    } else {
      return false;
    }
  }
  
if (diat == 0 && horat==0 && minutot!=0 && segundot==0) {

    if ((minuto - minutoAnt) >= minutot) {
      minutoAnt = minuto;
      return true;
    } else {
      return false;
    }
  }

if (diat == 0 && horat==0 && minutot==0 && segundot!=0) {

    if ((segundo - segundoAnt) >= segundot) {
      segundoAnt = segundo;
      return true;
    } else {
      return false;
    }

  }
	
	if (diat != 0 && horat!=0 && minutot!=0 && segundot!=0) {

		if ((segundo - segundoAnt) >= segundot && (minuto - minutoAnt) >= minutot && (hora - horaAnt) >= horat && (dia - diaAnt) >= diat) {
			segundoAnt = segundo;
			minutoAnt = minuto;
			horaAnt = hora;
			diaAnt = dia;
			return true;
			} else {
			return false;
    }
  }
}


//------------------------------------------------------------------------------



bool Temporizador::temporizar2(int diat, int horat, int minutot, int segundot)
{
if (diat != 0 && horat==0 && minutot==0 && segundot==0) {

    if ((dia2 - diaAnt2) >= diat) {
      diaAnt2 = dia2;
      return true;
    } else {
      return false;
    }
  }

if (diat == 0 && horat!=0 && minutot==0 && segundot==0) {

    if ((hora2 - horaAnt2) >= horat) {
      horaAnt2 = hora2;
      return true;
    } else {
      return false;
    }
  }
  
if (diat == 0 && horat==0 && minutot!=0 && segundot==0) {

    if ((minuto2 - minutoAnt2) >= minutot) {
      minutoAnt2 = minuto2;
      return true;
    } else {
      return false;
    }

  }


if (diat == 0 && horat==0 && minutot==0 && segundot!=0) {

    if ((segundo2 - segundoAnt2) >= segundot) {
      segundoAnt2 = segundo2;
      return true;
    } else {
      return false;
    }

  }




if (diat != 0 && horat!=0 && minutot!=0 && segundot!=0) {

    if ((segundo2 - segundoAnt2) >= segundot && (minuto2 - minutoAnt2) >= minutot && (hora2 - horaAnt2) >= horat && (dia2 - diaAnt2) >= diat) {
      segundoAnt2 = segundo2;
      minutoAnt2 = minuto2;
      horaAnt2 = hora2;
      diaAnt2 = dia2;
      return true;
    } else {
      return false;
    }

  }
}

//_----------------------------------------------------

bool Temporizador::temporizar3(int diat, int horat, int minutot, int segundot)
{
if (diat != 0 && horat==0 && minutot==0 && segundot==0) {

    if ((dia3 - diaAnt3) >= diat) {
      diaAnt3 = dia3;
      return true;
    } else {
      return false;
    }
  }

if (diat == 0 && horat!=0 && minutot==0 && segundot==0) {

    if ((hora3 - horaAnt3) >= horat) {
      horaAnt3 = hora3;
      return true;
    } else {
      return false;
    }

  }



  
if (diat == 0 && horat==0 && minutot!=0 && segundot==0) {

    if ((minuto3 - minutoAnt3) >= minutot) {
      minutoAnt3 = minuto3;
      return true;
    } else {
      return false;
    }

  }


if (diat == 0 && horat==0 && minutot==0 && segundot!=0) {

    if ((segundo3 - segundoAnt3) >= segundot) {
      segundoAnt3 = segundo3;
      return true;
    } else {
      return false;
    }

  }




if (diat != 0 && horat!=0 && minutot!=0 && segundot!=0) {

    if ((segundo3 - segundoAnt3) >= segundot && (minuto3 - minutoAnt3) >= minutot && (hora3 - horaAnt3) >= horat && (dia3 - diaAnt3) >= diat) {
      segundoAnt3 = segundo3;
      minutoAnt3 = minuto3;
      horaAnt3 = hora3;
      diaAnt3 = dia3;
      return true;
    } else {
      return false;
    }

  }
}

//---------------------------------------------------------------

bool Temporizador::temporizar4(int diat, int horat, int minutot, int segundot)
{
if (diat != 0 && horat==0 && minutot==0 && segundot==0) {

    if ((dia4 - diaAnt4) >= diat) {
      diaAnt4 = dia4;
      return true;
    } else {
      return false;
    }
  }

if (diat == 0 && horat!=0 && minutot==0 && segundot==0) {

    if ((hora4 - horaAnt4) >= horat) {
      horaAnt4 = hora4;
      return true;
    } else {
      return false;
    }

  }



  
if (diat == 0 && horat==0 && minutot!=0 && segundot==0) {

    if ((minuto4 - minutoAnt4) >= minutot) {
      minutoAnt4 = minuto4;
      return true;
    } else {
      return false;
    }

  }


if (diat == 0 && horat==0 && minutot==0 && segundot!=0) {

    if ((segundo4 - segundoAnt4) >= segundot) {
      segundoAnt4 = segundo4;
      return true;
    } else {
      return false;
    }

  }




if (diat != 0 && horat!=0 && minutot!=0 && segundot!=0) {

    if ((segundo4 - segundoAnt4) >= segundot && (minuto4 - minutoAnt4) >= minutot && (hora4 - horaAnt4) >= horat && (dia4 - diaAnt4) >= diat) {
      segundoAnt4 = segundo4;
      minutoAnt4 = minuto4;
      horaAnt4 = hora4;
      diaAnt4 = dia4;
      return true;
    } else {
      return false;
    }

  }
}


//---------------------------------------------

bool Temporizador::temporizar5(int diat, int horat, int minutot, int segundot)
{
if (diat != 0 && horat==0 && minutot==0 && segundot==0) {

    if ((dia5 - diaAnt5) >= diat) {
      diaAnt5 = dia5;
      return true;
    } else {
      return false;
    }
  }

if (diat == 0 && horat!=0 && minutot==0 && segundot==0) {

    if ((hora5 - horaAnt5) >= horat) {
      horaAnt5 = hora5;
      return true;
    } else {
      return false;
    }

  }



  
if (diat == 0 && horat==0 && minutot!=0 && segundot==0) {

    if ((minuto5 - minutoAnt5) >= minutot) {
      minutoAnt5 = minuto5;
      return true;
    } else {
      return false;
    }

  }


if (diat == 0 && horat==0 && minutot==0 && segundot!=0) {

    if ((segundo5 - segundoAnt5) >= segundot) {
      segundoAnt5 = segundo5;
      return true;
    } else {
      return false;
    }

  }




if (diat != 0 && horat!=0 && minutot!=0 && segundot!=0) {

    if ((segundo5 - segundoAnt5) >= segundot && (minuto5 - minutoAnt5) >= minutot && (hora5 - horaAnt5) >= horat && (dia5 - diaAnt5) >= diat) {
      segundoAnt5 = segundo5;
      minutoAnt5 = minuto5;
      horaAnt5 = hora5;
      diaAnt5 = dia5;
      return true;
    } else {
      return false;
    }

  }
}

