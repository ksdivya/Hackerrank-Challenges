#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j; 
    scanf("%d",&n);
    //int *arr = malloc(sizeof(int) * n);
    //int *arr1=malloc(sizeof(int) *n);
    int arr[1000],arr1[1000];
    for(i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    //printf("Your array in reverse order is:\n");
    for(i=n-1,j=0;i>=0;i--,j++)
    {
       
          arr1[j]=arr[i]; 
     
    }
    for(i=0;i<n;i++)
    {
        arr[i]=arr1[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
