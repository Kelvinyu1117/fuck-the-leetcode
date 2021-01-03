class Solution
{
public:
    int countPairs(vector<int> &deliciousness)
    {
        int cnt = 0;
        unordered_map<int, int> tb;

        for (int i = 0; i < deliciousness.size(); i++)
        {
            int power = 1;
            for (int j = 0; j < 22; j++)
            {
                if (power - deliciousness[i] >= 0 && tb.count(power - deliciousness[i]))
                {
                    cnt += tb[power - deliciousness[i]];
                }
                cnt %= (1000000000 + 7);
                power = power << 1;
            }
            tb[deliciousness[i]]++;
        }

        return cnt;
    }

    bool po2(int x)
    {
        return (x != 0) && ((x & (x - 1)) == 0);
    }
};