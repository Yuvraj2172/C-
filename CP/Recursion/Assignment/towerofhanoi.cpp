void helper(int n, vector<vector<int>>& ans , int source , int aux, int destination){
    if(n==0)return;
    helper(n-1 , ans, source , destination,aux );
    ans.push_back({source , destination});
    helper(n-1, ans , aux , source, destination);
}
vector<vector<int>> towerOfHanoi(int n)
{
    vector<vector<int>> ans;
    helper(n , ans , 1,2,3);
    return ans;
}