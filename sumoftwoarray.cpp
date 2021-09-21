void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    
    int i = size1-1, j = size2-1; 
    int k = max(size1, size2); 
    int carry = 0; 
    while(i >= 0 && j >= 0){
        int sum = input1[i]+input2[j] + carry; 
        output[k] = sum%10; 
        carry = sum/10; 
        i--, j--, k--; 
    }
    while(i >= 0){
        int sum = input1[i]+carry; 
        output[k] = sum%10; 
        carry = sum/10; 
        k--, i--; 
    }
    while(j >= 0){
        int sum = input2[j]+carry; 
        output[k] = sum%10; 
        carry = sum/10; 
        k--, j--; 
    }
    output[k] = carry; 
}
