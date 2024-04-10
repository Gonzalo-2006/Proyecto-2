
#include <iostream>
#include "conio.h"
#include <stdlib.h>

using namespace std;

class Empleado{
private: char *nombres, *apellidos, *cedula, *cargo;
int edad;

public:
Empleado(){}
Empleado(char *nombres, char *apellidos, char *cedula, char *cargo, int edad){
setNombres (nombres);
setApellidos (apellidos); setCedula (cedula);
setCargo(cargo);
setEdad(edad);
}
}
- void setDatos(){ char *nombres = new char[20], *apellidos new char[20], *cedula new char[20], *cargo - new char[30];
}
Metodos Modificadores */
void setNombres (char *n){ nombres = n; } void setApellidos (char *a) { apellidos - a; }
void setCedula (char *c){ cedula c; }
void setCargo(char *cr){ cargo = cr; } void setEdad(int e) { edad e; }
int edad;
cout << "Favor ingresar los nombres:;
fflush(stdin); fgets(nombres, 20, stdin);
cout << "Favor ingresar los apellidos: fflush(stdin )";
fgets(apellidos, 20, stdin);
cout << "Favor ingresar el numero de cedula";
fflush(stdin ); fgets(cedula, 20, stdin);
cout << "Favor ingresar cargo:
fflush(stdin );
fgets(cargo, 30, stdin);
cout << "Favor ingresar edad: ";
cin >> edad;
setNombres (nombres); setApellidos (apellidos); setCedula (cedula); setCargo(cargo);
setEdad(edad);

Metodos Accesores */
char getNombres(){ return nombres; } char * getApellidos () { return apellidos; }
getCedula(){ return cedula; } char *
char getCargo(){ return cargo; } int getEdad(){ return edad; }

void mostrarEmpleado(){
cout<<"\nNombres: << getNombres() <<"\nApellidos: " <<getApellidos () <<"\nCedula: << getCedula() << "\nCargo: " << getCargo () << "\nEdad: " << getEdad();

};
// Main a modificar según el archivo que use to clase int main(){
Empleado obj[1];
obj[1].setDatos(); obj[1].mostrarEmpleado(); Tutorias.co