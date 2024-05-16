//wap to print a matrix in wave form.
#include<iostream>
using namespace std;
int main(){
   int m;
   cout<<"Enter rows of first matrix ";
   cin>>m;
   int n;
   cout<<"Enter columns of first matrix ";
   cin>>n;
   int matrix[m][n];
   for (int i = 0; i <m; i++)
   {
    for (int j = 0; i <n; j++)
    {
        cin>>matrix[i][j];
    }
    
   }
   cout<<endl;
   //printing the matrix in wave 
   for (int  i = 0; i <m; i++)
   {
    if (i%2==0)
   {
    for (int j = 0; j < n; j++)
    {
        /* code */
            cout<<matrix[i][j]<<" ";

    }
   
   }
    else{
        for (int j =n-1; j >=0; j--)
        {
              cout<<matrix[i][j]<<" ";
        }
        
    }
   }
   
   
}