#include<iostream>
using namespace std;
int main(){
    int marks[5];
    cout<<"Enter the Marks of The students...";
    for (int i = 0; i <5; i++)
    {
        cin>>marks[i];
    }
    //printing marks of those students whose marks is less than 32...
    cout<<"roll no are...";
    for (int i = 0; i <5; i++)
    {
        if (marks[i]<=35)
        {
            /* code */
            cout<<i+1<<" ";
        }
        
    }
    
}