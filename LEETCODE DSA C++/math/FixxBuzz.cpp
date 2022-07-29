//https://leetcode.com/problems/fizz-buzz/
 vector<string> fizzBuzz(int n) {
        vector<string> ans; 
        int cnt3= 3 , cnt5 = 5 ;
      for(int i =1 ; i<= n ; i++ )
      {
          
          if(i==cnt3 && i ==cnt5) {ans.push_back("FizzBuzz") ; cnt3+=3 ; cnt5+=5 ;}
          else if (i==cnt3) { ans.push_back("Fizz") ; cnt3+=3 ;}
           else if (i==cnt5) { ans.push_back("Buzz") ; cnt5+=5 ;}
          else ans.push_back(to_string(i)) ; 
   
    
     
      }
   
    return ans; }