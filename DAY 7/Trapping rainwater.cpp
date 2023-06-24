class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        vector<int> l;
        vector<int> r;
        int p = 0;
        int q = 0;
        int vol = 0;

        for(int i = 0 ; i < n ; i++){
            p = max(h[i] , p);
            l.push_back(p);
        }
        for(int i = n-1 ; i >= 0 ; i--){
            q = max(h[i] , q);
            r.push_back(q);
        }
        reverse(r.begin() , r.end());
        for(int i = 0 ; i < n ; i++){
            vol += min(l[i] , r[i] ) - h[i];
        }
        return vol;
    }
};
