class Queue {

private:
    vector<int> first, second;
    int index, flag;

public:
    // Push element x to the back of queue.
    void push(int x) {
        if(this->flag == 1)
            first.push_back(x);
        else {
            while(!second.empty()) {
                first.push_back(second[second.size()-1]);
                second.pop_back();
            }
            first.push_back(x);
            flag = 1;
        }
    }

    // Removes the element from in front of queue.
    void pop(void) {
        if(flag == 2)
            second.pop_back();
        else {
            while(!(first.empty())) {
                second.push_back(first[first.size()-1]);
                first.pop_back();
            }
            second.pop_back();
            flag = 2;
        }
    }

    // Get the front element.
    int peek(void) {
        if(flag == 1){
            while(!(first.empty())) {
                second.push_back(first[first.size()-1]);
                first.pop_back();
            }
            flag = 2;
        }
        return second[second.size()-1];
    }

    // Return whether the queue is empty.
    bool empty(void) {
        if(flag == 1)
            return first.empty();
        else
            return second.empty();
    }
    Queue() {
        this->flag = 1;
        this->index = 0;
    }
};
