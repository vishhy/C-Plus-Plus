#include<iostream>
#include<conio.h>
 
using namespace std;
 
class product {
  int a,b;
  public:
  void setdata(int x, int y){
      a=x;
      b=y;
  }
   void showdata(){
       cout<<"Product of the first terms: "<<a<<endl;
       cout<<"Product of the second terms: "<<b<<endl;

   }
  product operator*(product l){
      product temp;
      temp.a= a*(l.a);
      temp.b= b*(l.b);
      return temp;
  }
};
 
int main(){
 product p1, p2, p3;
 p1.setdata(4,5);
 p2.setdata(6,3);
 p3= p1*p2; 
 p3.showdata();
 
 return 0;
}