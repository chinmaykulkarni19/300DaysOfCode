int MinHeap::extractMin() 
{
    if(heap_size<=0)
    {
        return -1;
    }
    if(heap_size==1)
    {
        heap_size--;
        return harr[0];
        
    }
    swap(harr[0],harr[heap_size-1]);
    heap_size--;
    MinHeapify(0);
    return harr[heap_size];
}

//Function to delete a key at ith index.
void MinHeap::deleteKey(int i)
{
    if(i>heap_size-1){
           return;
       }
    decreaseKey(i,INT_MIN);
    extractMin();
}

//Function to insert a value in Heap.
void MinHeap::insertKey(int k) 
{
     if(heap_size==capacity){
           return;
       }
       heap_size++;
    harr[heap_size-1]=k;
    
    for(int i=heap_size-1;i!=0 && harr[parent(i)]>harr[i];)
    {
        swap(harr[parent(i)],harr[i]);
        i=parent(i);
    }
}