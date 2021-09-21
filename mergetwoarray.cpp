void merge(int *arr1, int s1, int *arr2, int s2, int *ans)
{ 
    int i=0,j=0,k=0;
 for( k=0; i< s1 && j<s2;k++ ){
     if(arr1[i]<=arr2[j]){
         ans[k]=arr1[i];
         i++;  }
    else {ans[k]=arr2[j]; j++;}
    
 }
for(; k<s1+s2; k++){
    if(i==s1){ans[k]=arr2[j]; j++; }
    else if(j==s2){ans[k]=arr1[i]; i++;}
}
