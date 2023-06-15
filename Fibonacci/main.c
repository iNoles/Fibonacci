//
//  main.c
//  Fibonacci
//
//  Created by Jonathan Steele on 6/14/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // initialize variables
    int t1 = 0, t2 = 1, n;
    
    // initialize the next term (3rd term)
    int nextTerm = t1 + t2;
    
    // get no. of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    // print the first two terms t1 and t2
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    
    // print 3rd to nth terms
    while (nextTerm <= n) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("\n");
    
    return 0;
}
