/*Problem number 2 on projecteuler
Find and print the sum of all evern Fibonacci numbers not exceeding four million*/
#include <stdio.h>

int main() {
    int limit = 4000000; //Set limit
    
    int a = 1; //Initial Term 1
    int b = 2; //Initial Term 2
    
    long sum = 2;
    
    while (1) {
        int next_term = a + b;
        
        if (next_term > limit) { //Limit Declaration
            break;
        }
        
        if (next_term % 2 == 0) { //Check if the term is even
            sum += next_term; //Add the even term to the sum
        }
        
        a = b;
        b = next_term;
    }
    
    printf("Sum of Fibonacci series is: %ld\n", sum);
    
    return 0;
}