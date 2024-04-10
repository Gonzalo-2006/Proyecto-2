#include <iostream>
#include <string>
using namespace std;

class Inicio{
	private:
		string nombre;
		int dientes;
		string especie;
		string habitad;
	public: 
	Inicio(string _nombre,int _dientes,string _especie,string _habitad){
		nombre = _nombre;
		dientes = _dientes;
		especie = _especie;
		habitad = _habitad;
	}
	  virtual void mostrardato(){
		cout<<"Nombre: "<<nombre<<endl;
		cout<<"cantidad de dientes: "<<dientes<<endl;
		cout<<"especie: "<<especie<<endl;
		cout<<"Habitad: "<<habitad<<endl; 
	}    
	
};
class Mamifero: public Inicio{
	private: 
	string alimentacion;
	public: 
	Mamifero(string _nombre, int _dientes, string _especie, string _habitad, string _alimentacion):Inicio(_nombre,_dientes,_especie,_habitad){
		alimentacion = _alimentacion;
	}
	void Mostrardatos(){
		Inicio::mostrardato();
		cout<<"La dieta de estos animales consiste en: "<<alimentacion<<endl;
	}
};
class Reptil: public Inicio{
	private: 
	int tamaño;
	public: 
	Reptil(string _nombre, int _dientes, string _especie, string _habitad, int _tamaño):Inicio(_nombre, _dientes, _especie, _habitad){
		tamaño = _tamaño;
	}
	void lostrardato(){
		Inicio::mostrardato();
		cout<<"el tamaño de estos animales es de "<<tamaño <<"metros"<<endl; 
	}
};

int main(){
	Mamifero perrito("perro",34,"doberman","casa","concentrado");
	perrito.Mostrardatos();
	
	Reptil cocodrilo("cocodrilo",55,"caiman","estanque", 23);
	cocodrilo.lostrardato();
	
}



