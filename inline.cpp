#include<iostream>
using namespace std ;
inline int square(int x) {return x*x;}
double area (double r ) {return 3.14159 * r * r;}
int area (double b, double h) {return 0.5 * b* h ;}
int main(){
    cout<<"square(6)=" << square(6)<<endl;
    cout<<"circle r=2="<< area(2.0)<<endl;
    cout<<"rectangle 4x5=" <<area (4,5)<<endl;
    cout<<"trianle b=3h=8="<<area(3.0,8.0)<<endl;
    return 0;
}