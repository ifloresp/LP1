#include <iostream>
using namespace std;
int main()
try
{
	int x=1;
	int y=2;
	{
		if(x<=0) throw runtime_error("x es negativo");
		if(y<=0) throw runtime_error("y es negativo");
		int area1=area(x,y);
	}
}
