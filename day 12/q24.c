/*
NAME-HARSHDEEP NAGAR
SAPID-590031640
BATCH-BTECH CS -59
PROBLEM STATEMENT-Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700
*/

 #include <stdio.h>

int main() {
    int units;
    int bill = 0;
      printf("enter the no. of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        // all units are in the first slab
        bill = units * 5;
    } else if (units <= 200) {
        // first 100 units at 5, the rest at 7
        bill = 100 * 5 + (units - 100) * 7;
    } else if (units <= 300) {
        // first 100 at 5, next 100 at 7, the rest at 10
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    } else {
        // first 100 at 5, next 100 at 7, next 100 at 10, the rest at 12
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    printf("Bill in rupees is:%d\n", bill);

    return 0;
}   
