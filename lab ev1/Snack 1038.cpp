#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int x,y;
	float R;
	cin>>x;
	cin>>y;
	
	if(x==1){
		R=4.0*y;
	}
	if(x==2){
		R=4.5*y;
	}
	if(x==3){
		R=5.0*y;
	}
	if(x==4){
		R=2.0*y;
	}
	if(x==5){
		R=1.5*y;
	}
	printf("Total: R$ %.2f\n",R);
	return 0;
}
