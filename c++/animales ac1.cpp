#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class Mamifero{
private:
	string animal1;
	char letra;
public:
	Mamifero(string,char letra);
    void  cr();
    void  crs();
   
};
Mamifero::Mamifero(string  _animal1, char b){
	animal1 = _animal1;
    letra = b;
}
void Mamifero::cr(){
	cout<<"El "<<animal1 <<" tiene estas caracteristicas "<<letra;
}
//char  Mamifero::getMamiferoB(){
//	return b;
//}

int main(){
	string a;
	cout<<"ingrese el nombre del primer mamifero: "<<endl; cin>>a;
	char  b[50];
	cout<<"\ningrese las caracteristicas: ";
	cin.getline(b,50);
	
    Mamifero  p1 (a,b);
    p1.cr();



	return 0;
}