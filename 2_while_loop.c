#include<stdio.h>

int main() {
    float i,j;
    i = 1;
    j = 100000;
    while(i<=j) {
        i = 2.2*i;
        printf("i is %14.7f \n" ,i);  //final value of i will exceed j
    }
}
