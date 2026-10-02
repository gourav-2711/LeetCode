/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int compare(const void *a , const void  *b ){
    return(*(int *)a - *(int *) b); 
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    qsort(nums , numsSize , sizeof(int) , compare);
    int **result = malloc(numsSize * numsSize * sizeof(int *));
    int row = 0;
    *returnColumnSizes = malloc(numsSize * numsSize * sizeof(int));
    for(int k = 0; k < numsSize - 2 ; k++){
        if(k > 0 && nums[k] == nums[k - 1]) 
            continue;
        int target = nums[k] * -1;
        int i = k + 1; 
        int j = numsSize - 1; 
        while(i < j ){
            if((nums[i] + nums[j]) == target){
                result[row] = malloc(3 * sizeof(int)); 
                result[row][0] = nums[k];
                result[row][1] = nums[i];
                result[row][2] = nums[j];
                (*returnColumnSizes)[row] = 3;
                row++;
                while(i < j && nums[i] == nums[i + 1])
                    i++;

                while(i < j && nums[j] == nums[j - 1])
                    j--;
                i++;
                j--;
                
            }
            else if((nums[i] + nums[j]) > target){
                j--;
            }
            else if ((nums[i] + nums[j]) < target){
                i++;
            }
        }
    }
    *returnSize = row;
    return result;
}