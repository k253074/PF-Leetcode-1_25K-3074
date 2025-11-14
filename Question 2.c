#include <stdio.h>
int main() {
    int nums[8] = {1,2,3,4,4,3,2,1};
    int n = 4;
    int result[8];
int i;
    int j = 0;
    for (i = 0; i < n; i++) {
        result[j++] = nums[i];       // xi
        result[j++] = nums[i + n];   // yi
    }
    for ( i = 0; i < 8; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}

