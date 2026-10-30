/*2: Write a program to check if a number is a palindrome.
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
    #include <stdio.h>

int main() {
    int n;
    int original;
    int reversed = 0;
    int digit;
      
    printf("enter the value of n :");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (original == reversed) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}