#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);  // had to type cast it coz apparently u can't deref void * ptr
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

void main() {
    int arr_count = 5;
    int arr[] = {256741038,623958417,467905213,714532089,938071625};
    int i;
    long long int min = 0, max = 0;
    
    // see this magic , remember this !
    
    qsort(arr, arr_count, sizeof(int), comp);
    for (i = 0; i < arr_count - 1 ; i++) {
        min += arr[i];
    }
    max = min + arr [arr_count - 1] - arr [0];
    
    // so here i made a mistake of using %d foramt , silly /me
    
    printf ("%lld %lld\n", min, max);
}
