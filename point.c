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

    int temp;
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubble_normal_sort_test(){
    int arr[8] = {1, 3, 6, 8, 9, 2, 4, 5};
    bubble_normal_sort(arr, sizeof(arr) / sizeof(*arr));
    for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}