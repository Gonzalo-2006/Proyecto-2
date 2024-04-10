#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	float a,b,s,r,m;
	float d,p;

	cout<<"ingrese el valor de a: "<<endl; cin>>a;
	cout<<"ingrese el valor de b: "<<endl; cin>>b;
	
	s=a+b;
	r=a-b;
	m=a*b;
	d=(a/b);
	p=(a/b);
	p=p*100;
	
	cout<<a<<" + "<<b<<"= "<<s<<endl;
	cout<<a<<" - "<<b<<"= "<<r<<endl;
	cout<<a<<" * "<<b<<"= "<<m<<endl;
	cout<<a<<" / "<<b<<"= " <<d<<endl;
	cout<<a<<" % "<<b<<"= "<<p<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}