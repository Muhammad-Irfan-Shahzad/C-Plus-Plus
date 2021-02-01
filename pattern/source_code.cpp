
#include <iostream>

using namespace std;

int main()
{
    int row=10;
    int col=25;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1 &&j==13)
            {
                cout<<"*";
            }
            else if(i==2 &&j==10||i==2 &&j==16)
            {
                cout<<"*";
            }
            else if(i==3 &&j==7||i==3 &&j==19)
            {
                cout<<"*";
            }
            
            else if(i==4 &&j==4||i==4 &&j==22)
            {
                cout<<"*";
            }
            else if(i==5 &&j==4||i==5 &&j==22)
            {
                cout<<"*";
            }
            else if(i==6 &&j==4||i==6 &&j==22)
            {
                cout<<"*";
            }
            else if(i==7 &&j==4||i==7 &&j==22)
            {
                cout<<"*";
            }
            else if(i==8 &&j==7||i==8 &&j==19)
            {
                cout<<"*";
            }
            else if(i==9 &&j==10||i==9 &&j==16)
            {
                cout<<"*";
            }
            else if(i==10 &&j==13)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
}
*/
#include<iostream>
using namespace std;
int main()
{
    
    
    int row=20;
    int col =24;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
        
                
            
                if(i==1 &&j==4||i==1 &&j==6||i==1 &&j==8||i==1 &&j==10||i==1 &&j==12||i==1 &&j==14||i==1 &&j==16||i==1 &&j==18||i==1 &&j==20)
                {
                    cout<<"*";
                }
                else if(i==2&& j==1 ||i==2&&j==23)
                {
                    cout<<"*";
                }
                else if(i==3 &&j==4||i==3 &&j==6||i==3 &&j==8||i==3 &&j==10||i==3 &&j==12||i==3 &&j==14||i==3 &&j==16||i==3 &&j==18||i==3 &&j==20)
                {
                    cout<<"*";
                }
                else if(i==4 &&j==4||i==4 &&j==20)
                {
                    cout<<"*";
                }
                
                else if(i==5 &&j==8||i==5 &&j==12||i==5&&j==16)
                {
                    cout<<"*";
                }
                else if(i==6 &&j==8||i==6 &&j==12||i==6&&j==16)
                {
                    cout<<"*";
                }
                else if(i==7 &&j==8||i==7 &&j==12||i==7&&j==16)
                {
                    cout<<"*";
                }
                else if(i==8 &&j==8||i==8 &&j==12||i==8&&j==16)
                {
                    cout<<"*";
                }
                else if(i==9 &&j==8||i==9 &&j==12||i==9&&j==16)
                {
                    cout<<"*";
                }
                else if(i==10 &&j==8||i==10 &&j==12||i==10&&j==16)
                {
                    cout<<"*";
                }
                else if(i==11 &&j==6||i==11 &&j==8||i==11 &&j==10||i==11 &&j==12||i==11 &&j==14||i==11 &&j==16||i==11 &&j==18)
                {
                    cout<<"*";
                }
                else if(i==12 &&j==6||i==12 &&j==8||i==12 &&j==10||i==12 &&j==12||i==12 &&j==14||i==12 &&j==16||i==12 &&j==18)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
        }
        cout<<endl;
    }    
    
    
}








