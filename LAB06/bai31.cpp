#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    while(b!=0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    printf("UCLN la :%d",a);
}
