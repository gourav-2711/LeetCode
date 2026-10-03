int compare (const void *a , const void *b){
    return (*(int *)a - *(int *)b);
}
int threeSumClosest(int* nums, int numsSize, int target) {
    qsort(nums , numsSize , sizeof(int) , compare);
    int closest_sum = nums[0] + nums[1] + nums[2];
    for(int i = 0 ; i < numsSize -2 ; i++){
        int sum = 0 ;
        int k = i + 1;
        int j = numsSize -1;
        while( k < j ){
            sum = nums[i] + nums[j] + nums[k];
            if(abs(target - closest_sum) > abs(target - sum ))
                closest_sum = sum;
            if(sum > target )
                j--;
            else
                k++;
        } 
    }
    return closest_sum;
}