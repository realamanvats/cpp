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
    int sumeven=0;
    int sumodd=0;
    for (int i = 0; i <n; i++)
    {
       if (i%2==0)
       {
        sumeven+=arr[i];
       }
       
    }
    //sum of odd
    for (int i = 0; i <n; i++)
    {
       if (i%2!=0)
       {
        sumodd+=arr[i];
       }
       
    }
    cout<<sumeven-sumodd;
}