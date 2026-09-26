/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *arr = (int *)calloc(1001, sizeof(int));
    int size = (nums1Size > nums2Size) ? nums1Size : nums2Size;
    int *result = malloc(size * sizeof(int));


    for(int i = 0 ; i < nums1Size ; i++){
        arr[nums1[i]] = 1;
    }
    int index = 0;
    for(int i = 0 ; i < nums2Size ; i++){
        if(arr[nums2[i]]){
            result[index] = nums2[i];
            arr[nums2[i]] = 0;
            index++;
        }
    }
    *returnSize = index;
    return result;
}