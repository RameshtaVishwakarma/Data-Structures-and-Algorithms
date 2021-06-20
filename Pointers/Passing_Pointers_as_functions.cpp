#include<iostream>
using namespace std;
#include<vector>
//Pass by reference using pointers
void double_data(int *ptr)
{
    *ptr = *ptr * 2;
}
//Pass by reference
//void double_data(int &ptr)
//{
//    ptr*=2;
//}
//swap function
void swap_values(int *ptr1, int *ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void printArray(vector<int> *arr, int n)
{
    for(auto x:*arr)
    {
        cout<<x<<endl;
    }
}
int main()
{
    int value=10;
    //We pass the address of the variable which would be stored int the pointer variable
    //Or we can simply pass the data and access the address in the function variable
    double_data(&value);
    int x=10,y=20;
    swap_values(&x,&y);
    cout<<x<<" "<<y<<endl;
    cout<<value<<endl;
//    int arr[]={1,2,30,4,5};
//    printArray(arr,5);
    vector<int> stooges{11,11,34,23,6};
    printArray(&stooges,5);//Here I cannot print stooges as it belongs to vector class in c++ so i will have to use get method or overload the << operator
    cout<<stooges<<endl;

}
