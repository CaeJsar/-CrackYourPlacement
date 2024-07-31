/*
Difficulty :  Easy - medium
- its easy if you know the base problem is of stack --> finding next greater to left.
- also the construction given in leetcode was difficult to understand

Leetcode : https://leetcode.com/problems/online-stock-span/
*/

class StockSpanner {
public:
    stack<pair<int,int>>s;
    int i=1;
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        int span=1;
        while(!s.empty()){
            pair<int,int> x = s.top();
            if(x.first<=price){
                s.pop();
            }
            else{
                s.push({price,i});
                span = i-x.second;
                i++;
                return span;
            }

        }
        if(s.empty()){
            s.push({price,i});
        }
        span = i;
        i++;
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
