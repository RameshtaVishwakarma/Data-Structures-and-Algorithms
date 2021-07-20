/*Rectangular Pattern */

#include<iostream>
using namespace std;

int main(){
 int r,c,i,j;
 cout<<"Enter the number of rows & columns"<<endl;
 cin>>r>>c;
 for(i=0;i<r;i++){
        for(j=1;j<=c;j++){
            cout<<"*";
        }
        cout<<endl;
 }
 return 0;
}
