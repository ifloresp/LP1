#include <iostream>
#include <string>
using namespace std;
int main(){
	int i=0;
	int ma=100;
	int me=1;
	int num=ma+me;
	char ans;
	while(i<7){
		cout<<"tu numero es menor o igual que "<<num<<endl;
		cin>>ans;
		if(ans=='s'){
			
			ma=num;
			num=(ma+me)/2;
			i++;
			}
		else{
			if(i==0 && ans=='n' && num==100){
				cout<<"respuesta invalida";
				cin>>ans;
			}
			me=num;
			num=(ma+me)/2;
			i++;
		}
	}
	cout<<"tu numero es: "<<num<<endl;
	
}
