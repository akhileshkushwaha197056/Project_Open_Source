// C++ program of the above approach

#include <bits/stdc++.h>
using namespace std;

/* Function to check if x is power of 2*/
bool isPowerOfTwo(int n)
{
	/* First x in the below expression is for the case when
	* x is 0 */
	int cnt = 0;
	while (n > 0) {
		if ((n & 1) == 1) {
			cnt++;
		}
		n = n >> 1; // keep dividing n by 2 using right
					// shift operator
	}

	if (cnt == 1) { // if cnt = 1 only then it is power of 2
		return true;
	}
	return false;
}

// Driver code
int main()
{
	// Function call
	isPowerOfTwo(31) ? cout << "Yes\n" : cout << "No\n";
	isPowerOfTwo(64) ? cout << "Yes\n" : cout << "No\n";
	return 0;
}

// This code is contributed by devendra salunke
