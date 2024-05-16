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
    int max = -1; // Initializing maximum with minimum integer value.
    for (int i = 0; i < n; i++)
    {
       if (max<=arr[i])
       {
       max=arr[i];
       }
       else continue;
    }
    cout<<"Max element of array is "<<max;
}