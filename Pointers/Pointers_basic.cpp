#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Declaring an integer variable
    int n=10;
    //declaring an integer pointer
    int *p{nullptr};
    //pointing p to n
    p=&n;//Ampersand operator is used to get the address
    cout<<p<<endl;
    cout<<*p<<endl;
    //Changing variable value using our pointer
    *p=20;
    cout<<n<<endl;

    //These same operations belong to string, double and char pointers.

    //Pointers of containers, here for eg we take a vector container
    vector<string> names{"Ram","Abh","Anu"};
    //vector pointer variable
    vector <string> *namePointer{nullptr};
    //Assigning the address of the container.
    namePointer=&names;
    cout<<namePointer<<endl;
    for(auto x: (*namePointer))
    {
        cout<<x<<endl;
    }
}
