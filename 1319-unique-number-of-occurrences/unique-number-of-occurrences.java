class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        int len= arr.length;
        int freq[] = new int[len];
        for(int i = 0 ; i < arr.length ; i++){
            if(freq[i] == -1 )
                continue;
            freq[i] = 1 ;
            for(int j = i + 1 ; j < arr.length ; j++ ){
                if(arr[i] == arr[j]){
                    freq[i]++;
                    freq[j] = -1;
                }
            }  
        }
        for(int i= 0 ; i < len ; i++ ){
            if(freq[i] == -1 )
                continue ; 
            for(int j = i + 1 ; j < arr.length ; j++ ){
                if(freq[j] != -1 && freq[i] == freq[j]){
                    return false;
                }
            }
        }
        return true;
    }   
}