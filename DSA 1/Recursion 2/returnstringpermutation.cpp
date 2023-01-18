#include <iostream>
#include <string>
using namespace std;

int returnPermutations(string input, string output[]){
    if(input.size()==0){
        output[0]="";
        return 1;
    }
    string smallstring[1000];
    int size1 = returnPermutations(input.substr(1),smallstring);
    int k=0;
    for(int i=0;i<size1;i++){
        for(int j=0;j<=smallstring[i].size();j++){
            output[k++] = smallstring[i].substr(0,j)+input[0]+ smallstring[i].substr(j);
        }
    }
    return k;
}
int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
