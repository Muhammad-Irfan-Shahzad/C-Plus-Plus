
#include<iostream>
using namespace std;
bool isMultiple(int var,int multiply_var)
{
    if(var%multiply_var==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int *ar;
    cout<<"Enter the size of series :";
    int s;
    cin>>s;
    ar = new int[s];
    cout<<"Enter the value of series \n";
    for(int i=0;i<s;i++)
    {
        cin>>ar[i];
    }
    int multiply_var;
    cout<<"Enter the multiply number key \n";
    cin>>multiply_var;
    for(int i=0;i<s;i++)
    {
        if(isMultiple5(ar[i]),multiply_var)
        {
            cout<<ar[i]<<" : is multiply of 5 \n ";
        }
        else
        {
            cout<<ar[i]<<" : is not multiply of 5 \n ";
        }
    }
    
    
}
