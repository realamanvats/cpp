// Print the given pattern

// Number Pyramid Palindrome
// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n value ";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        /* code */
        for (int l = 1; l <=n-i+1; l++)
        {
            /* code */
            cout<<" ";
        }
        
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        for (int k = i-1; k >=1; k--)
        {
            /* code */
            cout<<k;
        }
         cout<<endl;
    }
   
}