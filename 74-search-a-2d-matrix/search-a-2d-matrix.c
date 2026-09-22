bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int low = 0 ;
    int colmSize = *(matrixColSize);
    int high = (colmSize * matrixSize ) - 1; 
    while(low <= high ){
        int mid = (high + low ) / 2;
        int row = mid / colmSize ;
        int col = mid % colmSize ; 
        if(matrix[row][col] == target )
            return true ;

        else if(target < matrix[row][col] ){
            high = mid - 1; 
        }
        else{
            low = mid + 1;  
        }
    }
    return false; 
}