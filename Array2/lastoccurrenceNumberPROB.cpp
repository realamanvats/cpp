//Find the last occurrence of x in the array.
#include<iostream>
#include <vector>
using namespace std ;
int main(){
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
int f;
cout<<"Element index to be found  ";
cin>>f;
int idx=-1;
for (int i = v.size()-1; i>=0; i--)
{
    /* code */
    if (v[i]==f)
    {
        /* code */
        idx=i;
        break;
        
    }
  cout<<idx;
}

}