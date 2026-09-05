class Solution {
public:
    string frequencySort(string s) {
        int freq[256]={0};
        string ans;
        for(char c:s){
            freq[c]++;
        }

        for(int count=s.length();count>=1;count--){
            for(int i=0;i<256;i++){
                if(freq[i]==count){
                for(int j=0;j<count;j++){
                    ans.push_back((char)i);
                }
                }
            }
        }
        return ans;
    }
};