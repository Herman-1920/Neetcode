class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater=-1;

        int i=0,j=heights.size()-1;

        while(i<j){
            int w=(j-i)*min(heights[i],heights[j]);

            if(w>maxwater){
                maxwater=w;
            }
            if(heights[i]<heights[j])i++;
            else j--;
        }
        return maxwater;
    }
};
