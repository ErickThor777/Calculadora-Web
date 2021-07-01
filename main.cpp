#include <iostream>
using namespace std;

class Persona {
  private:
    // Private attribute
    string nombre;
    int edad;
    string dni;

  public:
    void mostrar();
    void EsMayorDeEdad();
    // Setter
    void setnombre(string nomb){
      nombre = nomb;
    }
    string getnombre() {
      return nombre;
    }
    void setedad(int ed) {
      edad = ed;
    }
    int getedad() {
      return edad;
    }
    void setdni(string ident) {
      dni = ident;
    }
    string getdni() {
      return dni;
    }
    // Getter

};
void Persona :: mostrar(){
cout<<nombre<<"me gusta correr:  "<<"tengo:  "<<edad<<endl;
}
void Persona :: EsMayorDeEdad(){
cout<<"soy mayor de edad por que tengo:  "<<edad<<endl;
}
int main() {
  Persona dato;
  dato.setnombre("Erick:  ");
  Persona dato1;
  dato1.setedad(24);
  Persona dato2;
  dato2.setedad(24);
  dato.mostrar();
  dato1.mostrar();
  dato2.EsMayorDeEdad();
  return 0;
}
