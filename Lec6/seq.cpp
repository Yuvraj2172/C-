#include<bits/stdc++.h>
using namespace std;
bool strictdec(vector<int> &v){
     bool dec=true;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]<=v[i+1]){
        		dec =false;
            break;
        }
    }
    return dec;
}
bool strictinc(vector<int> &v){
    bool inc=true;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>=v[i+1]){
            inc=false;
        }
    }
    return inc;
}

bool incdec(vector<int> &v){
    bool flag1 = true;
    int k;
    for(int j=0;j<v.size()-1;j++){
        if(v[j]<=v[j+1]){
            k=j;
            flag1 = false;
            break;
        }
    }
	for(k;k<v.size()-1;k++){
        if(v[k]>=v[k+1]){
            flag = true;
            break;
        }
    }
    if(flag == true)return true;
    return false;
}

int main() {
	int t;
    cin>>t;
    vector<int> v;
    while(t-->0){
        int inp;
        cin>>inp;
        v.push_back(inp);
    }
	int i=0;
   bool dec=strictdec(v);
    bool inc= strictinc(v);
    bool decinc=incdec(v);
    bool ans = bool(dec|| inc|| decinc);
    // cout<< ans;
    cout<<dec;
    cout<<inc;
    cout<<decinc;
    
}
