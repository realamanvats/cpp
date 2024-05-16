#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7,8};
int* ptr=arr;
//int * ptr =&arr; this is not valid in case of array.
cout<<ptr<<"  "<<&arr[0];
}