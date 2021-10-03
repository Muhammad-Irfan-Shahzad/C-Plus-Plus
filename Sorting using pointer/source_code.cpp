#include<iostream>
#include<fstream>
#include<string>
#include <sstream>
#include<string.h>
using namespace std;
void Bubble(int *arr, int size) 
{
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size; j++)
		 {
			if ( *(arr+i) < *(arr+j)) {
				swap(*(arr+i), *(arr+j));
			}
	    }
	}
}

void MergeSort(int *arr, int l, int m, int r)
{
	int i, j, k;
	int s1 = m - l + 1;
	int s2 = r - m;
	int *L = new int[s1], *R = new int[s2];
	for (i = 0; i < s1; i++) {
		*(L+i) = *(arr+l + i);
	}
	for (j = 0; j < s2; j++) {
		*(R+j) = *(arr+m + 1 + j);
	}
	i = 0; j = 0; k = l;
	while (i < s1 && j < s2) {
		if (*(L+i) <= *(R+j)) {
			*(arr+k)= *(L+i);
			i++;
		}
		else {
			*(arr+k) = *(R+j);
			j++;
		}
		k++;
	}
	while (i < s1) {
		*(arr+k)= *(L+i);
	i++; k++;
	}
	while (j < s2) {
		*(arr+k) = *(R+j);
		j++; k++;
	}
}

void Merge(int *arr, int l, int r) 
{
	if (l < r) {
		int m = l + (r - l) / 2;
		Merge(arr, l, m);
		Merge(arr, m + 1, r);
		MergeSort(arr, l, m, r);
	}
}

void output(int *arr, int size)
{
	for(int i=0;i<size;i++)
	{
			cout<<*(arr+i)<<" ";
	}
	
}
void input()
{
		int size,temp,count=1;
		ifstream outfile;
		outfile.open("Data1.txt");
		
		
		outfile>>size;
		int *ar = new int[100];
		
		
		for(int i=0;i<size;i++)
		{
			outfile>>temp;
			*(ar+i) = temp;
		          
		}
		cout<<"----------------------------------------Bubble Sort Result----------------------------------------- \n";	
		  
		while(!outfile.eof())
		{
		  cout<<"Test Case "<<count<<":"<<endl;
		  count++;
		  if(size >0)
		  {
		  
			cout<<"Array before Sort  : ";
			output(ar,size);
			Bubble(ar,size);
			cout<<"\nSorted Array:\n";
        	output(ar,size); 
        	cout<<endl<<endl;
         }
         else
         {
         	cout<<"Error:            Array Size should be greater than zero \n";
		 }
        	outfile>>size;
        	
        	for(int i=0;i<size;i++)
			{
				outfile>>temp;
				*(ar+i) = temp;
		    }
	   }
	   
	   cout<<"\n\n";
	   cout<<"----------------------------------------Merge Arrays Result-----------------------------------------\n";
	   
       int size1,size2;
       cout<<endl<<endl;
       ifstream outfile1;
	    outfile1.open("Data2.txt"); 
        outfile1>>size1;
         
        for(int i=0;i<size1;i++)
		{
			outfile1>>temp;
			*(ar+i) = temp;
		          
		}
        

        int *ar1 = new int[100];
        int *ar2 = new int[100];
         
        
        outfile1>>size2;
        for(int i=0;i<size2;i++)
		{
			outfile1>>temp;
			*(ar1+i) = temp;
		          
		}
		
		 
		
		int totalsize=size1+size2;
		int j=0;
		
		for(int i=0;i<totalsize;i++)
		{
		    if( i< size1)
			{
			   *(ar2+i)= *(ar+i);
		
			}
			else
			{
			  *(ar2+i) = *(ar1+j);
			  j++;	
			}	
		}
		
        count=1;
        
       	while(!outfile1.eof())
		{
		  cout<<"Test Case "<<count<<":"<<endl;
		  count++;
		  if(totalsize > 0)
		  {
		  
			cout<<"Array 1: ";
		    output(ar,size1);
		    cout<<"\nArray 2: ";
		    output(ar1,size2);
		    Merge(ar2,0,totalsize-1);
			cout<<"\n\nSorted Merge Array:\n";
        	output(ar2,totalsize); 
        	cout<<endl<<endl;
         }
         else
         {
         	cout<<"Error:            Array Size should be greater than zero \n";
		 }
        	
        	
        outfile1>>size1;
         
        for(int i=0;i<size1;i++)
		{
			outfile1>>temp;
			*(ar+i) = temp;
		          
		}
		
		outfile1>>size2;
        for(int i=0;i<size2;i++)
		{
			outfile1>>temp;
			*(ar1+i) = temp;
		          
		}
		
		
	    totalsize=size1+size2;
		j=0;
		
				for(int i=0;i<totalsize;i++)
		{
		    if( i< size1)
			{
			   *(ar2+i)= *(ar+i);
		
			}
			else
			{
			  *(ar2+i) = *(ar1+j);
			  j++;	
			}	
		}
		
        	
	   }
       
       
       
        
        
}
int main()
{
	
	input();

	
	return 0;
}
