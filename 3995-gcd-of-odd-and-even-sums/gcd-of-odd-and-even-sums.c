int GCD(int odd , int even ){
    while(even != 0 ){
        int temp = even ;
        even = odd % even;
        odd = temp; 
    }
    return odd ; 
}




int gcdOfOddEvenSums(int n) {
    int sumOdd = n * n;
    int sumEven = n * (n + 1);
    return GCD(sumOdd , sumEven);
}