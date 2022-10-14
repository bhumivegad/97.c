//wap to cereat pointer to function 97 

#include<stdio.h>
long int mul(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, muln));
    getchar();
}

long int mul(int n) {
    if (n>=1)
        return n*mul(n-1);
    else
        getchar;
}