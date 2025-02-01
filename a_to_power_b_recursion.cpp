//factorial
#include<iostream>
using namespace std;
int powrec(int a,int b){
    if(b==0) return 1;
    return a*powrec(a,b-1);
    
}
int main(){
    int a;
    cout<<"Enter base a ";
    cin>>a;
      int b;
    cout<<"Enter power b ";
    cin>>b;
    cout<<powrec(a,b);


}