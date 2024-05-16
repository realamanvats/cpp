//pair of x is equal to x given number ....
#include <iostream>
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
     int x;
    cout<<"Enter a number to search..";
    cin>>x;
    int pair=0;
    for (int i = 0; i <=n; i++)
    {
       for (int j = 1+i; j <=n; j++)
       {
        if (arr[i]+arr[j]==x)
        {
           pair++;
        }
        
       }
       
    }
    if (pair==0)
    {
        /* code */
        cout<<" no result found";
    }
    cout<<pair;
}