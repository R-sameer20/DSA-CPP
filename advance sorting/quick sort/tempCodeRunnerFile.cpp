int partition(int arr[] , int si , int ei){
    int pivotElement = arr[si];
    int count = 0;
    for(int i = si+1 ; i<=ei ; i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count+si;
    swap(arr[si],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        return pivotIdx;
    }
}