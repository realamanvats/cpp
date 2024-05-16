//linear search...
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n(no of element/array)  ";
cin>>n;
int arr[n];
cout<<"Enter the value.. ";
for (int i = 0; i<n; i++)
{
    cin>>arr[i];
}
cout<<"Enter the element to be search...";
int x;
cin>>x;
//searching...
for (int i = 0; i<n; i++)
{
  
  if (arr[i]==x)
  {
    /* code */
    cout<<"Element found..."<<arr[i];
  }
 //break; 
}

}