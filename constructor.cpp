#include<iostream>
using namespace std;
class Tracer{
    int id;
    public:
    Tracer(int i):id(i) {cout<<"Constructor#"<<id<<endl;}
    ~Tracer()           {cout<<"Destructor#"<<id<<endl;}
};
int main(){
    cout<<"Enter block\n";
    {Tracer a(1),b(2); cout<<"......Working.....\n";}
    cout<<"Leftblock\n";
    return 0;
}