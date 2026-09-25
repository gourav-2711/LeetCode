int longestSubsequence(int* nums, int numsSize) {
    // int i = 0;
    int sum = 0 ;  
    // int count = 0; 
    for(int i = 0 ; i < numsSize ; i++){
        sum ^= nums[i];
    }
    if(sum != 0 ){
        return numsSize;
    }
    for(int i = 0 ; i < numsSize ; i++){
        if(nums[i] != 0 ){
            return numsSize - 1;
        }
    }
    // while( i  < numsSize){
    //     if((sum ^ nums[i])  != 0 || nums[i] == 0 ){
    //         sum ^= nums[i];
    //         count++;
    //     }
    //     i++;
    // }
    // return count;
    return 0 ; 
}