class MyNode{
public:
    MyNode*next;
    MyNode*prev;
    int val;
    MyNode(int k){
        next = NULL;
        prev = NULL;
        val = k;
    }
};

class MyCircularDeque {
public:
    int currSize = 0;
    int maxSize;
    MyNode *root;
    MyNode *start;
    MyNode *end;
    MyCircularDeque(int k) {
        maxSize = k;
        root = NULL;
        start = root;
        end = start;
    }
    
    bool insertFront(int value) {
        if(currSize >= maxSize) return false;
        if(root == NULL){
            root = new MyNode(value);
            start = root; 
            end = root;
        }
        else{
            MyNode *node = new MyNode(value);
            node->next = start;
            start->prev = node;
            start = node;
        }
        currSize++;
        return true;
    }
    
    bool insertLast(int value) {
        if(currSize >= maxSize) return false;
        if(root == NULL){
            root = new MyNode(value);
            start = root; 
            end = root;
        }
        else{
            MyNode *node = new MyNode(value);
            end->next = node;
            node->prev = end;
            end = node;
        }
        currSize++;
        return true;
    }
    
    bool deleteFront() {
        if(currSize <= 0) return false;
        currSize--;
        if(currSize == 0){
            root = NULL;
            start = NULL;
            end = NULL;
        }
        else{
            start = start->next;
        }
        return true;
    }
    
    bool deleteLast() {
        if(currSize <= 0) return false;
        currSize--;
        if(currSize == 0){
            root = NULL;
            start = NULL;
            end = NULL;
        }
        else{
            end = end->prev;
        }
        return true;
    }
    
    int getFront() {
        return (start != NULL ? start->val : -1);
    }
    
    int getRear() {
        return (end != NULL ? end->val : -1);
    }
    
    bool isEmpty() {
        return (currSize == 0);
    }
    
    bool isFull() {
        return (currSize == maxSize);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */