#include<iostream>
using namespace std;
int main(){
	
	int a,i=1,b=1,m;
	
     while( (i>=1)&&(i<=9)){
    	cout<<"tabla del "<<i<<endl;
    	i++;
    	
	}
	 cout<<"\n";
	 do{
	 	cout<<"seleccione un tabla de mulltiplicacion: ";cin>>a;
	 }while(a>=9);
	 for(b=1; b<=9;b++){
	 	m=a*b;
	 	cout<<a<<" x "<<b<<" = "<<m<<endl;
	
	 }
	 cout<<"\n";
	  system("pause");
      system("cls");
      cout<<"elaborado por: andrey portela"<<endl;
      system("pause");
                                                      
	 

	
	
	
		
	return 0;
}