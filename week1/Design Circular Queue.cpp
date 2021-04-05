class MyCircularQueue {
private:
    vector<int> data;
    int q_size;
    int head=-1, tail=-1;        
    
public:
    MyCircularQueue(int k) {
        data.resize(k);
        q_size = k;
        
    }
    
    bool enQueue(int value) {
        
        if (isFull()) return false;
        else if (isEmpty()) {
            head=0, tail=0;
        }
        else {
            tail=(tail+1) % q_size;
        }
        data[tail]=value;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        else if (head==tail){
            data[head]=-1;
            head=-1, tail=-1;
        }
        else {
            data[head]=-1;
            head=(head+1) % q_size;
        }
        return true;
        
    }
    
    int Front() {
       return isEmpty()? -1 : data[head];
        
    }
    
    int Rear() {
        return isEmpty()? -1 : data[tail];
    }
    
    bool isEmpty() {
        return (head==-1 && tail==-1)? true : false;
    }
    
    bool isFull() {
        return ((tail+1)% q_size == head)? true: false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */