#include<iostream>

using namespace std;

int callA=0;
int callB=0;
int callC=0;
class A
{
protected:
   
   void func(int  & a)
   {
      a=a*2;
      callA++;
   }
};

class B
{
protected:
   void func(int & a)
   {
      a=a*3;
      callB++;
   }
};

class C
{
protected:
   void func(int & a)
   {
      a=a*5;
      callC++;
   }
};
class D:public A,public B,public C
{

	
	public:
         int val;
		//Initially val is 1
		 D()
		 {
		 	val=1;
		 }


		 //Implement this function
		 friend void update_val(int new_val);
		 
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};
void update_val(int new_val)
		 {
              A a;
             B b;
             C c;
            while(new_val!=1)
            {
              if(new_val%2==0)
               {
                new_val/=2;   
                 a.func(val);
              }  
               else if(new_val%3==0)
               {
                   new_val/=3;
                   b.func(val);
               }     
               else if(new_val%5==0)
                   {
                     new_val/=5;
                     c.func(val);
               }
             
            }   

			
		 }
void D::check(int new_val)
{
       update_val(new_val);
       cout<<"Value = "<<val<<endl<<"A's func called "<<callA<<" times "<<endl<<"B's func called "<<callB<<" times "<<endl<<"C's func called "<<callC<<" times"<<endl;
}


int main()
{
   D d;
   int new_val;
   cin>>new_val;
   d.check(new_val);

}
