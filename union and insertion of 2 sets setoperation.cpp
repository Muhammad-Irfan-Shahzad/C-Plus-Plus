
#include <iostream>
using namespace std;
void removeNumber(int arr[], int idx, int &size)
{
	int i;
	for(i = idx; i < size - 1; i++)
		arr[i] = arr[i + 1];
	size--;
}

void removeDuplicate(int arr[], int &size)
{
	int i, j;
	int number;
	for(i = 0; i < size; i++)
	{
		number = arr[i];
		for(j = i + 1; j < size; j++)
		{
			if(number == arr[j])
			{
				removeNumber(arr, j, size); j--;			
			}
		}
	}
}
bool search(int num[],int size,int n,int &in)
{
	for(int i=0;i<size;i++)
	{
		if(num[i]==n)
		{  
		    in=i;
			return true;
		}
	}
 return false;	
	
}
int main()
{
    int A[30];
    int B[30];
    int D[60];
    int C[60];
    int E[60];
    int a=0,b=0;
  
    cout<<"Enter the size of A set \n";
    cin>>a;
    cout<<"Enter the value of set A \n";
    for(int i=0;i<a;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the size of B set \n";
    cin>>b;
    cout<<"Enter the value of set B \n";
    for(int i=0;i<b;i++)
    {
        cin>>B[i];
    }
    
    
   
    int k=0;
    int c=0;
    for(int i=0;i<a;i++)//intersection
    {
    	 
    	for(int j=0;j<b;j++)
    	{
		
        	if(A[i]==B[j])
        	{   
				c++;
        		D[k]=A[i];
        		k++;
        	
			}
	   }
    }
    int size=0;      
    for(int i=0;i<a;i++)//union
    {
    	C[i]=A[i];
    	size++;
	}
    for(int i=0;i<b;i++)
    {
    	C[i+a]=B[i];
    	size++;
	}
    removeDuplicate(C,size);
    int e=0;
    int index=0;
    for(int i=0;i<a;i++)
    {
    	if(!search(B,b,A[i],index))
    	{	
			E[e]=A[i];
			e++;
		}
	
		
		
	}
    
    
   cout<<"A-B {";  
   for(int i=0;i<e;i++)
   {
   	  cout<<E[i]<<",";
   }	
   cout<<" }"<<endl;
	
	   
    cout<<" A = {";
    for(int i=0;i<a;i++)
    {
        cout<<A[i]<<",";
    }
    cout<<" }";
    cout<<endl;
    cout<<" B = {";
    for(int i=0;i<b;i++)
    {
        cout<<B[i]<<",";
    }
    cout<<" }";
    cout<<endl;
    cout<<" D = A(intersection)B = {";
    
    for(int i=0;i<c;i++)
    {
        cout<<D[i]<<",";
    }
    cout<<" }";
    cout<<endl;
    
     cout<<" C = AUB = {";
    
    for(int i=0;i<size;i++)
    {
        cout<<C[i]<<",";
    }
    cout<<" }";
    cout<<endl;
    
    
    
}
