//print gm n time where n is given by users
#include <iostream>
using namespace std;
void greet(int n){
    if(n==0) return;
    cout<<"Good Morning ! "<<endl;
    greet(n-1);
}
int main(){
    int n;
    cout<<"Enter a number... ";
    cin>>n;
    greet(n);
}