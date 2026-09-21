int sumOfUnique(int* nums, int numsSize) {
    int sum = 0 ; 
   for(int i = 0 ; i < numsSize ; i++){
        if(nums[i] == -1 ){
            continue;
        }
        int value = nums[i];
        for(int j = i + 1  ; j< numsSize ; j++){
            if(nums[j] == -1 ){
                continue ; 
            }
            if(value == nums[j]){
                nums[i] = -1; 
                nums[j] = -1;
            }  
        }
        if(nums[i] != -1){
            sum += nums[i];
        }
   }
   return sum;  
}