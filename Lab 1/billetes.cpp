#include <iostream>
using namespace std;
int main(){
	int num;
	int one=0;
	int two=0;
	int five=0;
	int ten=0;
	int twen=0;
	int fif=0;
	int hund=0;
	cout<<"ingrese el entero";
	cin>>num;
	while (num<1000000 && num>0){
	 while (num>=100){
		num=num-100;
		hund++;
	}
	 while (num>=50){
		num=num-50;
		fif++;
	}
	 while (num>=20){
		num=num-20;
		twen++;
	}
	 while (num>=10){
		num=num-10;
		ten++;
	}
	 while (num>=5){
		num=num-5;
		five++;
	}
	 while (num>=2){
		num=num-2;
		two++;
	}
	 while (num>=1){
		num=num-1;
		one++;
	}
	 cout<<hund<<" billetes de 100$\n";
	 cout<<fif<<" billetes de 50$\n";
	 cout<<twen<<" billetes de 20$\n";
	 cout<<ten<<" billetes de 10$\n";
	 cout<<five<<" billetes de 5$\n";
	 cout<<two<<" billetes de 2$\n";
	 cout<<one<<" billetes de 1$\n";
	 return 0;
}
}

