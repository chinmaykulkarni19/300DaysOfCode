void maximumAdjacent(int sizeOfArray, int arr[]){
    
    for(int i=1;i<sizeOfArray;i++)
    arr[i]>=arr[i-1]?cout<<arr[i]<<" ":cout<<arr[i-1]<<" ";
     
}