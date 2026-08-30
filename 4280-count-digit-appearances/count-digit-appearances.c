int countDigitOccurrences(int* nums, int numsSize, int digit) {
    int count = 0 ; 
    for(int i = 0 ; i < numsSize ; i++){
        while(nums[i] != 0 ){
            int sdigit = nums[i] % 10;
            if(sdigit == digit)
                count++; 
            nums[i] = nums[i] / 10;
        }   
    }
    return count;
}