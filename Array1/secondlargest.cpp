//Find the maximum value out of all the elements in the array.
//wap to do sum of all the array element 
#include <iostream>
#include<climits>
using namespace std;
int main(){
    int array_size;
    cout<<"Enter the size of array ";
    cin>>array_size;
    int x;
    cout<<"Enter the value of Array ";
    int array[array_size];
    for (int i = 0; i <=array_size-1; i++)
    {
        cin>>array[i];
    }
    //int max = array[0];  //check mark
    int max = INT_MIN;  //smallest value of int possible
   for (int i = 1; i <=array_size-1; i++)
   {
    if (max<=array[i])
    {
        /* code */
        max=array[i];
    }
    
   }
   cout<<max<<endl;
   int smax = INT_MIN;
   for (int i = 0; i <array_size-1; i++)
   {
    if (array[i]!=smax && smax <array[i])
    {
        /* code */
        smax=array[i];
    }
    
   }
   cout<<smax;

}