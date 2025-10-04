/*Problem number 1 on Project Euler
Find and print all the numbers that are multiple of 3 and 5 below 1000
Example below 10 are 3,5,6,9*/

#include <stdio.h>

int main() {
    for (int i = 1; i < 1000; i++) { // Initializing FOR LOOP condition to stop the operation below 1000 or at 999
        if (i % 3 == 0) { // If the remainder is zero after dividing by 3 then print
            printf("%d is a multiple of 3\n", i);
        }
        if (i % 5 == 0)// If the remainder is zero after dividing by 5 then print
        {
            printf("%d is a multiple of 5\n", i);
        }
        
    }

    return 0;

}
