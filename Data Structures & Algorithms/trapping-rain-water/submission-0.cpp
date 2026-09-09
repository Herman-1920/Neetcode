class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftmax=height[0];
        int rightmax=height[n-1];

        int left=0;
        int right=n-1;

        int count=0;
        while(left<right){
            if(leftmax<=rightmax){
                count+=leftmax-height[left];
                left++;
            }
            else{
                count+=rightmax-height[right];
                right--;
            }

            if(height[left]>leftmax)leftmax=height[left];
            else if(height[right]>rightmax)rightmax=height[right];
        }
        return count;
    }
};
