//wap to do sum of all the array element 
#include <iostream>
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
   cout<<"Enter the element you want to search";
    cin>>x;
    bool flag = false;  //check mark
   for (int i = 0; i <=array_size-1; i++)
   {
    /* code */
    if (array[i]==x)
    {
        /* code */
       flag=true;
        
    } 
   }
   if (flag==true)
   {
    /* code */
    cout<<"element found";
   }
   else cout<<"Element not found";
   

}