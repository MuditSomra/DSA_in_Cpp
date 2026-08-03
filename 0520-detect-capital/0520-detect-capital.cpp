class Solution {
public:
    bool detectCapitalUse(string word) {
        bool isallSmall = true;
        bool isAllCap = true;
        bool isFirstCap = false;
        if(isupper(word[0])){
            isFirstCap = true;
        }
        for(int i = 0; i < word.size(); i++){
            if(isupper(word[i])){
                isallSmall = false;
                if(i!=0){
                    isFirstCap = false;
                }
            }
            else{
                isAllCap = false;
            }
        }
        return(isFirstCap || isAllCap || isallSmall);
    }
};