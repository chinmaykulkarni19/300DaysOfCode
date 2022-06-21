class Solution {
  public:
    // Function to insert all elements of the array in deque.
    deque<int> deque_Init(int arr[], int n) {
        deque<int>q;
        
        for(int i=0;i<n;i++)
        {
            q.push_back(arr[i]);
        }
        return q;
    }
};