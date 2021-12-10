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
    for (int i = 0; i < len; ++i) {//0-7
        printf("第%d次循环!\n", i);
        for (int j = 0; j < len - i - 1; ++j) {//0-6
            printf("arr[%d]=%d,arr[%d+1]=%d\n", j, arr[j], j, arr[j + 1]);
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubble_normal_sort_test() {
    int arr[8] = {1, 3, 6, 8, 9, 2, 4, 5};

    printf("初始数组: ");
    for (int k = 0; k < sizeof(arr) / sizeof(*arr); ++k) {
        printf("%d\t", arr[k]);
    }
    printf("\n");

    bubble_normal_sort(arr, sizeof(arr) / sizeof(*arr));
    for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void bubble_normal_sort_p(int *arr, int len){
    
}

void bubble_normal_sort_p_test(){

}