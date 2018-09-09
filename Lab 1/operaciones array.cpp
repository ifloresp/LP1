#include <iostream>
using namespace std;
int main(){
	double first;
	double second;
	string prom;
	cout<<"ingrese la operacion: '*', '/', '+', '-'";
	cin>>prom;
	cout<<"ingrese el primer valor";
	cin>>first;
	cout<<"ingrese el segundo valor";
	cin>>second;
	if(prom=="*"){ cout<<first*second;
	}
	if(prom=="/"){cout<<first/second;
}
	if(prom=="+"){cout<<first+second;
}
	if(prom=="-"){cout<<first-second;
}	
	
}
