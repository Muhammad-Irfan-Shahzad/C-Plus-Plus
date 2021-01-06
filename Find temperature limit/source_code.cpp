#include<iostream>
using namespace std;
int main()
{
	int ar[31];
	int size;
	cout<<"Enter the size of month \n";
	cin>>size;
	cout<<"Enter the temperatures \n";
	for(int i=0;i<size;i++)
	{
		cin>>ar[i];
	}
	
	int lowest_temp,higest_temp,average_temp=0,sum=0;
	higest_temp=ar[0];
	for(int i=0;i<size;i++)//calculate higest temperature
	{
		if(higest_temp<ar[i])
		{
			higest_temp=ar[i];
		}
	}
	lowest_temp=ar[0];
	for(int i=0;i<size;i++)//calculate higest temperature
	{
		if(lowest_temp>ar[i])
		{
			lowest_temp=ar[i];
		}
	}
	//calculate average temperature
	for(int i=0;i<=size;i++)
   	{
   		sum=sum+ar[i];
   	}
   
   average_temp=sum/size;
   cout<<"Highest tempurature :"<<higest_temp<<endl;
   cout<<"Average temperature :"<<average_temp<<endl;
   cout<<"Lowest temperature  :"<<lowest_temp<<endl;
   
     

}
