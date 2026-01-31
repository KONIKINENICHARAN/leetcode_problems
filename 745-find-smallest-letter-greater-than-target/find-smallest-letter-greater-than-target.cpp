class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i=0,n=letters.size();
        char k=letters[0];
        while(i<n){
            if(letters[i]>target){
                k=letters[i];
                break;
            }
            i++;
        }
        return k;
    }
};