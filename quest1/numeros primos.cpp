#include <vector>
#include <iostream>
using namespace std;
int main(){
	int num;
	int j=1;
	int c;
	vector<int>nums;
	cin>>num;
	for(int i=1;i<=num;i++)
		if(i%j!=0){
			nums.push_back(i);
			c=i;
			j++;
		}
		else{
			j=1;
		}
		cout<<c<<endl;
}
