class Solution
{
    public:
    
        void frequencyCount(vector<int> &arr, int N, int P)

    {
        unordered_map<int, int> m;

        for (int i = 0; i < N; i++){
            m[arr[i]]++;
        }

        for (int i = 0; i < N; i++){
            arr[i] = m[i + 1];
        }
    }
};
