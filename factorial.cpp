//factorial
#include<iostream>
using namespace std;
int factupto(int n){
    if(n==0 || n==1) return 1;
    return n*factupto(n-1);
}
int main(){
    int n;
    cout<<"Enter a number to cal factorial.. ";
    cin>>n;
   cout<< factupto(n);

}