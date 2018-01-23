#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int p_diag=0,s_diag=0;
    scanf("%d",&n);
    int a[n][n];
    int diff;
    int size=n-1;
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    for(int i=0;i<n;i++)
    {
       p_diag+=a[i][i];
        s_diag+=a[i][size-i];
    }
    diff=abs(p_diag-s_diag);
    printf("%d",diff);
    
    return 0;
}
