#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"Enter 5 numbers :..."<<endl;
    for (int i = 0; i <5; i++)
    {
        cin>>a[i];
    }
     cout<<"printing 5 numbers :..."<<endl;
    for (int i = 0; i <5; i++)
    {
        cout<<a[i]<<" ";
    }

    //char
     char c[5];
    cout<<"Enter 5 character :..."<<endl;
    for (int i = 0; i <5; i++)
    {
        cin>>c[i];
    }
     cout<<"printing 5 char :..."<<endl;
    for (int i = 0; i <5; i++)
    {
        cout<<c[i]<<" ";
    }

    //strings.....
    char s[5];
    cout<<"Enter 5 strings :..."<<endl;
    for (int i = 0; i <5; i++)
    {
        cin>>s[i];
    }
     cout<<"printing 5 strings :..."<<endl;
    for (int i = 0; i <5; i++)
    {
        cout<<s[i]<<" ";
    }
    

}