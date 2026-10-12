int compare(const void *a , const void *b){
    return (*(int *)a  - *(int *)b);
}
int threeSumClosest(int* nums, int numsSize, int target) {
    qsort(nums , numsSize , sizeof(int) , compare);
    int closest_Sum = nums[0] + nums[1] + nums[2];
    for(int i = 0 ; i < numsSize - 2 ; i++){
        int k = numsSize - 1; 
        int j = i + 1 ; 
        while(j < k ){
            int sum = nums[i] + nums[j] + nums[k];
            if(abs(target - closest_Sum) > abs(target - sum )){
                closest_Sum = sum ;
            }
            else if (sum > target ){
                k--;
            }
            else {
                j++;
            }
            
        }
    }   
    return closest_Sum;
}