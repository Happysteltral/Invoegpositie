#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) 
{

}

int main() {
    int nums[] = {1, 3, 5, 6};
    int target = 5;
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = searchInsert(nums, size, target);
    printf("Invoegpositie: %d\n", result); // Verwacht resultaat: 2

    return 0;
}