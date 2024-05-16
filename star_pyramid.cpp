//     * 
//    *** 
//   ***** 
//  *******
//  Print the given pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n value ";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        /* code */
        for (int j = 0; j <n-i+1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i-1; k++)
        {
            /* code */
            cout<<"*";
        }
         cout<<endl;
    }
   
}