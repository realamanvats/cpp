#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    int max=INT_MIN;
    int secmax=INT_MIN;
    cout<<"enter the  number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"\n enter the elements :";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i <n; i++)
    {
        /* code */
        if (max<arr[i])
        {
            /* code */
            max=arr[i];
        }
        
        
    }
    //second max element...
      for (int i = 0; i <n; i++)
    {
     
        if (secmax<arr[i] &&  arr[i]!=max)
        {
            /* code */
         secmax=arr[i];
        }
        
    }
cout<<secmax;

}