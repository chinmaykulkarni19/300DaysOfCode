int sumExists(int arr[], int N, int sum)
{
    unordered_set<int> us;
    for (int i = 0; i < N; i++)
    {
        if (us.find(sum - arr[i]) != us.end())
            return true;
        else
            us.insert(arr[i]);
    }
    return false;
}