//odd indexed *2 and even indexed by *10..
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
    //indexed checking......
    for (int i = 0; i < n; i++)
    {
       if (i%2==0)
       {
        arr[i]=arr[i]*10;
       }
       else {
       arr[i]= arr[i]*2;
       }
    }
    for (int i = 0; i < n; i++)
    {
     cout<<arr[i]<<" ";
    }
    
}