#include <iostream>
using namespace std;
int main(){
	string num;
	cout<<"ingrese el nombre del numero";
	cin>>num;
	if(num=="cero")
		cout<<"0";
	else if(num=="uno"){
		cout<<"1";
		return 0;
	}
	else if(num=="dos"){
		cout<<"2";
	}
	else if(num=="tres"){
		cout<<"3";
	}
	else if(num=="cuatro"){
		cout<<"4";
	}
	else{
		cout<<"no es un numero que conozca";
		cin>>num;
	}	
	}

