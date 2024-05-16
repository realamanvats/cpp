//multiplication of array
#include<iostream>
using namespace std;
int main(){
   int m;
   cout<<"Enter rows of first matrix ";
   cin>>m;
   int n;
   cout<<"Enter columns of first matrix ";
   cin>>n;
    int p;
   cout<<"Enter rows of second matrix ";
   cin>>p;
   int q;
   cout<<"Enter columns of second matrix ";
   cin>>q;
   if (n==p)
   {
    int a[m][n];
    cout<<"enter the element of FIRST Matrix ";
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
{
    cin>>a[i][j];
}
    }
    //second matrix input 
        int b[p][q];
    cout<<"enter the element of SECOND Matrix ";
    for (int i = 0; i < p; i++)
    {
      for (int j = 0; j < q; j++)
{
    cin>>b[i][j];
}
    }
    //resultant matrix
    int res[m][q];
    for (int i = 0; i < m; i++)
    {
        /* code */
        for (int j = 0; i <q; j++)
        {
            /* multiplay */
            res[i][j]=0;
         
          for (int k = 0; i <p; k++)
          {
            /* code */
            res[i][j]+=a[i][k]*b[k][j];
          }
          
        }
        
    }
     // printing reg 
     for (int i = 0; i <m; i++)
     {
    
        for (int j = 0; j <q; j++)
        {
        
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
     }
     
}
 else{
    //n!=p
    cout<<"Multiplication not possible";
   }
}