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
// for (int i = 0; i <=v.size()-1; i++)
// {
//     /* code *
// int i=0;
//     for (int j =v.size()-1; j>=0; j--)
// {
//     int n=v[i];
// v[i]=v[j];
// v[j]=n
// i++;

// // }
for (int i = 0,  j=v.size()-1 ;i<=j; i++, j--)
{
    /* code */
      int n=v[i];
v[i]=v[j];
v[j]=n;
}
for (int i = 0; i <=v.size()-1; i++)
{
    /* code */
    cout<<v[i]<<" ";
}


}

