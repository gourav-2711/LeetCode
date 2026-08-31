int maxProduct(int n) {
    int digit1 = 0 , digit2 = 0 ;
    while(n != 0 ){
        int digit = n % 10 ;
        if(digit > digit1){
            digit2 = digit1;
            digit1 = digit;
        }
        else if(digit > digit2){
            digit2 = digit; 
        }
        n = n/ 10 ;
    }
    return digit1*digit2;
}