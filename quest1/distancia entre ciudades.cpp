#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<double> distance;
	double dist;
	while (cin>>dist && dist!=-100)
			distance.push_back(dist);
	double sum = 0;
	for (int i = 0; i< distance.size();i++)
	 	sum += distance[i];
	cout <<"suma de las distancias: "<<sum<<endl;
	
	
	sort(distance.begin(),distance.end());
	cout<<"shortest distance: "<<distance[0]<<endl;
	cout<<"largest distance: "<<distance[distance.size()-1]<<endl;
	cout<<"indique las ciudades de las que desea sacar media distancia"<<endl;
	int median1;
	int median2;
	cin>>median1;
	cin>>median2;
	int rest;
	int sum2;
	if (median1>median2) rest=median1-median2;
	if (median2>median1) rest=median2-median1;
	for(int j=0;j<=rest;j++){
	 sum2+=distance[j];
}
	cout<<(distance[median1-1]+distance[median2-1])/rest;
	
}
