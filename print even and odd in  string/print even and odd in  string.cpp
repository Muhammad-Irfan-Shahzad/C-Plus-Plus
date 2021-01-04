

#include <iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
    char str[50];
    cout<<"Enter the string \n";
    cin.getline(str,40);
    int even[20];
    int odd[20];
    int Even=0;
    int Odd=0;
    cout<<endl;
    for(int i=0;i<strlen(str);i++)
    {
        if(isdigit(str[i]))
        {
            int num= (int)str[i] - 48;

            if(num%2==0)
            {
                even[Even]=num;
                Even++;
            }
            else
            {
                odd[Odd]=num;
                Odd++;
            }
        }
    }
    cout<<"Number of even in string is :";
    for(int i=0;i<Even;i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<endl;
    cout<<"Number of odd in string is :";
    for(int i=0;i<Odd;i++)
    {
        cout<<odd[i]<<" ";
    }
    
    int even_sum=0;
    for(int i=0;i<Even;i++)
    {
        even_sum=even_sum+even[i];
    }
    
    int odd_sum=0;
    for(int i=0;i<Odd;i++)
    {
        odd_sum=odd_sum+odd[i];
    }
    cout<<"\n Sum of even number :"<<even_sum<<endl;
    cout<<"Sum of Odd number :"<<odd_sum<<endl;
    
    return 0;
}
