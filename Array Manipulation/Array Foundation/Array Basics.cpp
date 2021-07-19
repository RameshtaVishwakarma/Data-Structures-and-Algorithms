/*An array is a collection of items of same data type stored at contiguous memory locations. This makes it easier to calculate the position of each element
by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).
We can access a particular element directly using index in O(1) time. This is known as random access.

-> Arrays always store the address of first element. i.e.. arr, if we want the ith element we can simply do arr[0]+i to access that particular element.
-> Arrays are cache friendly. we can prefetch the whole container in one go whereas we cannot do the same with linked list or BSTs.

-> A dynamic array is quite similar to a regular array, but its size is modifiable during program runtime. DynamArray elements occupy a contiguous block of memory.
Once an array has been created, its size cannot be changed. However, a dynamic array is different. A dynamic array can expand its size even after it has been
filled. During the creation of an array, it is allocated a predetermined amount of memory. This is not the case with a dynamic array as it grows its memory size
by a certain factor when there is a need.

-> In C++, we can create a dynamic array using the new keyword. The number of items to be allocated is specified within a pair of square brackets. The type name
should precede this. The requested number of items will be allocated. These arrays are allocated on heap.

-> The length of a dynamic array is set during the allocation time. However, C++ doesn't have a built-in mechanism of resizing an array once it has been allocated.
You can, however, overcome this challenge by allocating a new array dynamically, copying over the elements, then erasing the old array.

Note: that this technique is prone to errors, hence, try to avoid it.

->In an unsorted array, the search operation can be performed by linear traversal from the first element to the last element.
->In an unsorted array, the insert operation is faster as compared to a sorted array because we don’t have to care about the position at which the element is to
be placed.
->In the delete operation, the element to be deleted is searched using the linear search, and then delete operation is performed followed by shifting the elements.

Time complexities:
Search: O(n)
Insert: O(1)
Delete: O(n)*/

#include <iostream>
using namespace std;

//Type 1:
int main() {
	int x, n;
	cout << "How many numbers will you type?" << "\n";
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " numbers" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	cout << "You typed: ";
	for (x = 0; x < n; x++) {
		cout << arr[x] << " ";
	}
	cout << endl;
	delete [] arr;
	return 0;
}

//Type 2:
int main(void) {

	int x;

	int *array{ new int[5]{ 10, 7, 15, 3, 11 } };

	cout << "Array elements: " << endl;

	for (x = 0; x < 5; x++) {

		cout << array[x] << endl;
	}

	return 0;
}
