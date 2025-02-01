//print n to 1 
#include<iostream>
using namespace std;
void print_1_t0_n(int p,int n){
     if (p>n) return;
    cout<< p<<endl;
    print_1_t0_n(p+1,n);
    
    
    
}
int main(){
    int n;
    cin>>n;
    print_1_t0_n(1,n);
}