//sum of all element of array..
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
    int sum=0;
    cout<<"sum of element of array is ....";
    for (int i = 0; i <n; i++)
    {
        /* code */
        sum+=arr[i];
    }
    cout<<sum;
}