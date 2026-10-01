bool checkGoodInteger(int n) {
    int num = n; 
    int digitSum = 0;
    int squareSum = 0; 
    while(num != 0 ){
        int digit = num % 10;
        digitSum += digit;
        squareSum += digit * digit; 
        num = num / 10 ; 
    }
    if((squareSum - digitSum) >= 50  ){
        return true;
    }
    return false;

}