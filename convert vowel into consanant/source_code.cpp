#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[50];
	cout<<"Enter the string \n";
	cin.getline(str,40);
	int size =strlen(str);
	int count=0;
	for(int i=0;i<size;i++)
	{
		if(str[i]!='a'&&str[i]!='A'&& str[i]!='e'&&str[i]!='E'&&str[i]!='i'&&str[i]!='I'&& str[i]!='o'&&str[i]!='O'&&str[i]!='u'&&str[i]!='U')
		{
			if(count==0)
			{
				str[i]='a';
				count++;
			}
			
			else if(count==1)
			{
				str[i]='e';
				count++;
			}
			
			else if(count==2)
			{
				str[i]='i';
				count++;
			}
			
			else if(count==3)
			{
				str[i]='o';
				count++;
			}
			
			else if(count==4)
			{
				str[i]='u';
				count=0;
			}
		}
	}
	
	
	cout<<"After  converting  consonant into vowel  :";
	char *p;
	p=str;
	for(int i=0;i<size;i++)
	{
		cout<<*(p+i);
	}
	
	
	
}
