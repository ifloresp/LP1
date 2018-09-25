#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<double> distance;
	double temp;
	while (cin>>temp)
		if (temp!='#') 
			distance.push_back(temp);
	double sum = 0;
	for (int i = 0; i< distance.size();i++)
	 	sum += distance[i];
	cout <<"temperatura promedio: "<<sum/distance.size()<<endl;
	
	
	sort(distance.begin(),distance.end());
	double pmedian=(distance[distance.size()/2]+distance[(distance.size()/2)-1])/2;
	if (distance.size()%2==0)
		cout<<"Median temperature: "<<pmedian;
	else
		cout <<"Median temperature: "<<distance[distance.size()/2]<<endl;
}
