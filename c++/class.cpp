#include<iostream>
using namespace std;

class Persona{
	private: //atributos
	int edad;
	string nombre;

	
	public: //metodos
	Persona(int,string); //constructor, nos sirve para inicializar los atributos
	void caminar();
	void saltar();
};
Persona::Persona(int _edad,string _nombre){
	edad=_edad;
	nombre=_nombre;
	
}
//inicializamos los void junto con el nombre de la clase y los metodos
void Persona::caminar(){
	cout<<"soy "<<nombre<<" y estoy caminando, tengo "<<edad<<" anios"<<endl;
}
void Persona::saltar(){
	cout<<"me llamo "<<nombre<<" y estoy saltando"<<endl;
	
}

int main(){ 
//llamamos  la clase y  le damos atributos(agregamos un indicador = p1), luego llamamos el void junto con el indicador 
int a;
cout<<"ingrese su edad "; cin>>a;
string b;
cout<<"ingrese su nombre "; cin>>b;

Persona p2(a,b);
p2.caminar();




	return 0;
}