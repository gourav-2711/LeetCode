int longestSubsequence(int* nums, int numsSize) {
    int sum = 0 ; 
    int allzero = 1;
    for(int i = 0 ; i < numsSize ; i++){
        sum ^= nums[i];
        if(nums[i] != 0 ){
            allzero = 0; 
        } 
    }
    if(allzero)
        return 0 ; 
    if(sum != 0 ){
        return numsSize;
    }
    return numsSize - 1;
}