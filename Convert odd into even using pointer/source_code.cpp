#include <iostream> 
using namespace std;
int main(){

int values[10];

int *ptr;
   ptr=values;
cout<<" Enter the 10 integer values : "<<endl;
for(int i =0; i<10 ; i++)
{
	cin>>ptr[i];
    if((*(ptr+i))%2!=0)
	{
 		if((*(ptr+i)) >0)
		 {
        	*(ptr+i)+=1; 
    	 }
 		else if((*(ptr+i)) <0)
 		{
        	*(ptr+i)-=1;

    	}
	}
}
cout<<endl;
	cout<<"Array values are :" << endl;
	for(int i =0; i<10 ; i++)
	{
   		cout<<ptr[i]<<endl;
	}

	return 0;
}
