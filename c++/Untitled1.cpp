#include<iostream>
using namespace std ;

int main(){
 
 int a,b,c,d;
 int opcion;
 
 cout<<"ingrese el primer de a "<<endl;cin>>a;
 cout<<"ingrese el valor de b "<<endl; cin >>b;
 cout<<"seleccione su opcion 1=c y 2 =d "<<endl;cin>>opcion;
 switch(opcion)
 {
 case 1: 
 c=a*b;
 cout<<"el resultado de c es "<<c<<endl;
 break;
 case 2:
 d=a/b;
 cout<<"el resultado de d es "<<d<<endl;
 break;
 default: cout<<"opcion no disponible";
 
}








} 