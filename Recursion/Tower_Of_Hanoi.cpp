/*The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod.
You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs
reach the 3rd rod.

Approach: The approach to solving the problem is to divide the problems into sub-problem
-Divide into smaller Problem
-Find Pattern
-Find the base case
-Have a Leap of faith in recursion
-Solve for bigger problem.

The problem is really simple think in terms of moving only 1 disk. We will move it from A to C. Now consider 2 Disk we would need to transfer a disk from
A to B then We will transfer the Disk from A to C. The Last step Would be to transfer disk from B to C. Have a leap of faith the problem would work for 3
Disk too.*/

#include<bits/stdc++.h>
using namespace std;

void toh(int n, char A, char B, char C)
{
    if(n == 1)
    {
        cout<<"Move the Disk from "<<A<<" to "<<C<<endl;
        return;
    }
    toh(n-1,A,C,B);//Moving from A to B using C as auxillary space.
    cout<<"Move the Disk from "<<A<<" to "<<C<<endl;
    toh(n-1,B,A,C);//Move disk from B to C with A as auxillary space.
}

int main()
{
    int n = 3;
    char A,B,C;//Three rods
    toh(n,'A','B','C');
}
