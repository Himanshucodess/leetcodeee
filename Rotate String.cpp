#Input: s = "abcde", goal = "cdeab" Output: true

bas string ko add kro aur goalko check krlo 
(s+s) -> goal

class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=goal.size();
string a= s+s;
if (s.size() != goal.size()) return false;

    if(a.find(goal)!= string::npos){
        return true;
    }

return false;
 }

};
