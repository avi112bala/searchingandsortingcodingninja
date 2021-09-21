int binarySearch(int *input,int n, int val)
{
    
    int l=0,r=n-1;
     int m = (l + r)  / 2;
  while (l <= r) {
        // int m = l + (r - l) / 2;
  
      
        if (input[m] == val){
            return m;
            break;
        }
  
        
        if (input[m] < val){
            l = m + 1;
        }
  
        
        else if(input[m]>val){
            r = m - 1;
    }
  m = (l + r)  / 2;
   
  //  return -1;
}
     if(input[m]!=val)
            {
               return -1;
                
            }

}
