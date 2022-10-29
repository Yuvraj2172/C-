#include<bits/stdc++.h>
using namespace std;
void trimspace(char input[]){
    int j=0;
    for(int i=0; input[i];i++){
        if(input[i]!=' '){
            input[j++]=input[i];
        }
    }
    input[j]='\0';
}
int main(){
    char input[1000000];
    cin.getline(input,1000000);
    cout<<input<<" "<<endl;
    trimspace(input);
    cout<<input<<endl;
}