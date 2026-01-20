Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.

 

Example 1:

Input: s = "(1+(2*3)+((8)/4))+1"

Output: 3

Explanation:

Digit 8 is inside of 3 nested parentheses in the string.




class Solution {
public:
    int maxDepth(string s) {
        int count =0;
        int res=0;
        for (char a :s){
            if(a == '('){
                count++;
                res=max(res,count);
            }else{
                if (a== ')'){
                    count--;
                }
            }
        }
    return res;}
};