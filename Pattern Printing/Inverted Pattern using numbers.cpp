/*Inverted Pattern- using numbers*/

#include<iostream>
using namespace std;

int main(){
 int i,j,n,temp;
 cout<<"Enter the value of n"<<endl;
 cin>>n;
 /* Logic 1
 temp=n;
 for(i=1;i<=n;i++){
    for(j=1;j<=temp;j++){
        cout<<j;
    }
    temp--;
    cout<<endl;
 }*/
 //Logic 2
 for(i=n;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
 }

 return 0;
}
