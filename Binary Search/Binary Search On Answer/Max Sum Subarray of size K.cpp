 int isValid(vector<int> &nums, int maxSum, int k)
        {
            int subarraySum = 0;
            int subarrayCount = 1;

            for (int num: nums)
            {
                subarraySum += num;

                if (subarraySum > maxSum)
                {
                    subarrayCount++;
                    subarraySum = num;

                    if (subarrayCount > k)
                    {
                        return -1;	// Indicates an invalid solution
                    }
                }
            }

            return subarrayCount;
        }

    int splitArray(vector<int> &nums, int k)
    {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            int subarrayCount = isValid(nums, mid, k);
            if (subarrayCount != -1)
            {
               	// result = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return low;
    }
};
