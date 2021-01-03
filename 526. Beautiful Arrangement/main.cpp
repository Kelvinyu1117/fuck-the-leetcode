class Solution
{
public:
    int countArrangement(int n)
    {
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back(i + 1);
        }

        int cnt = 0;

        permute(arr, arr.size(), cnt);

        return cnt;
    }

    void permute(vector<int> arr, int e, int &cnt)
    {
        if (e <= 0)
        {
            cnt++;
            return;
        }

        for (int i = 0; i < e; i++)
        {
            if (e % arr[i] == 0 || arr[i] % e == 0)
            {
                swap(arr[e - 1], arr[i]);
                permute(arr, e - 1, cnt);
                swap(arr[e - 1], arr[i]);
            }
        }
    }

    void swap(int &a, int &b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
};