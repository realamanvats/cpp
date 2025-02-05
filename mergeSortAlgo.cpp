#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>a,vector<int>b,vector<int>&res){
int i=0; //a
int j=0; //b
int k=0; //res
while (i<a.size()&&j<b.size()){
    if(a[i]<b[j]){
        res[k]=a[i];
        k++;
        i++;
    }
    else {
       // b[j]<=a[i];
        k++;
        j++;
    }
}
if(i==a.size()){
    while (j<b.size())
    {
        res[k++]=b[j++];
    }
    
}
if(j==b.size()){
    while (i<a.size())
    {
        res[k++]=a[i++];
    }
    
}
}
int main(){
int a[]={1,4,5,8};
int n1=sizeof(a)/sizeof(a[0]);
vector<int>arr(a,a+n1);
int b[]={2,3,6,7,10,12};
int n2=sizeof(b)/sizeof(b[0]);
vector<int>arr2(b,b+n2);
vector<int>res(n1+n2);
merge(arr,arr2,res);
for (int i = 0; i <res.size(); i++)
{
    cout<<res[i]<<" ";
}

}