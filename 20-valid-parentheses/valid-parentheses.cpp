

class Solution {
public:
    char stack[10000];
    int top = -1;
    void push(char ch ){
        stack[++top] = ch; 
    }
    char pop(){
        return stack[top--];
    }
    bool isValid(string s) {
        
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '{' || s[i] == '(' || s[i] == '['){
                push(s[i]);
            }
            else if (s[i] == '}' || s[i] == ']' || s[i] == ')'){
                if (top == -1) {
                    return false;
                }

                char openBracket = pop();

                if ((s[i] == '}' && openBracket != '{') ||
                    (s[i] == ')' && openBracket != '(') ||
                    (s[i] == ']' && openBracket != '[')) {
                    return false;
                }
            }
        }
        
        return top == -1 ; 
    }
};