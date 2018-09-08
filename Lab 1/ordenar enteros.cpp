#include <iostream>
using namespace std;
int main(){
	int nums [3]={};
	int aux;
	cout<<"ingrese el primer entero";
	cin>>nums [0];
	cout<<"ingrese el segundo entero";
	cin>>nums[1];
	cout<<"ingrese el tercer entero";
    cin>>nums[2];
    while(nums[0]<nums[1]) {
	 aux=nums[0];
     nums[0]=nums[1];
     nums[1]=aux;
 }
    while(nums[1]<nums [2]){
     aux=nums[1];
     nums[1]=nums[2];
     nums[2]=aux;
}
	while(nums[0]<nums [2]){
     aux=nums[0];
     nums[0]=nums[2];
     nums[2]=aux;
 }
 while(nums[0]<nums[1]) {
	 aux=nums[0];
     nums[0]=nums[1];
     nums[1]=aux;
 }
    while(nums[1]<nums [2]){
     aux=nums[1];
     nums[1]=nums[2];
     nums[2]=aux;
}
	while(nums[0]<nums [2]){
     aux=nums[0];
     nums[0]=nums[2];
     nums[2]=aux;
 }
    cout<<nums[0]<<", "<<nums[1]<<", "<<nums[2];
}
