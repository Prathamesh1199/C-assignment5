#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: 5 ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) {
        sum += 2*i-1;  // adding each odd number
    }
    
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    printf("%d^2 = %d\n", n, n*n);
    
    if(sum == n*n) {
        printf("The sum of the first %d odd numbers is equal to %d^2.\n", n, n);
    } else {
        printf("The sum of the first %d odd numbers is not equal to %d^2.\n", n, n);
    }
    return 0;
}

