#include<iostream>
using namespace std;

class Punto{
	private://atributos
		int x,y;
	public:// metodos
	    Punto();
		void setPunto(int,int);
		int getPuntox();
		int getPuntoY();		
};
void Punto::setPunto(int _x,int _y){
	x = _x;
	y = _y;  
}
int  Punto::getPuntox(){
	return x;
}

int Punto::getPuntoY(){
	return y;
}


int main(){
Punto punto1;
	punto1.setPunto(10,15);
	cout<<punto1.getPuntox()<<endl;
	cout<<punto1.getPuntoY()<<endl;
	
	return 0;
}