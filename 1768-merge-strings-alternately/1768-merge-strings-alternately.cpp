class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string Res;
        int i=0,j=0,I=word1.size(),J=word2.size();
        while(i<I && j<J)
        {
            Res+=word1[i];
            Res+=word2[j];
            i++;
            j++;
        }       
        while(i<I)
        {
            Res+=word1[i];
            i++;
        } 
        while(j<J)
        {
            Res+=word2[j];
            j++;
        }
        return Res;
    }
};