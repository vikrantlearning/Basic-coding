 //PageFaults in in LRU
 int pageFaults(int N, int C, int pages[]){
        // code here
        
        int pf=0;
        vector<int>v;
        for(int i=0;i<N;i++)
        {
            auto it=find(v.begin(),v.end(),pages[i]);
            if(it!=v.end())
            {
                int elem=*it;
                v.erase(it);
                v.push_back(elem);
            }
            else{
                pf++;
                if(v.size()==C){
                v.erase(v.begin());
                v.push_back(pages[i]);
                }
                else
                {
                    v.push_back(pages[i]);
                }
            }
        }
        return pf;
    
    }