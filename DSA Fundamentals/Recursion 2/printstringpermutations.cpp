#include <iostream>
#include <string>
using namespace std;
void helper(string input, string output)
{
    if(input.size()==0){
        cout<<output<<"\n";
        return;
    }
   for(int i=0;i<input.size();i++){
    string str = input.substr(0,i) + input.substr(i+1,input.size());
    helper(str, output + input[i]);
   }
}
void printPermutations(string input)
{
    string output = "";
    helper(input, output);
}

int main()
{
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}