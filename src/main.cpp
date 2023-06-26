#include "main.h"
#include <Arduino.h>
#include <my_lib.h>
//varaibles globales

int a=3 , b=4, c=5;
// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int aux = suma(a,b);
  Serial.print("suma");
  Serial.println(aux);
  int aux2 = resta(a,b);
  Serial.print("resta");
  Serial.println(aux2);
  int aux3 = multip(a,b);
  Serial.print("multiplicacion");
  Serial.println(aux3);

  switch (expression)
  {
  case /* constant-expression */:

  if (comparacion())
  {
    estado=siguiente_estado;
  }else {estado= mismo_estado;}
  
    // comparacion()? estado=siguiente_estado : estado= mismo_estado;
  
    break;
  
  default:
    break;
  }


}

// put function definitions here:


