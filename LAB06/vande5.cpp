#include <stdio.h>

void hinh1(int h);
void hinh2(int h);
void hinh3(int h);
void hinh4(int h, int w);
void hinh5(int h, int w);
void hinh6(int h);

int main() {
    int h,w;
    printf("Nhap chieu cao: ");
    scanf("%d", &h);
    printf("Nhap chieu rong: ");
    scanf("%d", &w);
    hinh1(h);
    printf("\n");
    printf("\n");
    hinh2(h);
    printf("\n");
    printf("\n");
    hinh3(h);
    printf("\n");
    printf("\n");
    hinh4(h,w);
    printf("\n");
    printf("\n");
    hinh5(h,w);
    printf("\n");
    printf("\n");
    hinh6(h);
}

void hinh1(int h) 
{
    for ( short i = 1; i <= h; i++ ) {
        for ( short j = 0; j < i; j++ )
            printf("*");
        printf("\n");
    }
}

void hinh2(int h) 
{
    for ( short i = h; i > 0; i-- ) {
        for ( short j = i; j > 0; j-- )
            printf("*");
        printf("\n"); 
    }
}

void hinh3(int h) 
{
    for ( short i = 0; i < h; i++) {
        for ( short j = 0; j < h; j++) {
            if ( j == 0 || i == h - 1 || i == j ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void hinh4(int h, int w)
{
    for ( short i = 0; i < h; i++) {
        for (short j = 0; j < w; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void hinh5(int h, int w) 
{
    int i, j;
    for(i = 0; i<w; i++){
        for(j = 0; j<h; j++){
            if(i == 0 || i == w-1 || j == 0 || j == h-1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void hinh6(int h) 
{
    for(int i=1;i<=h;i++)
    {
        
        for(int j=1;j<=h-i;j++)
        {
            printf(" ");
        }
        
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }        
        printf("\n");
    }
}