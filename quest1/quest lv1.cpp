#include <iostream>
using namespace std;
int main(){
	double a;
	double b;
	double resta;
	while(cin>>a && cin>>b) 
		if(a!='#' || b!='#'){
	    	cout<<a<<"\t"<<b<<endl;
	    	if(a>b){
	    		resta=a-b;
				cout<<"el mayor es: "<<a<<endl;
				cout<<"el menor es: "<<b<<endl;
				if(resta<=1.0/100){
					cout<<"los numeros son casi iguales"<<endl;
				}
			}
			else if(a==b){
				cout<<"Los numeros son iguales"<<endl;
			}
			else{
				resta=b-a;
				cout<<"el mayor es: "<<b<<endl;
				cout<<"el menor es: "<<a<<endl;
				if(resta<=1.0/100){
					cout<<"los numeros son casi iguales"<<endl;
				}
			}
	}
	    else 
			return 0;
}
