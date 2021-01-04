#include<iostream>

using namespace std;

class Time{

    int hr, mn, sec;

    public:
   void read_time(int, int, int);
   void add_time(Time, Time);
   void show_time();
};

void Time:: read_time(int x, int y, int z){
    hr=x;
    mn=y;
    sec=z;
}   

void Time:: add_time(Time a, Time b){
    int c= a.mn + b.mn; //addition of mins for further calculation 
    int d= c/60; //division of mins is done so that if mins exceeds 60, then it will be added to hours.
    int e= a.sec + b.sec; //addition of secs for further calculation 
    int f= e%60; //secs that will be displayed
    int g= e/60; //division of secs is done so that if they exceed 60, then it will be added to mins.

    hr= d+ a.hr + b.hr; //assignment of hrs
    mn= g+ c%60; //assignment of mins
    sec= f; //assignment of secs;
}

void Time:: show_time(){
    cout<<"The sum of time is: "<<endl<<hr<<" hrs "<<mn<<" mins "<<sec<<" secs"<<endl;
}

int main(){

    Time t1, t2, t3;
    t1.read_time(5, 8, 10); 
    t2.read_time(11, 5, 10);
    t3.add_time(t1, t2);
    t3.show_time();
    return 0;
}