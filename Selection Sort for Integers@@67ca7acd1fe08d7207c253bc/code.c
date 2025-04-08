void selectionSort(int arr[], int n) {
    for (int i=0; i<n; i++) {
        int min = i;
        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[j];
        arr[j]=temp;
    }

}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}