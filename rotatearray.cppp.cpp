void pushZeroesEnd(int *input, int size)
{
    //Write your code here
 int count_non_zero = 0; 

  for (int i = 0; i < size; i++){
    if (input[i] != 0){ 
      input[count_non_zero++] = input[i]; 
    }
  }

  while (count_non_zero < size){
    input[count_non_zero++] = 0; 
} 

}
