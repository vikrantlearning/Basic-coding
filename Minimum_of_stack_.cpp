//Minimum of a stack
class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> st;
    vector<int> it;
    
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        if(it.empty() || val<=it.back())
            it.push_back(val);
    }
    
    void pop() 
    {
        if(it.back()==st.back())
            it.pop_back();
        st.pop_back();
    }
    
    int top() {
        //it=st.begin()+st.size()-1;
        //return *it;
        return st.back();
    }
    
    int getMin() 
    {
        int id=it.back();
        return id;
    }
};