class MedianFinder {
public:
    MedianFinder() {
       
    }
    
    void addNum(int num) {
       
        if (!qL.size()) {
            qL.push(num);
        }
       
        else {
            if (num >= qL.top()) {
                qU.push(num);
            }
            else {
                qL.push(num);
            }
            if (qL.size() - 1 < qU.size()) {
                qL.push(qU.top());
                qU.pop();
            }
            if (qL.size() > qU.size() + 1) {
                qU.push(qL.top());
                qL.pop();
            }
        }
    }
    
    double findMedian() {
        if (!qL.size()) {
            return NAN;
        }
        if (qL.size() == qU.size()) {
            return (qL.top() + qU.top())/2.0;
        }
        else {
            return (double) qL.top();
        }
    }
private:
    int n = 0;
    std::priority_queue<int> qL; 
    std::priority_queue<int, std::vector<int>, std::greater<int>> qU; 
};

