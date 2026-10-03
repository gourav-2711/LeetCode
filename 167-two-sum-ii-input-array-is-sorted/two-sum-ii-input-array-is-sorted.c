/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *result = malloc(2 *sizeof(int));
    int i = 0 ;
    int j = numbersSize -1 ;
    *returnSize = 0;
    while( i < j ){
        if(numbers[i] + numbers[j] == target ){
            result[0] = i + 1 ;
            result[1] = j + 1 ;
            *returnSize = 2 ; 
            break;
        }
        else if(numbers[i] + numbers[j] > target)
            j--;
        else
            i++;
    }   
    return result;
}