#include<iostream>
using namespace std;
int main(){
	
	int c,e,x,y,z;
	float total;
	char a[70];
	char b[70];
	char d;

	cout<<"VENTA DE ZAPATOS"<<endl;
	
	cout<<"Referencia del zapato "<<endl;cin.getline(a,70);
	
	cout<<"Descripcion del zapato "<<endl;cin.getline(b,70);
	
	cout<<"Talla del zapato"<<endl;cin>>c;
	
	cout<<"Disponibilidad del zapato: s para si y n para no"<<endl;cin>>d;
	switch(d){
		case 's':
    cout<<"cantidad de zapatos"<<endl;cin>>x;
	cout<<"costo de unidad"<<endl;cin>>e;
	cout<<"precio de unidad"<<endl;cin>>y;
	z=(y*x)-(e*x);
	total=y*x;
	total=(z/total)*100;
	system("pause");
	system("cls");
	
	cout<<"Los datos registrados son :"<<endl;
	
	cout<<"Referencia: "<<a<<endl;
	
	cout<<"Descripcion: "<<b<<endl;
	
	cout<<"Talla: "<<c<<endl;
	
	cout<<"Disponibilidad: "<<d<<endl;
	cout<<"cantidad de zapatos: "<<x<<endl;
	
	cout<<"costo de unidad: "<<e<<endl;	
	cout<<"costo total: "<<e*x<<endl;
	cout<<"precio de unidad: "<<y<<endl;
	cout<<"precio total: "<<y*x<<endl;
	cout<<"utilidad por unidad: "<<y-e<<endl;
	cout<<"utilidad total: "<<z<<endl;
	
	cout<<"utilidad porcentual: "<<total<<endl;
	cout<<"gracias por digitar la informacion"<<endl;
		system("pause");
		system("cls");
	break;
	   default:
	   	cout<<"referencia no disponble"<<endl;
	}

	
	
	
	
	
	cout<<"elaborado por: andrey portela"<<endl;
	system("pause");

	
	
	
	
	
	
	
	
	
	
	return 0;
	
}