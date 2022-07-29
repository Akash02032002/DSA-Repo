void merge(int arr[] , int low , int mid ,  int high ) {
	int n1 = mid - low + 1 , n2 = high - mid  ,  left[n1] , right[n2] ;
	for (int i = 0 ; i < n1 ; i++) left[i] = arr[i + low]; //here i have to plus low 
	for (int j = 0 ; j < n2 ; j++) right[j] = arr[mid + 1 + j] ;
	int i = 0 , j = 0 , k = low;  //every time k should be low ;
	while (i < n1 && j < n2) {
		if (left[i] <= right[j]) arr[k++] = left[i++];
		else arr[k++] = right[j++] ;
	}
	while (i < n1) arr[k++] = left[i++] ;
	while (j < n2) arr[k++] = right[j++] ;
	// for (int i = 0 ; i < n1 + n2 ; i++) cout << arr[i] << " " ;
}
void mergesort(int arr[] , int l  , int r ) {
	if (r > l) {
		int mid = (l + (r - l) / 2) ;
		mergesort(arr, l, mid);
		mergesort(arr, mid + 1, r);
		merge(arr, l, mid, r);
	}
}