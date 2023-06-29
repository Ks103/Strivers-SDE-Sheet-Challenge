class Solution {
public:
void solve(vector<vector<int>>&ans,vector<int>&output,int index,vector<int>& nums)
    {
        
        if(index>=nums.size())
        {
            ans.push_back(output);
            return;
        }

    
         solve(ans,output,index+1,nums);

      
        output.push_back(nums[index]);
        solve(ans,output,index+1,nums);
        output.pop_back();
    } 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>output;
        int index=0;
        solve(ans,output,index,nums);
        set<vector<int>>st;
        for(int i=0;i<ans.size();i++)
        {
            st.insert(ans[i]);
        }
        vector<vector<int>>ans2;
        for(auto s:st)
        {
            ans2.push_back(s);
        }
        return ans2; 
    }
};
