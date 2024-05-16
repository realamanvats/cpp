#include<iostream>
using namespace std;
void display(int a[], int size){
    for (int i = 0; i <=size-1; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
 
} 
void change(int b[]){
b[0]=100;
}
int main(){
    int arr[]={1,2,3,4,5};
    //accessing the element of array in another function.
    //updation ,passby value 
int size = sizeof(arr)/4;
display(arr,size);
change(arr);
display(arr,size);
}