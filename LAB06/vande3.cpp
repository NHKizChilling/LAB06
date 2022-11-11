#include <stdio.h>

int main() {
    for ( int code = 0; code < 256; code++ ) 
        printf("%c, %3d, %3o, %3X\n", code, code, code, code);
    return 0;
}
/*
%c la ky tu
%d la so thap phan
%o la so bat phan
%X la so thap luc phan
*/