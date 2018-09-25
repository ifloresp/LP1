#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	double aux1;
	double aux2;
	double a;
	double menor;
	double mayor;
    string unit;
    string lunit;
	vector<double> numeros; 
	cin>>a;
  	cin>>lunit;
	if(a!='#'){
		if (lunit=="in")
			aux1=a*2.54;
			numeros.push_back(a);
		if (lunit=="ft")
			aux1=a*30.48;
			numeros.push_back(a);
		if (lunit=="m")
			aux1==a*100;
			numeros.push_back(a);
		
		aux1=a;
		menor=aux1;
		mayor=aux1;
    	cout<<"el mayor hasta ahora es: "<<a<<" "<<lunit<<endl;
    	cout<<"el menor hasta ahora es: "<<a<<" "<<lunit<<endl;
	}
	while(cin>>a && cin>>unit){
		if(a!='#'){
			if(unit=="in")
				aux2=a*2.54;
				numeros.push_back(a);
			if(unit=="ft")
				aux2=a*30.48;
				numeros.push_back(a);
			if(unit=="m")
				aux2=a*100;
				numeros.push_back(a);
			if(aux2<menor){
				menor=a;
				cout<<"el menor hasta ahora es: "<<a<<" "<<unit<<endl;
			}
			if(aux2>mayor){
				mayor=a;
				cout<<"el mayor hasta ahora es: "<<a<<" "<<unit<<endl;
			}
		}
	}
}

