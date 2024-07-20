class Solution {
public:
    string reverseWords(string s) {

        map<int,string> m;
        int i=0,count=0,k=1;
        string a;

        while(i<s.size()){

            if(s[i]==' ' and count>0){
                m.insert({k,a});
                k++;
                count=0;
                a = "";
            }
            else if(s[i]==' ' and count==0){
                i++;
            }
            else{
                a+=s[i];
                i++;
                count++;
            }
        }
        if(a.size()>0) m.insert({k,a});
        else k--;
        s="";

        while(k>1){
            s+=m[k];
            s+=" ";
            k--;
        }
        s+=m[k];
        return s;

    }
};
