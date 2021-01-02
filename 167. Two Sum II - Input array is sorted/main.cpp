class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0;
        int j = numbers.size() - 1;

        while (i < j)
        {
            int diff = target - numbers[j];

            if (diff == numbers[i])
                return {i + 1, j + 1};
            else if (diff < numbers[i])
                j--;
            else
            {
                i++;
            }
        }

        return {1, 1};
    }
};