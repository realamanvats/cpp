//product of all element of array..
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
    int pro=1;
    cout<<"product of element of array is ....";
    for (int i = 0; i <n; i++)
    {
        /* code */
        pro*=arr[i];
    }
    cout<<pro;
}