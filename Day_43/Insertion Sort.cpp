class Solution
{
public:
    void insert(int arr[], int i)
    {
        // code here
    }

public:
    // Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            int j = i - 1;
            int key = arr[i];
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
};