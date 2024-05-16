#include<iostream>
using namespace std;
int main (){
    int n,x;
    int count=0;
    cout<<"Enter the  number of elements you want in array: ";
    cin>>n;
    int arr[n];
    //taking input in array...
    cout<<"Enter the  value of elements you want in array: ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<"Enter the value of x";
    cin>>x;
    for (int i = 0; i <n; i++)
    {
        /* code */
        for (int j = i+1; j <n; j++)
        {
          for (int k = i+2; k <n; k++)
          {
            if (arr[i]+arr[j]+arr[k]==x)
            {
               count++;
            }
            
          }
          
        }
        cout<<count;
    }
    
}