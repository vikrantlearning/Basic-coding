//reverse_level_order traversal
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    queue<Node*>q;
    vector<int> ans;
    stack<int>st;
    Node *temp=root;
    q.push(temp);
    while(!q.empty())
    {
       Node *cur=q.front();
       q.pop();
       st.push(cur->data);
       if(cur->right)
       {
           q.push(cur->right);
       }
       if(cur->left)
       {
           q.push(cur->left);
       }
      
    }
    while(!st.empty())
    {
        int a=st.top();
        ans.push_back(a);
        //dq.pop_front();
        st.pop();
    }
    return ans;
}