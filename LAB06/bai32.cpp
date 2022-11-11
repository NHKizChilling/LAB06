#include <stdio.h>
#include <math.h>

int cauA(int n);
int cauB(int n);
int cauC(int n);
int cauD(int n);


int main() 
{
    int n; 
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong binh phuong tu 1 den %d la: %d", n, cauA(n));
    printf("\nTong cac so chan tu 1 den %d la: %d", n, cauB(n));
    printf("\nTong cac so chan tu 1 den %d chia het cho 3 la: %d", n, cauC(n));
    printf("\nTong binh phuong cac so le tu 1 den %d la: %ld", n, cauD(n));
}

int cauA(int n) 
{
    int sum = 0;
    for ( int i = 1; i <= n ; i++ ) {
        sum += i;
    }
    return sum;
}

int cauB(int n) 
{
    int sum = 0;
    for ( int i = 1; i <= n; i++ ) {
        if ( i % 2 == 0 ) {
            sum += i;
        }
    }
    return sum;
}

int cauC(int n)
{
    int sum = 0;
    for ( int i = 1; i <= n; i++ ) {
        if ( i % 3 == 0 ) {
            sum += i;
        }
    }
    return sum;
}

int cauD(int n) 
{
    long sum = 0;
    for ( int i = 1; i <= n; i++ ) {
       if ( i % 2 != 0 ) 
            sum += pow(i,2);
    }
    return sum;
}