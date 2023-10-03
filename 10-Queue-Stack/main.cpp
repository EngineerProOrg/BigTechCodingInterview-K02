/**
Given an array with all positive numbers
For each element, return the first element in the left larger than it.
Complexity: O(n)
Hint: Stack

Stack:
1: [0, 3, 9]
2: [9, 7]


Input:
[9, 3, 7, 5, 6, 1, 2, 8]
Ouput:
[0, 9, 9, 7, 7, 6, 6, 9]

3 -> 9
7 -> 9
5 -> 7
6 -> 7
1 -> 6
2 -> 6
8 -> 9
**/

#include <bits/stdc++.h>

using namespace std;

vector< int > getLeftElements(vector< int > &a) {
	stack< int > st;
	vector< int > ans;
	for (int element : a) {
		while (!st.empty() && st.top() <= element) {
			st.pop();
		}

		if (!st.empty()) {
			ans.push_back(st.top());
		} else {
			ans.push_back(0);
		}

		st.push(element);
	}

	return ans;
}


int main() {
	
}