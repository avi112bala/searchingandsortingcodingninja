int findSecondLargest(int *input, int n)
{
    //Write your code here
    
                      
    
    int highest=-2147483648;                   
    int secondhigh=-2147483648;
    
    for(int i=0;i<n;i++){                   
        if(highest<input[i]){
            secondhigh=highest;
            highest=input[i];
        }
        if(secondhigh<input[i]&& input[i]<highest){
            secondhigh=input[i];
            
        }
        
    }
    return secondhigh;
     
}
