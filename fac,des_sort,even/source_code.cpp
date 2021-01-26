#include<iostream>
#include<string.h>
using namespace std;
int factorial(int x)
{

int f=1;

for (int i = 1; i <= x; i++)
	f*=i;

	return f;
}

int main()
{
	
	
	int arr[50][50]; 
	int row,col;
	cout<<"Enter the number of row :";
	cin>>row;
	cout<<"Enter the number of col :";
	cin>>col;
	cout<<"Enter the value of 2D array :\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<endl;
  int fact[row][col];
   int even[row][col];
  int count=0;
  do{
  
  
  cout<<"Enter 1 for factorical values \n";
  cout<<"Enter 2 for Even values \n";
  cout<<"Enter 3 for desending odder sorted value \n";
  cout<<"Enter 4 for exit \n";
  cin>>count;
  if(count==1)
  {
  
  	for(int i=0;i<row;i++)//factorical value 
	{
		for(int j=0;j<col;j++)
		{
			int v=arr[i][j];
			fact[i][j]=factorial(v);
		}
	}
	cout<<"2D array values is :";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
	cout<<endl;
	cout<<"factorical value is ";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<fact[i][j]<<" ";
		}
	}
	cout<<endl;
  
  }
  else if(count==2)
  {
  
  
   	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]%2==0)
			{
				even[i][j]=arr[i][j];
			}
			else
			{
				even[i][j]=arr[i][j]+1;
			}
		}
	}
	
	cout<<"2D array values is :";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
	cout<<endl;
	cout<<"All odd value after converting in even :";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<even[i][j]<<" ";
		}
	}
	cout<<endl;
   }
   
   if(count==3)
   {
   
    cout<<"2D array values is :";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
	cout<<endl;
   
	int x =0;
	for (int k = 0; k < row; k++)
    	{
        	for (int m = 0; m < col; m++)
        	{
             	x = m+1;
            	for (int i = k; i < row ; i++)
            	{
                	for (int j = x; j < col; j++)
                	{
                    	if (arr [k][m] < arr [i][j])
                        swap(arr [k][m] ,arr [i][j]);
                	}
                x=0;
            } 
        }
    }

    cout<<"Sorted values in descending order :";	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
	
	cout<<endl;
   }
}while(count!=4);
	
	
	
}
