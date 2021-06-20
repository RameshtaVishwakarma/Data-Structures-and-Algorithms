#include<iostream>
using namespace std;

int main()
{
    int scores[]={10,20,30,40,50,-1};
    //Here the most important point is that scores is the address value of the first element, okay so now if i give the address of scores pointer it won't make
    //any sense as I am trying to find out address of an address, so we need to dereference it before assigning to any other pointer. Or we can directly assign.
    int n=10;
    int *p=&n;
    cout<<&n<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<"---------"<<endl;
    cout<<scores<<endl;
    cout<<*scores<<endl;
    cout<<&scores<<endl;
//    //Iterating using pointers
//    int *scores_ptr=scores;
//    while(*scores_ptr != -1)
//    {
//        cout<<*(scores_ptr)<<endl;
//        scores_ptr++;
//    }
//
//    //Else
//    int temp=0;
//    while(scores[temp] != -1)
//    {
//        cout<<scores[temp]<<endl;
//        temp++;
//    }

//    string str1 = "frank";
//    string str2 = "james";
//    string ptr1{str1};
//    string ptr2{str2};
//    string ptr3{str1};
//
//    if(ptr1 == ptr2)
//    {
//        cout<<"true"<<endl;
//    }
//    else{cout<<"false"<<endl;}
//    if(ptr1 == ptr3)
//    {
//        cout<<"true"<<endl;
//    }else{cout<<"false"<<endl;}
//
    int *ptr1 = &scores[0];
    int *ptr2 = &scores[3];
    cout<<ptr2-ptr1<<endl;
    cout<<ptr1+1<<endl;
    return 0;
}
