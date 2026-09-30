class Solution {
public:
    bool isFreqSame(int ferq1[], int freq2[]){
        for(int i=0; i<26; i++){
            if(ferq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0; i<s1.length(); i++){
            freq[s1[i]-'a']++;
        }

        int windowsize=s1.length();
        
        for(int i=0; i<s2.length(); i++){
            int windowfreq[26]={0};
            int windowIndx=0, indx=i;

            while(windowIndx<windowsize && indx<s2.length()){
                windowfreq[s2[indx]-'a']++;
                windowIndx++; indx++;
            }

            if(isFreqSame(freq, windowfreq)){
                return true;
            }
        }
        return false;
    }
};