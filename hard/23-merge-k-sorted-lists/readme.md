# 23. Merge k Sorted Lists

```
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it.
 
Example 1:
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1-&gt;4-&gt;5,
  1-&gt;3-&gt;4,
  2-&gt;6
]
merging them into one sorted list:
1-&gt;1-&gt;2-&gt;3-&gt;4-&gt;4-&gt;5-&gt;6
Example 2:
Input: lists = []
Output: []
Example 3:
Input: lists = [[]]
Output: []
 
Constraints:
	- k == lists.length
	- 0 &lt;= k &lt;= 104
	- 0 &lt;= lists[i].length &lt;= 500
	- -104 &lt;= lists[i][j] &lt;= 104
	- lists[i] is sorted in ascending order.
	- The sum of lists[i].length will not exceed 104.
```