class Solution
{
public:
    // arr: input array
    // num: size of array
    // Function to find maximum circular subarray sum.
    int normalmax(int arr[], int num)
    {
        int maxending = arr[0];
        int res = arr[0];
        for (int i = 1; i < num; i++)
        {
            maxending = max(maxending + arr[i], arr[i]);
            res = max(res, maxending);
        }
        return res;
    }

    int circularSubarraySum(int arr[], int num)
    {
        int normal = normalmax(arr, num);
        if (normal < 0)
            return normal;
        int sum = 0;
        for (int i = 0; i < num; i++)
        {
            sum = sum + arr[i];
            arr[i] = -arr[i];
        }
        int circular = sum + normalmax(arr, num);
        return max(circular, normal);
    }
};