#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the size of array..";
    cin>>n;
    int arr[n];
    cout<<"Enter  elements in array: ";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    // x number input taking...
    int x,num;
    cout<<"Enter a number to search..";
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i]>x)
        {
           num =arr[i];
        }
        else {cout<<"no max number found...";
        break;
        }
    }
    cout<<num;
    
    
}