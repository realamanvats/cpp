//Find the element x in the array . Take array and x as input.
#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to find  ";
    cin>>x;
    for (int i = 0; i <n; i++)
    {
        if (x==arr[i])
        {
            /* code */
            cout<<"Element exsit at "<<i<<" place ";  // we can solve this problem by flag or using bool data type.
        }
        else{
            cout<<"Element not exsist ";
            break;
        } 
    }
    
}