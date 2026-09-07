#include<iostream>
using namespace std;
void minMax(const int a[],int n,int&nm,int&mx){
    nm=mx=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<nm) nm=a[i];
        if(a[i]>mx) mx=a[i];
    }
}
void minMax(const int a[],int n,int*nm,int*mx){
    *nm=*mx=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<*nm) *nm=a[i];
        if(a[i]>*mx) *mx=a[i];
    }
}
int main(){
    int date[]={7,2,9,4,1};
    int lo,hi;
    minMax(date,5,lo,hi);
    cout<<"Min: "<<lo<<", Max: "<<hi<<endl;
    minMax(date,5,&lo,&hi);
    cout<<"ptr Min: "<<lo<<", Max: "<<hi<<endl;
    return 0;
}