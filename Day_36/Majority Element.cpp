class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {

        int count = 1, res = 0;
        for (int i = 1; i < size; i++)
        {
            if (a[res] == a[i])
                count++;
            else
                count--;
            if (count == 0)
                res = i, count = 1;
        }
        count = 0;
        for (int i = 0; i < size; i++)
        {
            if (a[res] == a[i])
                count++;
        }
        if (count <= size / 2)
            return -1;
        else
            return a[res];
    }
};