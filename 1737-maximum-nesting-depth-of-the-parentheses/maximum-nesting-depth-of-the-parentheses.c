int maxDepth(char* s) {
    int count = 0; 
    int max = 0; 
    int i = 0 ; 
    while(s[i] != '\0'){
        if(s[i] == '('){
            count++;
        }
        if(max < count ){
            max = count;
        }
        if(s[i] == ')'){
            count--;
        }
        i++;
    }  
    return max; 
}