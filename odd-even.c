/*
 * Write a program to print numbers from 1 to 10 in such a way that when number is odd, add 1 and when number is even, subtract 1.
 *
 * Output: 2 1 4 3 6 5 8 7 10 9
 *
 * */

#include <stdio.h>

int even (int n) {
	int r = n - 1;
	printf("%d ", r);
}

int odd (int n) {
	int r = n + 1;
	printf("%d ", r);
}

int main () {
	for (int i = 1; i <= 10; i++) {
		if (i % 2 == 0) even(i);
		else odd(i);
	}
}

