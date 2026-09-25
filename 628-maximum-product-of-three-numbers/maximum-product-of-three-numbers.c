#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int maximumProduct(int* nums, int numsSize) {

    qsort(nums, numsSize, sizeof(int), compare);

    int left = 0;
    int mid = 1;
    int right = numsSize - 1;

    int product1 = nums[numsSize - 1] *
                   nums[numsSize - 2] *
                   nums[numsSize - 3];

    int product2 = nums[left] *
                   nums[mid] *
                   nums[right];

    return product1 > product2 ? product1 : product2;
}