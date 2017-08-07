// Test
class Solution {

public:
    int hammingDistance(int x, int y) 
    {
        int distance = 0;
        int z;
        z =x^y;
        while (0!=z)
        {
            distance += z & 1;
            z = z>>1;
        }
        return distance;
    }
};
