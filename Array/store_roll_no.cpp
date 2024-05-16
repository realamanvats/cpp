// Write a program to store roll number and
// marks obtained by 4 students side by side in a
// matrix.
#include<iostream>
using namespace std;
int main(){
   int m,n;
   cout<<"enter the number of students ";
   cin>>m;
   cout<<"Enter the no of subjects... ";
   cin>>n;
   int arr [m][n];
   cout<<"Enter  Roll Number Marks: \n";
   for (int i = 0; i <m; i++)
   {
    for (int j = 0; j <n; j++)
    {
        cin>>arr[i][j];
    }
    
   }
   for (int i = 0; i <m; i++)
   {
    for (int j = 0; j <n; j++)
    {
        cout<<arr[i][j]<<" ";
    }
       cout<<endl;

   }
}