class SmallestInfiniteSet {
public:
    set<int>st;
    int curr;
    SmallestInfiniteSet() {
        curr = 1;
    }
    
    int popSmallest() {
        if(st.empty() || curr < *st.begin()){
            int temp = curr;
            curr++;
            return temp;
        }
        else{
            auto it = st.begin();
            int temp = *it;
            st.erase(it);
            
            return temp;
        }
    }
    
    void addBack(int num) {
        if(num < curr)st.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */