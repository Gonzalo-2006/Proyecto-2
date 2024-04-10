#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	char a [70];
	char b [70];
	int  c,e,f;
	char d;
	
	cout<<"Venta de zapatos\n "<<endl;
	cout<<"Digite la referencia del zapato "<<endl;cin.getline(a,70);
	cout<<"Digite la descripcion del zapato "<<endl;cin.getline(b,70);
	cout<<"Digite la talla "<<endl;cin>>c;
	cout<<"Disponibilidad del zapato: s para si y n para no "<<endl;cin>>d;
	cout<<"Digite el costo del zapato "<<endl;cin>>e;
	cout<<"Digite el precio de venta del zapato "<<endl;cin>>f;
	
	system("pause");
	system("cls");
	
	cout<<"Los datos registrados son:\n"<<endl;
	cout<<"Referencia: "<<a<<endl;
	cout<<"Descripcion: "<<b<<endl;
	cout<<"Talla: "<<c<<endl;
	cout<<"Disponibilidad: "<<d<<endl;
	cout<<"Costo del zapato: "<<e<<endl;
	cout<<"Precio del zapato: "<<f<<endl<<endl;
	
	cout<<"Gracias por digitar la informacion"<<endl;
	system("pause");
	system("cls");
	cout<<"Elaborado por: andrey portela"<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}