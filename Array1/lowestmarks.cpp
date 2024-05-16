#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the no of student ";
    cin>>n;
    int marks [n];
    for (int i = 0; i <=n-1; i++)
    {
        /* code */
        int a = 1+i;
        cout<<"Enter the marks of "<<a<<" student";
        cin>>marks[i];
    }
    for (int i = 0; i <=n-1; i++)
    {
        /* code */
        if (marks[i]<=35)
        {
            /* code */
            cout<<"marks of student is less than 35 "<<i<<" "<<endl;
        }
        
    
}
}