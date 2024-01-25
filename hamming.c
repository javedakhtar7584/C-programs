// C implementation of above approach
#include <stdio.h>

// Function to calculate hamming distance
int hammingDistance(int n1, int n2)
{
	int x = n1 ^ n2;
	int setBits = 0;

	while (x > 0) {
		setBits += x & 1;
		x >>= 1;
	}

	return setBits;
}

// Driver code
int main()
{
	int n1 = 8, n2 = 2;
	printf("%d\n", hammingDistance(8, 2));

	return 0;
}

// This code is contributed by Sania Kumari Gupta (kriSania804)

