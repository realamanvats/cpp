#include<iostream>
#include<vector>
using namespace std;
void mt2( vector<int>&v ){
int n = v.size();
int i =0;
int j= n-1;
while (i<j)
{
    if (v[i]==0)
     i++;
    
     if (v[j]==1)
    {
        j--;
    }
     //if (i>j)  break;
    
    
     if (v[i]==1&& v[j]==1)
    {
        v[i]=0;
        v[j]=1;
        i++;
        j--;
    }
    
}


}
void short1(vector<int>&v){
 int   noo=0;
  int  noz=0;
  int n=v.size();
  for (int i = 0; i <n; i++)
  {
    /* code */
    if (v[i]==0)
    {
        /* code */noz++;
    }
    else noo++;
  }
  for (int i = 0; i <n; i++)
  {
    /* code */
    if (i<noz)
        v[i]=0;
    
    else v[i]=1;
  }
  
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
for (int i = 0; i <v.size(); i++)
{
    cout<<v.at(i)<<" ";
}
cout<<endl;
mt2(v);
for (int i = 0; i <v.size(); i++)
{
    cout<<v.at(i)<<" ";
}
}