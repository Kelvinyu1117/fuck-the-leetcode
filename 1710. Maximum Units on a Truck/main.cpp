class Solution
{
public:
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        int res = 0;

        sort(boxTypes.begin(), boxTypes.end(), [](vector<int> a, vector<int> b) {
            return a[1] > b[1];
        });

        for (int i = 0; i < boxTypes.size() && truckSize; i++)
        {
            if (boxTypes[i][0] > truckSize)
            {
                res += truckSize * boxTypes[i][1];
                truckSize = 0;
            }
            else
            {
                res += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
        }

        return res;
    }
};