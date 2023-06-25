//User function Template for C++

class Solution{
public:
    void InsertAtBottom(stack<int> &St,int temp){
        if(St.empty()){
            St.push(temp);
            return;
        }
        int x = St.top();
        St.pop();
        InsertAtBottom(St,temp);
        St.push(x);
    }
    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        int temp=St.top();
        St.pop();
        Reverse(St);
        InsertAtBottom(St,temp);
    }
};
