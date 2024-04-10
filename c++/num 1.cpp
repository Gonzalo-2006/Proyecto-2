#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
	
	int a;
	int b;
	int h;
	//char f;
	char f[11];
	char comentario[11];

//alt 91 = []
cout<<"ingrese el balor de a  "; cin>>a;
cout<<"ingrese el valor de b  "; cin>>b;
cout<<"valor de a "<<a<<endl;
cout<<"valor de b "<<b<<endl;
   h= a+b;
   cout<<"el resultado es  "<<h<<endl;	
   
   cout<<"nota del trabajo ";cin.getline(f,11);
   cin.getline(f,11);
   //cin>>f;
  cout<<"nota final "<<f<<endl;	
   
   system("pause");
   system("cls");
	
cout<<"ingrese comentario  ";
 cin.getline(comentario, 11 );
 cin.getline(comentario, 11,'\n');
 cout<<comentario<<endl;
// cout<<f<<endl;	

   

	
	
	
	
	return 0;
	system("pause");
}