/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int size = (nums1Size > nums2Size) ? nums1Size : nums2Size ; 
    int *arr = malloc(size * sizeof(int));
    int index = 0 ; 
    for(int i = 0 ; i < nums1Size ; i++){
        bool found = false; 
            for(int j = 0 ; j < nums2Size ; j++){
                if(nums1[i] == nums2[j]){
                    found = true;
                    nums2[j] = -1;
                    break; 
                }
            }
            if(found){
                arr[index++] = nums1[i];
            }
    }
    *returnSize = index;
    return arr;
}