#include<iostream>
using namespace std;
int main(){
    int arr []={1,2,3,4,5,6,7,8,9};
    int size =sizeof(arr)/sizeof(arr[0]);
    int*ptr=arr;
    for (int i = 0; i <=size-1; i++)
    {
        /* code */
        cout<<*ptr<<" ";
        ptr++;
    }
    
}