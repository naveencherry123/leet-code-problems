class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int maxi=0;
        int n=gain.end()-gain.begin();
        for(int i=0;i<n;i++){
            sum+=gain[i];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};