#include <stdio.h>

int main() 
{
    int n; 
    int a,b;
    do
    {
        printf("Nhap n (0<n<10): ");
        scanf("%d", &n); 
    } while ( n < 0 || n > 10);
    for ( int i = 10; i < 100; i++) {
        a = i / 10;
        b = i % 10;
        if ( a + b == n ) {
            printf("%d\n", i);
        }
    }
    return 0;
}