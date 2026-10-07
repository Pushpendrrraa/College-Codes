#include <stdio.h>

int main() {
    int i = 0 , j = 1;
    printf("%d", i++ && ++j);
    printf("%d %d", i,j);
}