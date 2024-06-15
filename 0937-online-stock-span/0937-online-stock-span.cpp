class StockSpanner {
public:
    stack<pair<int,int>>st;
    vector<int>vec;
    int idx;
    StockSpanner() {
        idx = 0;
    }
    
    int next(int price) {
        while(!st.empty() && vec[st.top().second] <= price){
            st.pop();
        }
        int val = idx+1;
        if(!st.empty()) val -= st.top().second + 1;
        st.push({price, idx});
        vec.push_back(price);
        idx++;

        return val;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
