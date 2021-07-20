#include<iostream>

using namespace std;

int main(){
 int i,j,c,temp;
 cout<<"Enter the number of columns"<<endl;
 cin>>c;
 temp = c;
 /*Logic 1
 for(i=0;i<temp;i++){
    for(j=1;j<=c;j++){
        cout<<"*";
    }
    cout<<endl;
    c--;
 }*/
 //Logic 2
 for(i=c;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
 }

 return 0;
}
