//wap to do sum of all the array element 
#include <iostream>
using namespace std;
int main(){
    int array_size;
    cout<<"Enter the size of array ";
    cin>>array_size;
    cout<<"Enter the value of Array ";
    int array[array_size];
    for (int i = 0; i <=array_size-1; i++)
    {
        cin>>array[i];
    }
   int sum=0;
   for (int i = 0; i <=array_size-1; i++)
   {
    /* code */
    sum+=array[i]; 
   }
   
cout<<sum;
}