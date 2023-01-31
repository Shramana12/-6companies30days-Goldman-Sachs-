class Solution {
public:
    vector<int> maximumBobPoints(int numArrows, vector<int>& aliceArrows) {
        vector<int> ans(12,0);
        int maxo=0;
        for(int i=0;i<(1<<12);i++){
            int sum =0;
            vector<int> temp(12,0);
            int count=numArrows;
            for(int j=0;j<12;j++){
                if(i&(1<<j)){
                    if(aliceArrows[j]+1<=count){
                        count-=aliceArrows[j]+1;
                        temp[j]=aliceArrows[j]+1;
                    }
                }
            }
            if(count){
                int pos=0,mini=INT_MAX;
                for(int i=0;i<12;i++){
                    if(temp[i]<mini){
                        mini=temp[i];
                        pos=i;
                    }
                }
                temp[pos]=count;
                count=0;

            }
            sum=0;
            for(int i=0;i<12;i++){
                if(temp[i]>aliceArrows[i]){
                    sum+=(i);
                }
            }
            if(sum>maxo){
                maxo=sum;
                ans=temp;
                
            }
        }

        return ans;
    }
};


