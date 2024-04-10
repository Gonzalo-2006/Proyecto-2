#include<iostream>
using namespace std;

int main(){
	
	char r[70];
	char d[70];
	int t,c;
	char m;
	char f;
	

	
	do{	
    cout<<"Desea ingresar un zapato s/n: "<<endl;cin>>f;
}while(f!='s'&&f!='n');
do{	
if(f=='s'){
    cout<<"Digite referencia: "<<endl;cin>>r;
    cout<<"Digite una descripcion: "<<endl;cin>>d;
    cout<<"Digite la talla: "<<endl;cin>>t;
    cout<<"costo: "<<endl;cin>>c;
    
    do{
    cout<<"Desea ingresar otro zapato s/n: "<<endl;cin>>m;
    cout<<"\n";
}while(m!='s'&&m!='n');
}
    else if(f=='n'){
    	cout<<"fin de programa"<<endl;
}
}while(m=='s');
  if(m=='n'){
	cout<<"fin de aplicacion\n";
}
system("pause");
system("cls");
cout<<"elaborado por: andrey portela"<<endl;
system("pause");

return 0;
}