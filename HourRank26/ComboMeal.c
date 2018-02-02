#include<stdio.h>
int profit(int b, int s, int c) {
    // Return the fixed profit.
    return b+s-c;
}

int main() {
    int t; 
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        int b; 
        int s; 
        int c; 
        scanf("%i %i %i", &b, &s, &c);
        int result = profit(b, s, c);
        printf("%d\n", result);
    }
    return 0;
}
