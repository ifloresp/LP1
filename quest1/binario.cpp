#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
	int num, count, r2;
	string r;
	cout<<"ingrese un numero";
	cin>>num;
	if (num>=0){
		while (num/2>=1){
			r2=num%2;
			num=num/2;
			r=(static_cast<std::ostringstream*>(&(std::ostringstream() << r2))->str())+r;
			count++;
		}
	}
	else {
		cout<<"numero invalido";
	}
	r=(static_cast<std::ostringstream*>(&(std::ostringstream() << num))->str())+r;
	count++;
	cout<<r;
}
