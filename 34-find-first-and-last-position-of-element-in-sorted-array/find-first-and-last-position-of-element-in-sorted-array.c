/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int Searchfirst(int* nums, int numsSize, int target){
    int low = 0 ; 
    int high = numsSize -1 ;
    int ans = -1 ;
    while(low <= high ){
        int mid = low + (high - low ) / 2 ;
        if(nums[mid] == target){
            ans = mid;
            high = mid - 1 ; 
        }
        else if (nums[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans; 
}
int SearchLast(int* nums, int numsSize, int target){
    int low = 0 ;
    int high = numsSize - 1 ;
    int ans = -1 ;
    while(low <= high ){
        int mid = low + (high - low ) / 2 ; 
        if(nums[mid] == target){
            ans = mid ;
            low = mid + 1; 
        }
        else if (nums[mid] < target ){
            low  = mid + 1 ; 
        }
        else {
            high = mid - 1;
        }
    }
    return ans; 
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *result = (int *)malloc(2 * sizeof(int));
    result[0] =  Searchfirst(nums,numsSize,target);
    result[1] =  SearchLast(nums,numsSize,target);
    *returnSize = 2 ; 
    return result;
}