//Calculate the sum of all the elements in the
given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"enter the value in array ";
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
     for (int i = 0; i <n; i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<" is the sum of all array elements \n";
}