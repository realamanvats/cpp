//copy on array in to another array...
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the  number of elements in array: ";
    cin>>n;
    int arr[n];  // first array 
    cout<<"\n enter the elements :";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr2[n];
    for (int i = 0; i <n; i++)
    {
       arr2[i]=arr[n-1-i];
       
    }
    //printing the value...
    for(int i=0;i<n;i++){
        cout<<arr2[i];
    }
}