#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,max;
    max=INT_MIN;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i <n; i++)
    {
        if (max<=arr[i])
        {
           max=arr[i]; 
        }
        else{
continue;
        } 
    }
    int secmax=INT_MIN;
     for (int i = 0; i <n; i++)
    {
        if (arr[i]<max&&arr[i]!=max)
        {
           secmax=arr[i]; 
        }
    
}
cout<<"secmax value is "<<secmax;
}