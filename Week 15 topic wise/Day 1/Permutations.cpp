class Solution {
private:
    void func(vector<int>& nums, vector<int>& a, vector<vector<int>>& ans,
        int frq[]) {
        if (nums.size() == a.size()) {
            ans.push_back(a);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (frq[i] == 0) {
                a.push_back(nums[i]);
                frq[i] = 1;
                func(nums, a, ans, frq);
                frq[i] = 0;
                a.pop_back();
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        int frq[nums.size()];
        for (int i = 0; i < nums.size(); i++) {
            frq[i] = 0;
        }
        func(nums, a, ans, frq);
        return ans;
    }
};