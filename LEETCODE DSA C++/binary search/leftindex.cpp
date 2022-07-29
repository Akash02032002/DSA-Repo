int leftIndex(int n, int arr[], int x) {
	int i = 0, j = n - 1 ;
	while (i <= j) {
		int mid = (i + j) / 2;
		if (arr[mid] < x) i = mid + 1 ;
		else if (arr[mid] > x) j = mid - 1 ;
		else {
			if (mid == 0 || arr[mid] != arr[mid - 1])
				return mid ;
			else j = mid - 1 ;
		} return -1 ;
	}
}