#include<iostream>
#include<conio.h> 
//Program for showing operator overlodaing for binary addition operator, 
//we'll do the same for others also, viz: negation, unary operators
 
using namespace std;
 
class A {
  private:
  int a, b;

  public:
  void setdata(int x, int y){
      a=x, b=y;
  }
  void showdata(){
      cout<<"First No.: "<<a<<endl<<"Second No.: "<<b<<endl;
  }
  A operator+(A d){
      A temp;
      temp.a= a+ d.a;
      temp.b= b+ d.b;
      return(temp); 
  }
}; 
 
int main(){
 A a1, a2, a3;
 a1.setdata(45, 23);
 a2.setdata(67,12);
 a3= a1+a2; //a3= a1.operator+(a2); 
 a1.showdata();
 a2.showdata();
 a3.showdata();

 return 0;
}