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
vector<int> v2;
for (int i =v.size()-1; i>=0; i--)
{
    /* code */
    v2.push_back(v[i]);
}
cout<<endl;
cout<<"v1 is ...";
for (int i = 0; i <size; i++)
{
   cout<<v[i]<<" ";
}
cout<<endl;
//v2
cout<<"v2 is ...";
for (int i = 0; i <size; i++)
{
   cout<<v2[i]<<" ";
}
}