
//Operator overloading of binary operator using friend function
//Operator overloadind is the way to implement  compile time polymorphism
//
#include<iostream>
using namespace std;
class Complex{
        private:
                int a,b;
        public:
                void setdata(int x,int y){
                a=x;
                b=y;
                }
                void showdata(){
                cout<<"a="<<a<<endl<<"b="<<b;
                               }

friend Complex operator +(Complex,Complex);             
};

Complex operator +(Complex X,Complex Y){
Complex temp;
temp.a=X.a+Y.a;
temp.b=Y.a+Y.b;
return temp;
}

int main(){

Complex c1,c2,c3;
c1.setdata(3,4);
c2.setdata(5,6);
c3=c1+c2;  // c3=operator+(c1,c2);
c3.showdata();

return 0;

}

