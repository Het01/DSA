

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void InsertSorted(stack<int> &s,int temp){
    if(s.empty() || s.top()<temp){
        s.push(temp);
        return;
    }
    int x = s.top();
    s.pop();
    InsertSorted(s,temp);
    s.push(x);
    
}
void SortedStack :: sort()
{
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    sort();
    InsertSorted(s,temp);
}
