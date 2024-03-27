class Solution{
  public:
    int longestKSubstr(string s, int k) {
        unordered_map<char, int> m;
        int unq = 0, l = 0, r = 0, ans = 0, n = s.length();
    
        while (r < n) {
            
            while (r < n) {
                if (m[s[r]] == 0) unq++;
                m[s[r]]++;
                
                if (unq > k) break;
                r++;
            }
    
            
            if (unq >= k) ans = max(ans, r - l);
    
            if (r == n) break;
    
            while (l < n) {
                if (m[s[l]] == 1) unq--;
                m[s[l]]--;
    
                if (unq == k) break;
                l++;
            }
            l++;
            r++;
        }
        if (ans == 0) return -1;
            return ans;
    }
};