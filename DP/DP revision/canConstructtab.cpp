// const canConsturct=(target , wordBank) =>{
//     const table =Array(target.length +1).fill(false);
//     table[0] = true;
//     for(let i =0; i<= target.length; i++){
//         if(table[i] == true){
//             for(let word of wordBank){
                  
//             }
//         }
//     }
// }
#include<bits/stdc++.h>
using namespace std;
bool canConstruct(string target , vector<string> wordBank){
    vector<bool> table(target.size()+1, false);
    table[0] = true;
    for(int i=0 ; i<= target.size(); i++){
        if(table[i] == true){
            for(auto word : wordBank){
                // if the word matches the characters starting at position i
                if(target.substr(i , i + word.size()) == word){
                    table[i + word.size()] = true;
                }
            }
        }
    }
    return table[target.size()];
}
int main(){
    string target = "abcdef";
    vector<string> wordBank = {"ab", "abc", "cd", "def", "abcd"};
    cout<<canConstruct(target, wordBank)<<endl;

    target = "skateboard";
    wordBank = {"bo", "rd", "ate","t","ska", "sk", "boar"};
    cout<<canConstruct(target, wordBank)<<endl;
}