#include "Servo.h"

Servo pulgar;
Servo indice;
Servo medio;
Servo anular;
Servo menique;

void setup() {
  Serial.begin (9600);
  pulgar.attach (3);
  indice.attach (5);
  medio.attach (6);
  anular.attach (9);
  menique.attach (10);
}

void loop() {

  pulgar.write (0);
  indice.write (0);
  medio.write (0);
  anular.write (0);
  menique.write (0);
  delay (1000);
  pulgar.write (360);
  indice.write (360);
  medio.write (360);
  anular.write (360);
  menique.write (1360);
  delay (1000);

  hoyudo();

  dedo_arriba();

  contar();

  chuncho ();

  indio ();

  paz ();

  comuna4 ();

  silencio_Saez ();

  puno ();

  ehhdehecho ();

  hawaii();

}


  void hoyudo (){

      pulgar.write (0);
      indice.write (0);
      medio.write (0);
      anular.write (0);
      menique.write (0);
      delay (1000);
      pulgar.write (360);
      indice.write (360);
      anular.write (360);
      menique.write (360);
      delay (1000);

  }


  void dedo_arriba(){

      pulgar.write (0);
      indice.write (0);
      medio.write (0);
      anular.write (0);
      menique.write (0);
      delay (1000);
      indice.write (360);
      medio.write (360);
      anular.write (360);
      menique.write (360);
      delay (1000);

  }

  void contar(){

      pulgar.write (0);
      indice.write (0);
      medio.write (0);
      anular.write (0);
      menique.write (0);
      delay (1000);
      pulgar.write (360);
      indice.write (360);
      medio.write (360);
      anular.write (360);
      menique.write (360);
      delay (1000);
      pulgar.write (0);
      delay (1000);
      indice.write (0);
      delay (1000);
      medio.write (0);
      delay (1000);
      anular.write (0);
      delay (1000);
      menique.write (0);
      delay (1000);

  }



  void chuncho(){

      pulgar.write (0);
      indice.write (0);
      medio.write (0);
      anular.write (0);
      menique.write (0);
      delay (1000);
      pulgar.write (360);
      indice.write (360);
      medio.write (360);
      anular.write (360);
      menique.write (360);
      delay (1000);
      indice.write (0);
      menique.write (0);
      delay (1000);

  }


  void indio(){

      pulgar.write (0);
      indice.write (0);
      medio.write (0);
      anular.write (0);
      menique.write (0);
      delay (1000);
      pulgar.write (360);
      indice.write (360);
      medio.write (360);
      anular.write (360);
      menique.write (360);
      delay (1000);
      pulgar.write (0);
      indice.write (0);
      menique.write (0);
      delay (3000);

  }


  void paz(){

      pulgar.write (0);
      indice.write (0);
      medio.write (0);
      anular.write (0);
      menique.write (0);
      delay (2000);
      pulgar.write (360);
      anular.write (360);
      menique.write (360);
      delay (1000);

  }


  void comuna4(){

      pulgar.write(0);
      indice.write(0);
      medio.write(0);
      anular.write(0);
      menique.write(0);
      delay (1000);
      anular.write(360);
      delay (1000);

  }


  void silencio_Saez(){

      anular.write(0);
      menique.write(0);
      delay (1000);
      anular.write(360);
      menique.write(360);
      delay (2000);

  }


  void puno(){
      pulgar.write(0);
      indice.write(0);
      medio.write(0);
      anular.write(0);
      menique.write(0);
      delay (1000);
      pulgar.write(360);
      indice.write(360);
      medio.write(360);
      anular.write(360);
      menique.write(360);
      delay (5000);


  }


  void ehhdehecho(){

      pulgar.write(0);
      indice.write(0);
      medio.write(0);
      anular.write(0);
      menique.write(0);
      delay (1000);
      pulgar.write(360);
      medio.write(360);
      anular.write(260);
      menique.write(360);
      delay (5000);

  }


  void hawaii(){

      pulgar.write(0);
      indice.write(0);
      medio.write(0);
      anular.write(0);
      menique.write(0);
      delay (1000);
      indice.write(360);
      medio.write(360);
      anular.write(360);
      delay (5000);

  }

