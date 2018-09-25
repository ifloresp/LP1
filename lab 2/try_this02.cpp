#include <iostream>
#include <string>
using namespace std;
int main(){
	double NUM;
	char CH;
	char CH2;
	cout << "ingrese la cantidad y el tipo de moneda('U' 'J' 'E' 'G' 'Y' 'S')";
	cin >> NUM >>CH;
	switch(CH){
	 case 'U':
	  cout<<"ingrese el codigo de la moneda a la que desea ('J' 'E' 'G' 'Y' 'S')";
	  cin>>CH2;
	  switch (CH2){
	   case 'J':
	 	NUM=NUM*112.57;
	 	cout<<"el cambio a "<<CH2<<" es: "<<NUM<<" "<<CH2<<"'s";
	 	break;
	   case 'E':
	 	NUM=NUM*0.85;
	 	cout<<"el cambio a "<<CH2<<" es: "<<NUM<<" "<<CH2<<"'s";
	 	break;
	   case 'G':
	 	NUM=NUM*0.76;
	 	cout<<"el cambio a "<<CH2<<" es: "<<NUM<<" "<<CH2<<"'s";
	 	break;
	   case 'Y':
	   	NUM=NUM*6.86;
	   	cout<<"el cambio a "<<CH2<<" es: "<<NUM<<" "<<CH2<<"'s";
	   case 'S':
	   	NUM=NUM*3.57;
	   	cout<<"el cambio a "<<CH2<<" es: "<<NUM<<" "<<CH2<<"'s";
	   default:
	 	cout<<"no conozco esa unidad";
	 	break;
	 }
     case 'J':
    	cout<<"el cambio en dolares es: "<<NUM/112.57<<" dolares";
    	break;
	 case 'E':
    	cout<<"el cambio en dolares es: "<<NUM/0.85<<" dolares";
	    break;
	 case 'G':
    	cout<<"el cambio en dolares es: "<<NUM/0.76<<" dolares";
        break;
     case 'Y':
    	cout<<"el cambio en dolares es: "<<NUM/6.86<<" dolares";
        break;
     case 'S':
    	cout<<"el cambio en dolares es: "<<NUM/3.57<<" dolares";
        break;
	 default:
		cout<<"no conozco esa unidad";
	}
}
