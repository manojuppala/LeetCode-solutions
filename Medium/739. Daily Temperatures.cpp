typedef pair<int, int> PAIR;
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &T)
    {
        vector<int> ans;
        stack<PAIR> stk;
        for (int i = T.size() - 1; i >= 0; i--)
        {
            if (stk.empty())
            {
                stk.push(PAIR(i, T[i]));
                ans.push_back(0);
            }
            else
            {
                if (stk.top().second > T[i])
                {
                    ans.push_back(stk.top().first - i);
                    stk.push(PAIR(i, T[i]));
                }
                else if (stk.top().second < T[i])
                {
                    stk.pop();
                }
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};