
#include <Arduino.h>
#include <my_lib.h>
//varaibles globales

int a=3 , b=4, c=5;
// put function declarations here:

class animales {
  public:
  animales(){};

  String nombre;
  String apellido;
  int edad;
  void mostrarNota(){
    Serial.println(notas);
  }
  void setAnimal(String nom, String ape, int ed, String notes){
    nombre = nom;
    apellido = ape;
    edad = ed;
    notas=notes;
  };
  int proxVacunacion(int algo){
    return(algo*edad);
  
  };
  private:
  String notas;
  protected:
};

animales perro;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  perro.setAnimal("Fatiga", "Argento", 5, "hola, soy una nota");
  
}

void loop() {
/*   int aux = suma(a,b);
  Serial.print("suma");
  Serial.println(aux);
  int aux2 = resta(a,b);
  Serial.print("resta");
  Serial.println(aux2);
  int aux3 = multip(a,b);
  Serial.print("multiplicacion");
  Serial.println(aux3); */
  Serial.println(perro.nombre);
  Serial.println(perro.edad);
  perro.mostrarNota();




 


}

// put function definitions here:


