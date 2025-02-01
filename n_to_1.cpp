//print n to 1 
#include<iostream>
using namespace std;
void print_n_t0_1(int n){
     if (n==0) return;
    cout<< n<<endl;
    print_n_t0_1(n-1);
    
    
    
}
int main(){
    int n;
    cin>>n;
    print_n_t0_1(n);
}