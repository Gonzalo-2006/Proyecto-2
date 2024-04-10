#include<iostream>
using namespace std;
int main(){
	
	int c,e,x,z,total;
	float y;
	char a[70];
	char b[70];
	char d,tipo;
	int opcion;
	cout<<"VENTA DE ZAPATOS"<<endl;
	
	cout<<"Referencia del zapato "<<endl;cin.getline(a,70);
	
	cout<<"Descripcion del zapato "<<endl;cin.getline(b,70);
	
	cout<<"Talla del zapato"<<endl;cin>>c;	
do{
	cout<<"Disponibilidad del zapato: s para si y n para no"<<endl;cin>>d;
}while(d!='s'&& d!='n');
    if(d=='s'|| d=='n'){
    	
    cout<<"cantidad de zapatos"<<endl;cin>>x;
	cout<<"costo de unidad"<<endl;cin>>e;
	opcion=0;
	if(e<=30000&&e>0){
	opcion=1;
	}else if(e>30000 && e<=60000){
    opcion=2;
	}else if(e>60000){
	opcion=3;
	}

	switch(opcion){
		case 1:
		tipo='A';
		y=e+(e/2);
		total=50;
		z=(e/2)*x;
			break;
			
		case 2:
		tipo='B';
		y=e+(e*0.4);
		total=40;
		z=(e*0.4)*x;
		break;
		
		case 3:
		tipo='C';
		y=e+(e*0.3);
		total=30;
		z=(e*0.3)*x;
		break;
			default:cout<<"error"<<endl;
			system("pause");
			return 0;
				break;
	}
	
	


	system("pause");
	system("cls");
	cout<<"Los datos registrados son :"<<endl;
	cout<<"Referencia: "<<a<<endl;
	cout<<"Tipo: "<<tipo<<endl;
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
	cout<<"utilidad porcentual: "<<total<<"%"<<endl;
	cout<<"gracias por digitar la informacion"<<endl;
	}else{
     cout<<"error"<<endl;
	}
	

        system("pause");
	    system("cls");
	cout<<"elaborado por: andrey portela"<<endl;
    	system("pause");

	
	return 0;
	
}