class Solution {
  public:
    vector<int> topK(vector<int> &nums, int k)
        {
           	// Code here
            vector<int> ans;
            priority_queue<pair<int, int>> pq;
            map<int, int> m;

            for (auto i: nums)
            {
                m[i]++;
            }

            for (auto i: m)
            {
                pq.push({ i.second,
                    i.first });
            }

            while (k--)
            {

                ans.push_back(pq.top().second);
                pq.pop();
            }

            return ans;
        }
};
