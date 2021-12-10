#include "point.h"
#include <stdio.h>

void point_move() {
    char *p1;
    int *p2;
    char a = 'T';
    int b = 100;
    p1 = &a;
    p2 = &b;

    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    p1++;
    p2++;
    printf("p1++ = %p\n", p1);
    printf("p2++ = %p\n", p2);
}

void bubble_normal_sort(int arr[], int len) {
    
}