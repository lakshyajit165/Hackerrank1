#include<iostream>
using namespace std;

int callA=0;
int callB=0;
int callC=0;
class A
{
  public:
   
   void func(int a)
   {
      a=a*2;
      callA++;
   }
};

class B
{
   public:
   void func(int a)
   {
      a=a*3;
      callB++;
   }
};

class C
{
  public:
   void func(int a)
   {
      a=a*5;
      callC++;
   }
};
class D 
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val=1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {
             A a;
             B b;
             C c;
            val=new_val;
            for(int i=2;i<val/2;i++)
             {
                if(val%i==0)
                 {
                    if(i==2)
                        a.func(i);
                    else if(i==3)
                         b.func(i);
                        else if(i==5)
                             c.func(i); 
                }   
                 
            }   
                 
                 
			
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};
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



