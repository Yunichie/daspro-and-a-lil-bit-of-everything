#include <stdio.h>

// Function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to find largest Fibonacci number not exceeding X
int findLargestFibIndex(int x, int index) {
    if (fibonacci(index) > x) {
        return index - 1;
    }
    return findLargestFibIndex(x, index + 1);
}

// Function to print Fibonacci sequence in descending order
void printFibSequence(int index) {
    if (index < 0) return;
    printf("%d ", fibonacci(index));
    printFibSequence(index - 1);
}

// Function to calculate sum of Fibonacci numbers
int calculateSum(int index) {
    if (index < 0) return 0;
    return fibonacci(index) + calculateSum(index - 1);
}

int main() {
    int x;
    scanf("%d", &x);

    // Find the largest Fibonacci number index that doesn't exceed x
    int maxIndex = findLargestFibIndex(x, 0);

    // Print the sequence
    printFibSequence(maxIndex);
    printf("\n");

    // Print the sum
    printf("%d\n", calculateSum(maxIndex));

    return 0;
}