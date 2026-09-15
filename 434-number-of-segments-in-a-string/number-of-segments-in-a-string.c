int countSegments(char* s) {
    int count = 0;
    int i = 0;
    while(s[i] != '\0') {
        if(s[i] != ' ' && (i == 0 || s[i-1] == ' ')) {
            count++;
        }
        i++;
    }
       return count;
}