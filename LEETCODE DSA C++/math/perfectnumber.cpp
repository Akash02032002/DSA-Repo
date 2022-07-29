 //https://leetcode.com/problems/perfect-number/
 bool checkPerfectNumber(int num) {
      int i , sum = 1;
    if(num==1) return false; 
	for ( i = 2 ; i*i<=num ; ++i ) {
		if (num % i == 0){
			sum += i;
            if(i*i!=num)
                sum+=num/i;}
	}
	return (num==sum)  ;
    }