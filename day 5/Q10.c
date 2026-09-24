/*
NAME: HARSHDEEP NAGAR
SAP ID: 590031640
BATCH: CS-59
Q)Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1
Input 2:
7322
Output 2:
2:2:2
*/
#include <stdio.h>
int main()
{
    int s, h, m; //seconds, hours, minutes
    printf("Enter time in seconds: ");
    scanf("%d", &s);
    h = s / 3600;
    m = (s % 3600) / 60;
    s = s % 60;
    printf("Time in hours:minutes:seconds format is: %d:%d:%d\n", h, m, s);
    
    return 0;
}
