int maximumGap(int* nums, int numsSize) {
    int compare(const void *a, const void *b) {
        return (*(int *)a - *(int *)b);
    }
    qsort(nums, numsSize, sizeof(int), compare);
    int maxdiff = 0;

    for(int i = 1; i < numsSize; i++) {
        int diff = nums[i] - nums[i - 1];

        if(diff > maxdiff) {
            maxdiff = diff;
        }
    }

    return maxdiff;
}