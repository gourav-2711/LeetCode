bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int low = 0 ; 
    int colmSize = *(matrixColSize);
    int high = matrixSize * (*matrixColSize) - 1;
    while(low <= high ){
        int mid = (low + high ) / 2 ;
        int row = mid / colmSize; 
        int col = mid % colmSize;
        if(matrix[row][col] == target ){
            return true;
        }
        else if (matrix[row][col] < target ){
            low = mid + 1; 
        }
        else{
            high = mid - 1 ;
        }
    } 
    return false ;
}