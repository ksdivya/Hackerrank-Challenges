#include <math.h>
#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    // Complete this function
    int a,b;
     a=(a0 > b0)*1+(a1>b1)*1+(a2>b2)*1 ;
     b=(b0>a0)*1+(b1>a1)*1+(b2>a2)*1;
    printf("%d %d",a,b);
        
}*/

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
     int alice,bob;
   alice=(a0 > b0)*1+(a1>b1)*1+(a2>b2)*1 ;
   bob=(b0>a0)*1+(b1>a1)*1+(b2>a2)*1;
    printf("%d %d ",alice,bob);
    

    return 0;
}
