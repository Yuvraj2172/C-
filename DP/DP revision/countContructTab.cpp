#include<bits/stdc++.h>
using namespace std;
void countConstruct(string target , vector<string> wordBank){
    vector<int> table(target.size()+1, 0);
    table[0] =1;
    for(int i=0; i<= target.size();i++){
        if(table[i]!=0){
            for(auto word : wordBank){
                if(target.substr(i , word.size()) == word){
                    table[ i + word.size() ] = table[i] + table[i+ word.size()];
                }
            }
        } 
    }
    cout<<table[target.size()]<<endl;
}
int main(){
    string target = "purple";
    vector<string> wordBank = {"purp", "p" , "ur", "le", "purpl"};
    countConstruct(target, wordBank);
    target = "abcdef";
    wordBank = {"ab", "abc", "cd", "def", "abcd", "e", "cdef"};
    countConstruct(target, wordBank);
    wordBank ={"bo", "rd", "ate", "t","ska", "sk","boar"};
    target= "skateboard";
    countConstruct(target, wordBank);
    target ="enterapotentpot";
    wordBank = {"a", "p", "ent","enter", "ot", "o","t"};
    countConstruct(target, wordBank);
}