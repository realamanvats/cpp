#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the marks of students...";
    for (int i = 0; i <=4; i++)
    {
        /* taking marks of students ...*/
        cin>>arr[i];
    }
    //printing marks of the students...
    cout<<"Marks of students less than 35 are (roll no)";
     for (int i = 0; i <=4; i++)
    {
        if (arr[i]<=35)
        {
            /* code */
            cout<<i<<" ";
        }
        
    }
    
}