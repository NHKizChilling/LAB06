#include <stdio.h>

int main() {
    float S_hinh_vuong = 1;
    
    for ( short i = 1; i <= 9; i++ ) {
        S_hinh_vuong /= 2;
    }
    printf("%f", S_hinh_vuong);
    return 0; 
}