class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        int a = floor(pow(r, 1.0 / k) + 1e-9);
        int b = ceil(pow(l, 1.0 / k) - 1e-9);
        int ans = a - b + 1;
        return max(0, ans);
        ;
    }
};