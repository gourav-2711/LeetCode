int maxPower(char* s) { 
    int i = 1;
    int max = 0 ; 
    int count = 1 ;

    if(s[i] == '\0'){
        return 1;
    }
    if(s[0] == '\0'){
        return 0 ; 
    }
    while( s[i] != '\0'){
        if(s[i] == s[i - 1]){
            count++;
        }
        if(max < count ){
            max = count ;
        }
        if(s[i] != s[i - 1]){
            count = 1; 
        }
        i++;
    }
    return max;
}