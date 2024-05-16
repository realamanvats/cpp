//Find the maximum value out of all the elements in the array.
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
    cout<<"max value is "<<max;
}