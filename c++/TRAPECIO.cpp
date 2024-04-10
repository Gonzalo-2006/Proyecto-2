#include<iostream>
#include<math.h>
using namespace std;

int main(){
	cout<<"AREA DE UN TRAPECIO\n";
 float x,b,h,f,j,m;
 do{
  cout<<"ingrese el valor de base mayor: "<<endl;cin>>x;
  cout<<"ingrese el valor de base menor: "<<endl;cin>>b;
  if(b>=x){
  	cout<<"la base menor tiene un valor mayor o igual a la base mayor, digite otra vez"<<endl;
  	system("pause");
  	system("cls");
  }
 }while(b>=x);
  
  
  cout<<"ingrese el valor de altura: "<<endl;cin>>h;
  
  f=(x+b)*h;
  j=f/2;
  system("pause");
  system("cls");
  cout<<"el area del trapecio es: "<<j<<" unidades"<<endl;
  


return 0;
}