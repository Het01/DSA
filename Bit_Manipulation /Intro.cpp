class Solution {
  public:
    void bitManipulation(int num, int i) {
        int mask=1<<(i-1);
        cout<< bool(num & mask) <<" "<<(num | mask)<<" "<<(~mask & num);
    }
};
