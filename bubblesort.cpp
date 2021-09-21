void bubbleSort(int *input, int size)
{
    //Write your code here
    for(int j=0;j<size-1;j++){
        for(int i=0;i<size-1-j;i++){
            if(input[i]>input[i+1]){
                int temp=input[i];
                input[i]=input[i+1];
                input[i+1]=temp;
                
            }
        }
    }
}
