class Solution {
public:
    int maxArea(vector<int>& h) {
        
        int i=0;
        int j = h.size()-1;
        long long int area=-1,x;

        while(i<j){
            x = (j-i) * min(h[i],h[j]);
            if(x>area){
                area = x;
            }
            if(h[i]<h[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return area;
    }
};
