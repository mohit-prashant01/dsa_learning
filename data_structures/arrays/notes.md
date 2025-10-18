<h1><u>Arrays</u></h1>

<p>
Before learning about arrays, it’s important to understand <b style="color:red">variables</b> and <b style="color:red">data types.</b>
</p>

<p>
A <b>variable</b> is a named memory location used to store a value. This value can be of different types, such as <b>int, float, double, char, bool,</b> or <b>string,</b> depending on what kind of data we want to store.
</p>

<p>
To tell the compiler what type of data a variable will hold, we must specify its data type during declaration.
This is mandatory in C++, because C++ is a statically typed language — meaning the data type of every variable must be known at compile time, not at runtime.
</p>

<h4><u>Arrays</u></h4>
<p>An array is a linear data structure that stores a fixed number of elements of the same data type in contiguous memory locations.</p>
<hr>

<h4><u>Features of Arrays</u></h4>
<ul><li>All elements are of the same data type.
<li>Elements are stored in contiguous memory.
<li>Indexed based access -> direct and fast retrievel using index.
<li>Fixed size cannot change during runtime.
</ul>
<hr>

<h4><u>Declaration and Initialization</u></h4>
<p>To declare an array the syntax is:</p>
<pre>dataType arrayName[size];</pre>



e.g.,

<pre>int arr[5];   //this is declaration of an array of type int and of having size 5 
float arr[6];
char chArr[4];
</pre>

<p>To initialize an array the syntax is:</p>
<pre>dataType arrayName[size] = {val1,val2,val3,...};</pre>
<pre>e.g.,
int arr[] = {1,2,3,4};
</pre>



<hr>
<h4><u>Operations on Arrays</u></h4>

<h5>Traversal:</h5>
<p>Access and  display each element one by one.</p>

<h5>Insertion:</h5>
<p>Add a new element at a specific position (requires shifting elements)</p>

<h5>Deletion:</h5>
<p>Remove and element and shift remaining elements</p>

<h5>Searching:</h5>
<p>Find the position of an element</p>

<h5>Updating</h5>
<p>Change the value of an existing element</p>

<h5>Sorting</h5>
<p>Arrange elements in ascending or descening order</p>

<h5>Merging</h5>
<p>Combine two arrays into one</p>
<hr>



<h4><u>Advantages</u></h4>
<ul>
<li>Fast random access (O(1) using index)
<li>Easy to traverse
<li>Simple and efficient for fixed-size data
</ul>

<h4><u>Limitations</u></h4>
<ul>
<li>Fixed size (cannot grow or shrink)
<li>Homogeneous (only one data type)
<li>Insertion and deletion are costly due to shifting
</ul>
<hr>


<h4><u>Array Practice Questions</u></h4>
<h5>Level 1 — Basics</h5>

(Understand declaration, initialization, input/output, and traversal)
<ol>
<li>Declare an integer array of size 5 and input its elements from the user, then print them.

<li>Write a program to find the sum of all elements in an array.

<li>Write a program to find the average of elements in an array.

<li>Find the maximum and minimum element in an array.

<li>Count how many elements are even and how many are odd.

<li>Print all array elements in reverse order.

<li>Copy elements of one array into another array.

<li>Find the sum of positive and negative numbers separately.

<li>Input 10 numbers and count how many are greater than 50.

<li>Calculate the product of all elements in the array.
</ol>

<h5>Level 2 — Searching, Updating, and Insertion</h5>
<ol>
<li>Search for a given element in the array (Linear Search).

<li>Insert a new element at a given index.

<li>Delete an element from a given index.

<li>Update the value at a specific index.

<li>Count the frequency of a given element.

<li>Count total number of duplicate elements.

<li>Replace all negative numbers in an array with 0.

<li>Find the second largest and second smallest elements.
</ol>

<h5>Level 3 — Algorithmic Practice</h5>

<ol>
<li>Sort the array in ascending and descending order (Bubble Sort / Selection Sort).

<li>Merge two arrays into a third array.

<li>Find the sum of all even-index elements and odd-index elements separately.

<li>Count how many elements are prime numbers.

<li>Reverse the array in place (without using another array).

<li>Check if the array is palindromic (same when reversed).

<li>Find the difference between max and min element.

<li>Shift (rotate) array elements to the left by one position.

<li>Rotate array elements to the right by k positions.

<li>Find the missing number in an array of 1 to n (when one element is missing).
</ol>

<h5>Level 4 — Analytical Thinking</h5>
<ol>
<li>Find all pairs in the array whose sum equals a given number k.

<li>Find the majority element (that appears more than n/2 times).

<li>Move all zeroes to the end while maintaining order of others.

<li>Count occurrences of each element (frequency array).

<li>Find intersection and union of two arrays.

<li>Find the longest sequence of consecutive numbers.

<li>Separate even and odd numbers into two different arrays.

<li>Remove duplicates from a sorted array.

<li>Check if two arrays are equal (contain same elements).

<li>Compute prefix sum and suffix sum arrays.
</ol>