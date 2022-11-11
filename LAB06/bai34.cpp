#include <stdio.h>

int main() 
{
    float n; 
    float avg;
    int sum = 0;
    printf("Nhap n: ");
    scanf("%f", &n);
    for ( int i = 1; i <= n; i++ ) {
        sum += i;
    }
    avg = float(sum / n);
    printf("Trung binh cong la: %f", avg);
    return 0;
}