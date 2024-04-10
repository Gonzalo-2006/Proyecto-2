#include <iostream>
using namespace std;

class MiClase {
  private:
    char mi_caracter;  // Variable de tipo char
    int m;
  public:
    // Constructor por defecto
    MiClase() {
        mi_caracter = 'a';
    }

    // Constructor con parámetro
    MiClase(char c) {
        mi_caracter = c;
    }

    // Método para obtener el valor del caracter
    char getCaracter() {
        return mi_caracter;
    }

    // Método para cambiar el valor del caracter
    void setCaracter(char c) {
        mi_caracter = m;
    }
};

int main() {
	int m;
	cout<<"ingrese el caracter de m "; cin>>m;
    MiClase obj1;  // Se crea un objeto de la clase con el constructor por defecto
   //cout << "El caracter es: " << obj1.getCaracter() << endl;

    MiClase obj2('b');  // Se crea un objeto de la clase con el constructor con parámetro
    cout << "El caracter es: " << obj2.getCaracter() << endl;

    obj1.setCaracter('c');  // Se cambia el valor del caracter del objeto obj1
    cout << "El caracter es: " << obj1.getCaracter() << endl;

    return 0;
}