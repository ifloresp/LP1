int main()
{
	double temp=0;
	double sum=0;
	double high_temp=0;
	double low_temp=0;
	int no_of_temps=0;
	
	while(cin>>temp) {
		++no_of_temps;
		sum+=temp;
		if(temp>high_temp) high_temp=temp;
		if(temp<low_temp) low_temp=temp;
	}
	cout<<"temperatura alta: "<<high_temp<<endl;
	cout<<"temperatura baja: "<<low_temp<<endl;
	cout<<"temperatura promedio: "<<sum/no_of_temps<<endl;
	return 0;
}
