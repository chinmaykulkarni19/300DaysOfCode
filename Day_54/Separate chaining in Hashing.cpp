class Solution
{
public:
    // Complete this function
    // Function to insert elements of array in the hashTable avoiding collisions.
    vector<vector<int>> separateChaining(int hashSize, int arr[], int sizeOfArray)
    {
        vector<vector<int>> v(hashSize);
        for (int i = 0; i < sizeOfArray; i++)
        {
            v[arr[i] % hashSize].push_back(arr[i]);
        }
        return v;
    }
};