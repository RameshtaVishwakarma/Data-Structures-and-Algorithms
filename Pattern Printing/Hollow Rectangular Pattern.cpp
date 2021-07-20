/* Hollow Rectangular Pattern*/

#include<iostream>
using namespace std;

int main(){
    int r,c,i,j;
  cout<<"Enter the number of rows & columns"<<endl;
  cin>>r>>c;
  for(i=0;i<r;i++){
    for(j=1;j<=c;j++){
     if(j==1 || j==c){
        cout<<"*";
     }
       else if(i==0 || i==r-1){
            cout<<"*";
        }
        else
            cout<<" ";
    }
    cout<<endl;
  }


 return 0;
}
