class Solution {
public:
    string reverseWords(string s) 
    {
        int i=s.size();
        string Res="";
        string T="";
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(Res!="" && T!="")
                {
                    Res+=' ';
                }
                Res+=T;
                T="";
            }
            else
            {
                T.insert(0,1,s[i]);
            }
        }    
        if(Res!="" && T!="")
        {
            Res+=' ';
        }
        Res+=T;
        return Res;
    }
};