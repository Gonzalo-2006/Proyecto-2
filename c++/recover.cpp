#include<iostream>
using namespace std;

int main(){
	
	float primera,segunda,tercera,cuarta,prom;
	float a=3.5,n=3.0;
	
	cout<<"INGRESE SU PRIMERA NOTA :"; cin>>primera;
	cout<<"INGRESE SU SEGUNDA NOTA :"; cin>>segunda;
	cout<<"INGRESE SU TERCERA NOTA :"; cin>>tercera;
	cout<<"INGRESE SU CUARTA  NOTA :"; cin>>cuarta;
	
	prom=(primera+segunda+tercera+cuarta)/4;
	 cout<<"\nla nota es"<<prom<<endl;
	 
	 if(prom>=a){
	 	cout<<"APROBADO"<<endl;
	 }
	 else if (prom<=n){
	 	cout<<"No aprobado"<<endl;
	 }
	else {
		cout<<"En este momento no tienes aprobado la materia de tecnologia, pero tienes la oportunidad de recuperar"<<endl;
	}
	

   
	
	
	
	
	
	
	
	system("pause");
	return 0;
}