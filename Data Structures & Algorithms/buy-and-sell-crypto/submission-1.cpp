class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;

        int i=0;
        int j=1;

        while(j<prices.size()){
            if(prices[j]<prices[i]){
                i=j;
            }
            else p=max(p,(prices[j]-prices[i]));
            j++;
        }
       return p; 
    }
};
