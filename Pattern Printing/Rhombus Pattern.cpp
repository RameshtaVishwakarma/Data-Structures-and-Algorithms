/*Rhombus Pattern */

#include<iostream>
using namespace std;

int main(){
 int i,j,n;
 cout<<"Enter the value of n"<<endl;
 cin>>n;
 for(i=0;i<=n;i++){
    for(j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(j=1;j<n;j++){
        cout<<"*";
    }
    cout<<endl;
 }

 return 0;
}
