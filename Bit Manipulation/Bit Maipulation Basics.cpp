/*The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.

The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1.

The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different.

The << (left shift) in C or C++ takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift.

The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift.

The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it.

Important Tricks
The left shift and right shift operators should not be used for negative numbers. If any of the operands is a negative number, it results in undefined
behaviour. For example results of both -1 << 1 and 1 << -1 is undefined. Also, if the number is shifted more than the size of integer, the behaviour is
undefined. For example, 1 << 33 is undefined if integers are stored using 32 bits.

The bitwise operators should not be used in place of logical operators. The result of logical operators (&&, || and !) is either 0 or 1, but bitwise
operators return an integer value. Also, the logical operators consider any non-zero operand as 1. For example, consider the following program, the
results of & and && are different for same operands.

The left-shift and right-shift operators are equivalent to multiplication and division by 2 respectively. As mentioned in point 1, it works only if numbers
are positive.

There are two types of integer representation in memory which is the unsigned and the signed integer. Unsigned integer is the bit which stores only positive values
and signed integers is the bit which has the last position to store the sign of the number hence its capacity is same as INT_MAX which is it can only store values
upto 2^31-1. Whereas the capacity of signed bit is double it can store the values utpo 2^32-1.
signed bit +ve contains 0
---------- -ve contains 1
Now the number of values we can store in an integer is 2^n whereas the maximum value which i can store is 2^n-1. This is the beauty of bitwise manipulation.*/

//The main function is given to test out any feature if you want to.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<(18>>1)<<endl;
    return 0;
}

