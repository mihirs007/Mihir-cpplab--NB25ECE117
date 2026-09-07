#include <iostream>
#include <string>
using namespace std;
void logmsg(const string &msg,int level=1)
{
    const string tag[]= { "","INFO","WARN","ERROR"};
    cout<<"["<< tag[level] << "]" <<msg<<endl;
}
double interest(double principal,double years,double rate = 7.5)
{
    return principal*rate*years/100.0;
}
int main()
{
    logmsg("system started");
    logmsg("low memeory",2);
    cout<<"Ïnterest = "<<interest(10000,2)<<endl;
    cout<<"interest =" <<interest(10000,2,9.0)<<endl;
    return 0; 
}