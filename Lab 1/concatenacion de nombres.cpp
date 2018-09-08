#include <iostream>
#include <string>
using namespace std;
int main()
{
cout << "Ingrese dos nombres\n" ;
string first;
string second;
cin >> first >> second;
if (first==second) cout<<"Ambos son iguales \n";
if(first < second)
 cout << first << " esta lexicograficamente antes " << second <<"\n";
if(first > second)
 cout<<first<<" esta lexicograficamente despues " << second <<"\n";
}