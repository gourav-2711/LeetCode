int compare (const void *a , const void *b){
    return (*(int *)a - *(int *)b);
}


int threeSumClosest(int* nums, int numsSize, int target) {
    int closest_sum = nums[0] + nums[1] + nums[2];
    qsort(nums , numsSize , sizeof(int) , compare);
    for(int k = 0 ; k < numsSize - 2 ; k++){
        int i = k + 1; 
        int j = numsSize -1; 
        while(i < j){
            int sum = nums[i] + nums[j] + nums[k];
            if(abs(target - closest_sum ) > abs(target - sum)){
                closest_sum = sum; 
            }
            if(sum > target ){
                j--;
            }
            else {
                i++;
            }
        }
    }
    return closest_sum;
}