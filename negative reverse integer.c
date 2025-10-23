#include <stdio.h>
#include <limits.h>

int reverse(int num) {
    long reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;

        // Check for overflow
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0;
        }
    }

    return (int)reversed;
}

int main() {
    int num;
    
    // Reading the input integer
    printf("Enter a 32-bit signed integer: ");
    scanf("%d", &num);
    
    // Getting the reversed integer
    int result = reverse(num);
    
    // Displaying the result
    printf("Reversed integer: %d\n", result);
    
    return 0;
}

