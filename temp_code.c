
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int a,b;
    *returnSize = 2;
    int*ans = malloc(2*sizeof(int));
    
    for (int i = 0; i < numsSize-1; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                a = i;
                b = j;
            }
        }
    }
    ans[0] = a;
    ans[1] = b;
    return ans;
}