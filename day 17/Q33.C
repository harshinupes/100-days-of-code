#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0, digits = 0, temp;

    scanf("%d", &n);

    if (n < 0) {
        printf("Not Armstrong");
        return 0;
    }

    original = n;
    temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
