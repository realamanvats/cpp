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
    int i=0;
    int j=n-1;
while (i<j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}


    // for (int i = 0; i <n; i++)
    // {
    //    int temp=arr[i];
    //    arr[i]=arr[n-1-i];
    //    arr[n-i]=temp;  
       
    // }
    //printing the value...
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}