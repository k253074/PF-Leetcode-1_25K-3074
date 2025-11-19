#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int i, j;
    int nums[100];
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    for(i = 0; i < n; i++) {
        nums[i] = nums[i] % 2 ? 1 : 0;
    }
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(nums[i] > nums[j]) {
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
            }
        }
    }
    printf("Output: ");
    for(i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
    return 0;
}
