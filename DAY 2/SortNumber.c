void sortColors(int* nums, int numsSize){
   int red = 0;
    int white = 0;
    int blue = 0;
    for (int i = 0; i < numsSize; i++)
    {
        switch(nums[i])
        {
            case 0:
                red++;
                break;
            case 1:
                white++;
                break;
            case 2:
                blue++;
                break;
            default:
                break;
        }
    }
    for(int i = 0; i < red; i++)
    {
        nums[i] = 0;
    }
    for(int i = red; i < (white + red); i++)
    {
        nums[i] = 1;
    }
    for(int i = red + white; i < (red + white + blue);i++)
    {
        nums[i] = 2;
    }
}
