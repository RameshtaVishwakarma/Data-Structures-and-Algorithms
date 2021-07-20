#include<iostream>

using namespace std;

int main(){
 int i,j,r,temp,k;
 cout<<"Enter the vale of rows"<<endl;
 cin>>r;
  for(i=1;i<=r;i++){
    for(j=1;j<=r;j++){
        if(j<=r-i)
            cout<<" ";
        else
            cout<<"*";
    }
    cout<<endl;
  }
 return 0;
}
