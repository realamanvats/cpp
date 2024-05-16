//sum of all the element in the Array
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for (int i = 0; i <=4; i++)
    {
        /* sum */
        sum+= arr[i];
    }
    cout<<"Sum of all the Element in the given Array is Sum"<<sum;
}