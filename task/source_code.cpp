#include<iostream>
#include <sstream>
#include <string>
using namespace std;
template<class T>
class MyList{
	protected:
	int size;
	T *store;
	public:
	MyList()
	{
		
		
	}
	
	MyList(int s)
	{
		size=s;
		store= new T[size];
		
	}
	~MyList()
	{
		delete[] store;
	}
	
	
};
template<class T>
class Stack:public MyList<T>{
	protected:
		int size;
		T *store;
	int index;
	public:
    	Stack()
    	{
    		
		}
	  Stack(int Size)
	 {
	 	 size=Size;
	     store = new T[Size];
	     index=-1;
	 }
	 
	 
	 T Area(T n1,T n2)
	 {
	 	return n1*n2;
	 }
	 
	virtual bool isEmpty() 
	{
		if (index == -1)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
    virtual	bool isFull()
	{
		if (index == size-1)
		   return true;
		   
		else
		   return false;
	}


	void addElem(T data) 
	{
		if (!isFull())
		{  index++;
			store[index] = data;
			
		} else {
			cout << "The Stack is full" <<endl;
		}
	}
virtual	T getElem() 
	{
		if (!isEmpty())
		{
			T var=store[index];
			index--;
			return var;
		}
		else
			cout << "Stack is empty.." <<endl;

	}

	
	virtual void clearItems()
	{
		delete[] store;
	}
	

};

template<class T>
class Queue:public Stack<T>{
	int top;
	int end;
	int size;
	T *store;
	public:
		Queue()
		{
			top=0;
			end=-1;
			
		}
		
		
		Queue(int Size)
		{
			size=Size;
			store = new T[Size];
			top=0;
			end=-1;
			
			
		}
		
		
		
		
   bool isEmpty() 
	{
		if (top> size-1)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
   	bool isFull()
	{
		if (end>= size-1)
		   return true;
		   
		else
		   return false;
	}


	void addElem(T data) 
	{
		if (!isFull())
		{  end++;
			store[end] = data;
			
		} else {
			cout << "The Stack is full" <<endl;
		}
	}
	T getElem() 
	{
		if (!isEmpty())
		{
			T var=store[top];
			top++;
			return var;
		}
		else
			cout << "Stack is empty.." <<endl;

	}

		
		
		
		
	
	
	
	void clearItems()
	{
		delete[] store;
	}
	
};
int get_int(string a)
{
    int ri = -1;
    string line = "";
    bool isint = false;

    while (!isint)
    {
        
       line=a;
        stringstream ss(line);
        if (ss >> ri)
        {
            if (ss.eof())
            {  
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
	
	
	int size,ch,v,v1;
	
	    	    
	string var,num;
	char choice;
	cout<<"Would you like to use a stack or queue(S/Q)? \n";
	cin>>choice;
	if(choice=='S'||choice=='s')
	{
		cout<<"How many items to store? \n";
	    cin>>size;
	    Stack<int>obj(size);
	    cout<<"Would you like to store integers,string, or rectangle(1,2 or 3)?\n";
	    cin>>ch;
	    if(ch==1)
	    {
	    	 
            
	    	
	    	
	    	int k=0;
	    	v=get_int("s");
	    	while(k<size)
	    	{   cout<<"Enter num:";
	    	    cin>>var;
	    	
	    	
	    	    v=get_int(var);
	    		if(v!=0)
	    		{
	    			obj.addElem(v);
				}
				else
				{
					cout<<"wrong string Input--> will enter 0 \n";
					obj.addElem(0);
				}
  
	    		k++;
			}
			cout<<endl;
			cout<<"All Elements \n";
			for(int i=0;i<size;i++)
			{
				cout<<"Element-->";
				cout<<obj.getElem()<<endl;
			}
		obj.clearItems();	
	    }
		else if(ch==2)
		{
			Stack<string>obj1(size);
			for(int i=0;i<size;i++)
	    	{
	    		cout<<"Enter num :";
	    		cin>>var;
	    		obj1.addElem(var);
			}
			cout<<endl;
			cout<<"All Elements \n";
			for(int i=0;i<size;i++)
			{
				cout<<"Element-->";
				string h=obj1.getElem();
				cout<<h<<endl;
			}
				obj1.clearItems();
		}
		else if(ch==3)
		{
			Stack<int>obj3;
			int *area,*l,*w;
			l=new int[size];
			w=new int[size];
			area =new int[size];
			for(int i=0;i<size;i++)
			{   int x,y;
				cout<<"Enter length and width space separated :";
				cin>>x>>y;
				if(x<=0 ||y<=0)
				{
					cout<<"wrong length or width entering 0 and 0 \n";
					int y=0,x=0;
				 	area[i]=obj3.Area(x,y);
					l[i]=0;
					w[i]=0;        	
				}
				else
				{
					l[i]=x;
					w[i]=y;
					area[i]=obj3.Area(x,y);
				}
				
				
			}
			for(int i=0;i<size;i++)
			{
				cout<<"Element-->Length="<<l[i]<<",Width="<<w[i]<<",Area="<<area[i]<<endl;
			}
			obj3.clearItems();
		}
	    
		
	}
	else if(choice=='Q'||choice=='q')
	{
		cout<<"How many items to store? \n";
	    cin>>size;
	    Queue<int>obj4(size);
	    cout<<"Would you like to store integers,string, or rectangle(1,2 or 3)?\n";
	    cin>>ch;
	    if(ch==1)
	    {
	    	 
            
	    	
	    	
	    	int k=0;
	    	v=get_int("s");
	    	while(k<size)
	    	{   cout<<"Enter num:";
	    	    cin>>var;
	    	
	    	
	    	    v=get_int(var);
	    		if(v!=0)
	    		{
	    			obj4.addElem(v);
				}
				else
				{
					cout<<"wrong string Input--> will enter 0 \n";
					obj4.addElem(0);
				}
  
	    		k++;
			}
			cout<<endl;
			cout<<"All Elements \n";
			for(int i=0;i<size;i++)
			{
				cout<<"Element-->";
				cout<<obj4.getElem()<<endl;
			}
			obj4.clearItems();
	    }
		else if(ch==2)
		{
			Queue<string>obj5(size);
			for(int i=0;i<size;i++)
	    	{
	    		cout<<"Enter num :";
	    		cin>>var;
	    		obj5.addElem(var);
			}
			cout<<endl;
			cout<<"All Elements \n";
			for(int i=0;i<size;i++)
			{
				cout<<"Element-->";
				string h=obj5.getElem();
				cout<<h<<endl;
			}
				obj5.clearItems();
		}
		else if(ch==3)
		{
			Queue<int>obj6;
			int *area,*l,*w;
			l=new int[size];
			w=new int[size];
			area =new int[size];
			for(int i=0;i<size;i++)
			{   int x,y;
				cout<<"Enter length and width space separated :";
				cin>>x>>y;
				if(x<=0 ||y<=0)
				{
					cout<<"wrong length or width entering 0 and 0 \n";
					int y=0,x=0;
				 	area[i]=obj6.Area(x,y);
					l[i]=0;
					w[i]=0;        	
				}
				else
				{
					l[i]=x;
					w[i]=y;
					area[i]=obj6.Area(x,y);
				}
				
				
			}
			for(int i=0;i<size;i++)
			{
				cout<<"Element-->Length="<<l[i]<<",Width="<<w[i]<<",Area="<<area[i]<<endl;
			}
			obj6.clearItems();
		}
	    
	
	
	
	
	
   }
	
	
	
}
