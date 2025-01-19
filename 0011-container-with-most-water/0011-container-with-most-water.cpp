class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int mw=0;
        int lp=0,rp=height.size()-1;

        while(lp<rp){
            int w=rp-lp;
            int ht= min(height[lp],height[rp]);
            int currw=w*ht;
            mw=max(mw,currw);

            height[lp]<height[rp] ? lp++:rp--;
        }
            return mw;
            
    }
    
    };