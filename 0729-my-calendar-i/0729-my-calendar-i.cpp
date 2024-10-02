class MyCalendar {
public:
    map<int,int>mp;
    MyCalendar() {
    }

    bool book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int count;
        for(auto it:mp){
            count +=it.second;
            if(count >= 2){
                mp[start]--;
                mp[end]++;
                return false;
            } 
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */