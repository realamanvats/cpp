#include<iostream>
using namespace std;
void display(int a []){
for (int i = 0; i <=4; i++)
{
    /* code */
    cout<<a[i]<<" ";
}

}
void change (int b[]){
b[0]=100;
}
int main(){
int arr[]={1,4,2,7,46};
//accessing the elements of array in another function.
//updation.
//pass by value /reference
display(arr);
change(arr);
display(arr);
}