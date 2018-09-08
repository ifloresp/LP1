#include <iostream>
using namespace std;
double first, second;
int main() {
	cout<<"ingrese el primer decimal";
	cin>>first;
	cout<<"ingrese el segundo decimal";
	cin>>second;
	double div = first/second;
	cout<<"la division de las variables es = "<<div<<"\n";
	cout<<"la multiplicacion de las variables es = "<<first*second<<"\n";
	cout<<"la suma de las variables es = "<<first+second<<"\n";
	cout<<"la resta de las variables es = "<<first-second<<"\n";
	if (first<second) cout<<first<<" es menor que "<<second;
	if (first>second) cout<<first<<" es mayor que "<<second;
	if (first==second) cout<<first<<" y "<<second<<" son iguales";
}
