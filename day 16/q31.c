/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include<stdio.h>
int main(){
    int n,power=1;
printf("enter the value of n :");
scanf("%d",&n);
if(n==0)
 {
        printf("0");
        return 0;
    }
    while (power * 2 <= n) {
        power = power * 2;
    }
    while (power >= 1) {
        if (n >= power) {
            printf("1");
            n = n - power;
        } else {
            printf("0");
        }
        power = power / 2;
    }
    return 0;
}