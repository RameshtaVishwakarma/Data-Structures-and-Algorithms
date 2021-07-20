/*Floyd's Triangle */

#include<iostream>
using namespace std;

int main(){
 int i,j,n,temp;
 cout<<"Enter the value of n"<<endl;
 cin>>n;
 temp=1;
 for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<temp++<<" ";
    }
    cout<<endl;
 }
 return 0;
}
