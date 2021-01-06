
#include <iostream> 
using namespace std;
int main()
{

double radius[10],area[10];

double *ptr;
ptr=radius;
double *ptr1;
ptr1=area;

cout<<" Enter 10 values of radius : "<<endl;
for(int i =0; i<10 ; i++)
{
	cin>>*(ptr+i);
}
    for(int i=0;i<3;i++)
    {
	  
	  	(*(ptr1+i)) = (3.14)*(*(ptr+i))*(*(ptr+i));

   }
cout<<"Calculated area of 10 circules :" << endl;
for(int i =0; i<10 ; i++)
{
   cout<<*(ptr1+i)<<endl;
}

}

