class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        vector<int> hashTable(hashSize,-1);
        for(int i=0;i<sizeOfArray;i++)
        {
            int index=arr[i]%hashSize;
            if(hashTable[index]==-1)
            hashTable[index]=arr[i];
            else
            {
                int count=0;
                while(hashTable[index]!=-1 && count<=hashSize)
                {
                    if(hashTable[index]==arr[i])
                    break;
                    index=(index+1)%hashSize;
                    count++;
                }
                if(hashTable[index]==-1)
                hashTable[index]=arr[i];
            }
        }
        return hashTable;
    }

};