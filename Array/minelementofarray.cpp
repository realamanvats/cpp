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
    int min = 9999; // Initializing maximum with minimum integer value.
    for (int i = 0; i < n; i++)
    {
       if (min>=arr[i])
       {
       min=arr[i];
       }
       else continue;
    }
    cout<<"Min element of array is "<<min;
}