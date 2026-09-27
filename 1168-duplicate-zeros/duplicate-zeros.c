void duplicateZeros(int* arr, int arrSize) {
    int result[arrSize];
    int j = 0; 
    for(int i = 0 ; i < arrSize ; i++){
        if(arr[i] == 0){
            if(j < arrSize)
                result[j] = 0;
            j++;
            if(j < arrSize)
                result[j] = 0;
            j++;
        }
        else{
            if(j < arrSize)
                result[j] = arr[i];
            j++;
        }
    }
    for(int i = 0 ; i < arrSize ; i++){
        arr[i] = result[i];
    }
    return ;
}   