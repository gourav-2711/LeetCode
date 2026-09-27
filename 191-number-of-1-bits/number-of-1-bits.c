int hammingWeight(int n) {
    int binary[100];
    int i = 0; 
    while(n != 0){
        if(n % 2 == 0){
            binary[i] = 0;
            i++;
        }
        else{
            binary[i] = 1;
            i++;
        }
        n = n / 2;
    }
    int count = 0; 
    for(int j = 0 ; j < i ; j++){
        if(binary[j] == 1){
            count++;
        }
    }
    return count; 
}