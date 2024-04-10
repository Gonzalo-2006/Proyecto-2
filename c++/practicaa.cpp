#include<iostream>
using namespace std;

int main(){
	
int a,b,c,d,f,h;
int opcion;

cout<<"ingrese el valor = a"<<endl; cin>>a;
cout<<"ingrese el valor = b"<<endl; cin>>b;
cout<<"ingresee la accion a ejecutar: 1 = multiplicacion  2 = resta"<<endl; cin>>opcion;
switch (opcion)
{
	case 1: f=a*b; cout<<"el resultado es "<<f<<endl;
	break;
	
	case 2: h=a-b; cout<<"el resultado es "<<h<<endl;
	break;
	
	default: cout<<"opcion no disponible"<<endl;
	system("pause");
	return main();
}
	
	
	
	
	
return 0;
}