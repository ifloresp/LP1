#include <iostream>
#include <string>
using namespace std;
int main(){
	double NUM;
	string CH;
	string CH2;
	cout << "ingrese la cantidad y el tipo de moneda(USD JPY EUR GBP)";
	cin >> NUM >>CH;
	if (CH=="USD"){
	 cout<<"ingrese el codigo de la moneda a la que desea (JPY EUR GBP)";
	 cin>>CH2;
	 if (CH2=="JPY"){
	 	NUM=NUM*112.57;
	 	cout<<"el cambio a "<<CH2<<" es: "<<NUM<<" "<<CH2<<"'s";
	 }
	 else if (CH2=="EUR"){
	 	NUM=NUM*0.85;
	 	cout<<"el cambio a "<<CH2<<" es: "<<NUM<<" "<<CH2<<"'s";
	 }
	 else if (CH2=="GBP"){
	 	NUM=NUM*0.76;
	 	cout<<"el cambio a "<<CH2<<" es: "<<NUM<<" "<<CH2<<"'s";
	 }
	 else{
	 	cout<<"no conozco esa unidad";
	 }
}
    else if (CH=="JPY"){
    	cout<<"el cambio en dolares es: "<<NUM/112.57;
	}
	else if (CH=="EUR"){
    	cout<<"el cambio en dolares es: "<<NUM/0.85;
	}
	else if (CH=="GBP"){
    	cout<<"el cambio en dolares es: "<<NUM/0.76;
	}
	else{
		cout<<"no conozco esa unidad";
	}
}
