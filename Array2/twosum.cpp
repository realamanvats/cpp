//Find the last occurrence of x in the array.
#include<iostream>
#include <vector>
using namespace std ;
int main(){
    int f;
cout<<"Element sum ";
cin>>f;
vector <int> v;
cout<<"Enter the size of array";
int size;
cin>>size;
int x;
cout<<"Enter the value...  ";
for (int i = 0; i <size; i++)
{
    /* code */
    cin>>x;
    v.push_back(x);
}

int idx=-1;
for (int i = 0; i<=v.size()-2; i++)
{
    for (int j =i+j; j <= v.size()-1; j++)
    {
        /* code */
        if (v[i]+v[j]==f)
        {
            /* code */
            cout<<"("<<i<<","<<j<<")"<<endl;
        
        }
        
    }
    
}
}
