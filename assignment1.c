#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[5] = {5, 3, 5, 2, 67};
    printf("%d\n", arr1[0]);
    
    
    int arr2[] = {5, 3, 5, 2, 67, 3};
    printf("%d\n", arr2[0]);
    
    int arr3[2][2] = {{5, 10}, {6, 4}};
    printf("%d\n", arr3[0][1]);
    
    int *arr4 = (int *)malloc(sizeof(int) * 10);
    arr4[0] = 10;
    printf("%d\n", arr4[0]);
    return 0;
}
