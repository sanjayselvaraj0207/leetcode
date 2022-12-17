class Solution {
    public int findDuplicate(int[] nums) {
        int a=0;
        int b=nums[0];
        while(nums[a]!=a){
            b=nums[a];
            nums[a]=a;
            a=b;
        }
        return b;
    }
}
