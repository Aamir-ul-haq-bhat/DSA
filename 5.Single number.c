#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[n], freq[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (j = 0; j < n; j++) {
        freq[j] = -1;
    }
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }
    for (i = 0; i < n; i++) {
        if (freq[i] == 1) {
            printf("%d", arr[i]);
        }
    }
    return 0;
} 
