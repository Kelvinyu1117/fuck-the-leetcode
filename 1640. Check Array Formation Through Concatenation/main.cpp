class Solution
{
public:
    bool canFormArray(vector<int> &arr, vector<vector<int>> &pieces)
    {
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < pieces.size(); i++)
            mp[pieces[i][0]] = pieces[i];

        vector<int> tmp;
        for (auto c : arr)
            concat(tmp, mp[c]);

        return cmp(tmp, arr);
    }

    void concat(vector<int> &a, vector<int> &b)
    {
        for (auto c : b)
            a.push_back(c);
    }

    bool cmp(vector<int> &a, vector<int> &b)
    {
        if (a.size() != b.size())
            return false;

        bool isSame = true;

        for (int i = 0; i < b.size(); i++)
            if (a[i] != b[i])
                return false;

        return isSame;
    }
};