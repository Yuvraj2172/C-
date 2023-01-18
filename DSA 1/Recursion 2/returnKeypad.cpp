#include <iostream>
#include <string>
using namespace std;
using namespace std;
string getString(int d){
    string options[] = {"", "", "abc", "def", "ghi","jkl","mno","pqrs","tuv","wxyz"};
    return options[d];
}
int keypad(int num, string output[]){ 
     string input;
    if(num==0 || num==1){
        output[0]="";
        return 1;
    }
    int smallerNumber = num/10;
    int lastDigit = num%10; 
    int smallOutputSize = keypad(smallerNumber, output);
    input = getString(lastDigit);
    int ans_size = smallOutputSize*(input.size());
    int k=0;
    string  temp[ans_size];
    for(int i=0; i<smallOutputSize;i++){
        for(int j=0; j < input.size(); j++){
            temp[k] = output[i] + input[j];
            k++;
        }
    }
    for(int i=0;i<ans_size;i++){
        output[i] = temp[i];
    }
    return input.size()*smallOutputSize;
}
int main(){
    int num=23;
    cin >> num;
    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
