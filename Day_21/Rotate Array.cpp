void rotateArr(int arr[], int d, int n){
        int temp[d];
        for(int i=0;i<d;i++)
        {
            temp[i]=arr[i];
        }
        for(int i=d;i<n;i++)
        {
            arr[i-d]=arr[i];
        }
        for(int i=0;i<d;i++)
        {
            arr[n-d+i]=temp[i];
        }
    }
};