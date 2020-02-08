//Use of friend function:If we want to acess the members of two different classes 
//at the same timei.e inside the same funtion then we need to use the 
//concept of  friend function

#include<iostream>

using namespace std;
class B;//forward declration of class B
class A{
	private:
		int a;
	public:
           void setdata(int x){
	   a=x;
	   }


friend void fun(A,B);

};

class B{
      private:
	      int b;
public:
           void setdata(int y){
           b=y;

	   }      
	      friend void fun(A,B);


      };
void fun(A o1,B o2){
cout<<"a="<<o1.a<<endl<<"b="<<o2.b;
}

int main(){
A o1;
B o2;
o1.setdata(1);
o2.setdata(2);
fun(o1,o2);

return 0;
}
