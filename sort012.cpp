void sort012(int *arr, int n)
{
    //Write your code here
     int j=0;
    // It will sort element 0
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
        else
          continue;
    }
    
    //it will sort element 1
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            swap(arr[i],arr[j]);
            j++;
        }
        else
          continue;
    }
    // It will sort element 2 
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
            swap(arr[i],arr[j]);
            j++;
        }else{
            continue;
        }
    }
}
