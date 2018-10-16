#include <iostream>
using namespace std;
int main(){
	unsigned long long rice=1;
	int j=1;
	for(int i=0;i<64;i++){
	    
	    cout<<"CUADRADO "<<j<<"  "<<rice<<" arroces"<<endl;
		if (rice==1024) cout<<"LLEGO A 1000 A LOS "<<j<<" CUADRADOS"<<endl;
		if (rice==1048576) cout<<"LLEGO A 10^6 A LOS "<<j<<" CUADRADOS"<<endl;
		if (rice==1073741824) cout<<"LLEGO A 10^9 A LOS "<<j<<" CUADRADOS"<<endl;
		rice=rice*2;
		j++;
	}
}
