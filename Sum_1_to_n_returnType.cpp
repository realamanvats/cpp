//
//sum from 1 to n
#include<iostream>
using namespace std;
int sumupto(int n){
    if(n==0 || n==1) return 1;
    return n+sumupto(n-1);
}
int main(){
    int n;
    cout<<"Enter a number to cal sum upto.. ";
    cin>>n;
   cout<< sumupto(n);

}