int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
          int *p =(int*)malloc(2*sizeof(int));
           for(int i=0;i<numsSize;i++)
           {
               for(int j=i+1;j<numsSize;j++)
               {
                   if(nums[i]+nums[j]==target)
                   {
                    //for(j=0;j<returnSize)
                    p[0]=i;
                    p[1]=j;
                    returnSize[0]=2;
                    return p;

                   }
               }
           }
            return -1;
}