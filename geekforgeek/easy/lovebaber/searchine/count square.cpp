// https://practice.geeksforgeeks.org/problems/count-squares3649/1

int countSquares(int N) {
        // code here
        int total = 0;
      
        for(int i=1; i<N; i++)
        {
            int sq = i * i;
            
            if(sq < N)
                total++;
            
            else    
               break;
            
        }    
            
       return total;
    }