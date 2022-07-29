//****************************************************************************/
// THIS METHOD IS JUST LIKE ROTATE BY ONE IN LEFT SIDE 
//THIS WILL ROTATE ARRYA BY K TIMES 
void leftrotatearaybyktimes1(int arr[] , int n , int k ) {
	for (int i = 0 ; i < k; i++) {
		int temp = arr[0] ;
		for (int i = 0 ; i < n - 1 ; i++) {
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp ;

	}
}
/***********************************************************************************/


























/*******************************************************************/
//REVERSAL METHOD PROBLEM ;
void reversearray(int arr[] , int  lo , int hi ) {
	while (lo <= hi) {
		swap(arr[lo++], arr[hi--]);
	}
}
void leftrotatearaybyktimes(int arr[] , int n , int k) {
	reversearray(arr, 0, k - 1); 
	reversearray(arr, k, n - 1);
	reversearray(arr, 0, n - 1);
}
/********************************************************************/
