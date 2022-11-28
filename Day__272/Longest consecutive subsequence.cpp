int findLongestConseqSubseq(int arr[], int N)
    {
        unordered_set<int> S;
    int ans = 0;

    // Hash all the array elements
    for (int i = 0; i < N; i++)
        S.insert(arr[i]);

    // check each possible sequence from
    // the start then update optimal length
    for (int i = 0; i < N; i++) {
        // if current element is the starting
        // element of a sequence
        if (S.find(arr[i] - 1) == S.end()) {
            // Then check for next elements
            // in the sequence
            int j = arr[i];
            while (S.find(j) != S.end())
                j++;

            // update  optimal length if
            // this length is more
            ans = max(ans, j - arr[i]);
        }
    }
    return ans;