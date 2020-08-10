#include<stdio.h>

int main() {
    int i, j;
    j = 500;
    for(i = 0; i<=j; i = i + 50) {
        printf("%7d %7d \n", i/50, i);
    }
}
