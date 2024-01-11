https://www.geeksforgeeks.org/count-of-possible-subarrays-and-subsequences-using-given-length-of-array/


Count of possible subarrays and subsequences using given length of Array


Given an integer N which denotes the length of an array, the task is to count the number of subarray and subsequence possible with the given length of the array.
Examples: 
 

Input: N = 5 
Output: 
Count of subarray = 15 
Count of subsequence = 32
Input: N = 3 
Output: 
Count of subarray = 6 
Count of subsequence = 8 
 

 

Approach: The key observation fact for the count of the subarray is the number of ends position possible for each index elements of the array can be (N – i), Therefore the count of the subarray for an array of size N can be:



Count of Sub-arrays = (N) * (N + 1)
                     ---------------
                            2
The key observation fact for the count of the subsequence possible is each element of the array can be included in a subsequence or not. Therefore, the choice for each element is 2. 
 

Count of subsequences = 2N
Below is the implementation of the above approach: 


Output: 
15
32
 

Time Complexity: O(log n)

Auxiliary Space: O(1)