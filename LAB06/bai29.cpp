#include <stdio.h>

int main()
{
    int n;
    long giai_thua = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    for ( int i = n; i > 1; i-- ) {
        giai_thua *= i;
    }
    printf("Giai thua cua %d: %ld", n, giai_thua);
    return 0;
}