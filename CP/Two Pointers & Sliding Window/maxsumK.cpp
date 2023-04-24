int maxOfK(int n, int k, vector<int> &num)
{
    int ans = INT_MIN , sum =0;
    for(int i=0; i<k;i++)ans+= num[i];
    int d=0;
    for(int i= k;i<n;i++){
        sum+=num[i];
        sum-= num[d++];
        ans = max(sum , ans);
    }
    return ans;
}