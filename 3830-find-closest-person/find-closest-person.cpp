class Solution {
public:
    int findClosest(int x, int y, int z) {
        int t = z - x;
        int w = z - y;
        int d = abs(t);
        int e = abs(w);
        if (d < e) {
            return 1;
        } else if (e < d) {
            return 2;
        }

    return 0;
    }

};