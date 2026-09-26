/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int** nums, int numsSize, int* numsColSize, int* returnSize) {
    int size = 0 ;
    int *arr = calloc(1001 ,sizeof(int));
    int *result = malloc(1001 * sizeof(int));
    for(int i = 0 ; i < numsSize ; i++){ 
        for(int j = 0 ; j < numsColSize[i] ; j++){
            arr[nums[i][j]]++;
        }
    }
    int index = 0;
    for(int i = 0 ; i < 1001 ; i++){
        if(arr[i] == numsSize ){
            result[index++] = i;
        }
    }
    *returnSize = index;
    return result;
}