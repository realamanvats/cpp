//Taking the input in vector..
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int>a;
int x;
cout<<"Enter the size of the array...";
cin>>x;
cout<<"Enter the value in vector... ";
for (int i = 0; i <x; i++)
{
    /* code */
    int y;            // we use a extra variable to take input in vector...
    cin>>y;
    a.push_back(y);
}
for (int i = 0; i <x; i++)
{
    /* code */
       cout<<a.at(i)<<" ";         // printing the value ....
    
}
cout<<endl;
//short(a.begin(), a.end());

}