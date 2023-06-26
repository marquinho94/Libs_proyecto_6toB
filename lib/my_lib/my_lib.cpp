#include"my_lib.h"


int suma(int param1, int param2) {
  return (param1 + param2);
}

int resta (int param1, int param2){
  return(param1 - param2);
}

int multip (int param1, int param2){

    return(param1 * param2);
}

bool comparacion (int pin, int comp)
{
  if(analogRead(pin)>= comp)
  {
    return(true);
  }else {
    return (false);
  }
}