


#include<iostream>
#include <sstream>
#include <string>
using namespace std;

int get_int()
{
    int ri = -1;
    string line = "";
    bool isint = false;

    while (!isint)
    {
        cout <<"Enter num ";
        getline(cin, line);
        stringstream ss(line);
        if (ss >> ri)
        {
            if (ss.eof())
            {   // Success
                isint = true;
            }
            
        }
        if(isint==false)
            {
                ri=0;
                return ri;
                break;
            }
    }
    
    
        return ri;
    
    
}


int main()
{
    int a;
    for(int i=0;i<3;i++)
    {
        
        a=get_int();
        cout<<a<<endl;
    }    
    //cout<<" a is "<<a<<" b is "<<b<<endl;
    
    
}
