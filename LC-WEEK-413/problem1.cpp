// 3274. Check if Two Chessboard Squares Have the Same Color

class Solution
{
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2)
    {
        int r1 = coordinate1[0] - 'a' + 1;
        int c1 = coordinate1[1] - '0';
        int r2 = coordinate2[0] - 'a' + 1;
        int c2 = coordinate2[1] - '0';

        int ans = ((r1 + c1) % 2) == ((r2 + c2) % 2);
        return ans;
    }
};