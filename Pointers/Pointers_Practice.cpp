#include<bits/stdc++.h>
using namespace std;

swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1; //Dereferencing the pointers
    *ptr1=*ptr2;
    *ptr2=temp;
}

void printVector(vector<int> *v) //Taking the address
{
    for(auto x: *v) //Dereferencing the vector
    {
        cout<<x<<endl;
    }
}

void renameString(string *str, string rename)
{
    *str=rename;
}

//Create Dynamic array over heap
int *createArray(int &sizeOfArray, int init)
{
    //Here we have created a pointer which stores the starting address of the array over the heap. We can return this because it is not local variable.
    int *ptr{nullptr};
    ptr = new int[sizeOfArray];
    for(int i=0; i<sizeOfArray; i++)
    {
        *(ptr + i)=init;
    }
    return ptr;
}

//Example of local pointer variable, we can return the pointer but not the address of a local variable
int *dont()
{
    int size{};
    return &size;
}

int *dont2()
{
    int size{};
    int *ptr = &size;
    return ptr;
}

void change(int &value)
{
    value*=10;
}

int main()
{
    //Types of pointers: They depend upon the data type. The size of these pointers depend upon the compiler in most cases they will match the size of data type. Here
    //the size is 4 0r 8 (stackoverflow and other websites)
    int *ptr{nullptr};
    char *ctr{nullptr};
    string *str{nullptr};
    float *ftr{nullptr};
    double *dtr{nullptr};
    //If you are declaring a pointer it is essential that you point it to null, else it will result into wild pointers.
    //Now the pointers are initialized. They can store the value of other pointer variables. For beginners lets keep it simple.

    int n=10;
    ptr=&n;
    //The pointer stores the address of the variable n. The ampersand operator fetches the address.
    cout<<ptr<<endl;
    //Now we can modify our variable n with the help of pointers too. But first we may need to dereference the pointer using asterisk variable.
    *ptr=20;
    cout<<n<<endl;
    //Now this was a simple example you can do the similar for other data-types too.

//---------------------------------------------------------------------------------------------------------------------------------------------------

    //CHAPTER 2:Pointer dynamic allocation.
    //Now if we wish to initialize a variable with the help of our pointer variable we can do that using the new keyword. Here the variable is initialized over heap.
    //Heap is the free memory space above the stack. Now you may ask why? Why do we need to do this when we can simply initialize a variable. This is not that simple
    //as it may sound. Consider that you want to dynamically initialize an array. You can do that with the new keyword. The new keyword initializes elements during
    //run time. So we can simply increase the size of the array during run time. Which is what vectors do.

    int *ptr{nullptr};
    ptr = new int;
    //Now we can manipulate the variable declared over heap using this pointer only. If we forgot the pointer the variable would cause in memory leak.
    cout<<ptr<<endl;
    cout<<*ptr<<endl; //Garbage Value
    *ptr = 30;
    cout<<*ptr<<endl;

    //Dynamically creating an array during run time. We create a pointer which points to the array container in heap.
    int *atr{nullptr};
    int size = 10;
    atr = new int[size];
    cout<<atr<<endl; //Returns the address of the first element,
    cout<<*atr<<endl;//First element of the array. Garbage value

    //Traversing over the dynamically created array.
    for(int i =0;i<size;i++)
    {
        cout<<*(atr + i)<<endl; //Pointer arithmetic: Points to the next element.
    }

    //Traversing but in the traditional manner.
    for(int i=0;i<size;i++)
    {
        cout<<atr[i]<<endl; //This means that the [] acts as dereferencing operator.
    }
    //Range based for loops won't work as the array is actually a pointer
    delete [] atr;

//---------------------------------------------------------------------------------------------------------------------------------------------------------

    //CHAPTER 3: Relationship between array and pointers.
    //Now the name using which we declare the array always is the address of the first element in the array.
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;//Address of the first element.
    cout<<*arr<<endl;//first element.
    cout<<&arr<<endl;//In C, the address of the array and the address of the first element of the array are the same
    int *ptr = arr;
    for(int i =0;i<5;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    //We can do the same with vectors too.

//------------------------------------------------------------------------------------------------------------------------------------------------------

     //CHAPTER 4:pointer arithmetic.
     //This is somewhat same as the normal maths operation but the changes are related to pointers which is logical.
     int *ptr{nullptr};
     int *btr{nullptr};

     ptr = new int;
     btr = new int;

     *ptr = 10;
     *btr = 20;

     bool ans =(ptr == btr)?true:false; //Compares the address. If we use * it will compare the values.
     cout<<ans<<endl;

     //Increment operator increases the address and points to next element. If dereferenced then increments the value. Same goes for decrement operator.(use in array)
     cout<<ptr<<endl;
     cout<<ptr++<<endl;
     cout<<ptr+btr<<endl;
     cout<<ptr-btr<<endl;
     //You cannot add two address as buffer overflow. But you can subtract two pointers as done above, but it does not makes sense. so use in case of array.
     //There we can find the distance between two array elements using subtraction.

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

     //CHAPTER 5: CONSTANTS IN POINTERS.
     //There are 3 kinds of constants in pointers.
     //The first type is pointers to constant. Here you cannot change the value stored at the variable location but you can make pointer point to different location.
     int high=10;
     int low=3;
     const int *ptr = &high;
     //*ptr = 30; //Will throw error.

     //Type 2: constants, here the element to which pointer is pointing should be constant and we cannot change the address location.
     int *const btr = &high;
     btr = &low;// Will throw error.

     //Type 3: Constant pointers to constant. Neither can I change the address nor the value.
     const int *const htr = &high;
     high=&low;
     *high=30;
     //Error!.

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

    //CHAPTER 6: Passing pointers to functions:
    //For passing pointers to functions we need to pass the address which would be then accepted as pointer and be used inside the function.
    //The most naive example would be the swap function.
    int x = 10;
    int y = 20;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;

    //Lets try vectors
    vector<int> v={1,2,3,4,5};
    printVector(&v); //Now you might wonder why had we used the ampersand? It is because vector is a class whereas array was using a data type.

    string str = "Rameshta";
    renameString(&str,"GOD");
    cout<<str<<endl;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------

    //CHAPTER 7: Returning pointer from a function.
    int sizeOfArray = 10;
    int *btr = createArray(sizeOfArray,0);
    for(int i=0;i<sizeOfArray;i++)
    {
        cout<<*(btr + i)<<endl;
    }
    dont();
    dont2();
    int value=10;
    change(value); //Reference example.
    cout<<value;
}
