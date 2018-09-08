#include <iostream>
#include <string>
using namespace std;
int main()
{
 cout << "ingrese una palabra";
 string previous = " ";
 string current;
 while (cin >> current) {
   cout << "ingrese otra palabra";
   if (previous == current)
     cout << "Palabra repetida: "<<current<< '\n';
   previous = current;
}
}
