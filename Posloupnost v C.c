#include <stdio.h>
#include <math.h>

int main(){
    int a1 = 5;
     int temp = a1;
    int n = 20;
    int d = 5;
    int pole[n];
     pole[0] = a1;

    for( int i = 1; i < n; i++ ){
        temp = temp + d;
        pole[i] = temp;
    }

    for(int i = 0; i < n; i++){
        printf( "%d, ", pole[i] );
}

    return 0;
}