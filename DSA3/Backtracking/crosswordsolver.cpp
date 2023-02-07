#include <bits/stdc++.h>
using namespace std;
char crossword[10][10];

bool isValidHorizontal(int row, int col, string word) {
  if (10 - col < word.length()) {
    return false;
  }
  for (int i = 0, j = col; i < word.length(); i++, j++) {
    if (crossword[row][j] != '-' && crossword[row][j] != word[i]) {
      return false;
    }
  }
  return true;
}
bool isValidVertical(int row, int col, string word) {
  if (10 - row < word.length())
    return false;
  for (int i = row, j = 0; j < word.length(); i++, j++) {
    if (crossword[i][col] != '-' && crossword[i][col] != word[j])
      return false;
  }
  return true;
}
void setHorizontal(int row, int col, string word, bool state[]) {
  for (int i = 0, j = col; i < word.size(); i++, j++) {
    if (crossword[row][j] != '+') {
      if (crossword[row][j] == word[i]) {
        state[i] = false;
      } else {
        state[i] = true;
      }
      crossword[row][j] = word[i];
    }
  }
}
void setVertical(int row, int col, string word, bool state[]) {
  for (int i = 0, j = row; i < word.size(); i++, j++) {
    if (crossword[j][col] != '+') {
      if (crossword[j][col] == word[i]) {
        state[i] = false;
      } else {
        state[i] = true;
      }
      crossword[j][col] = word[i];
    }
  }
}
void resetHorizontal(int row, int col, bool state[], int size) {
  for (int i = 0, j = col; i < size; i++, j++) {
    if (state[i] == true) {
      crossword[row][j] = '-';
    }
  }
}
void resetVertical(int row, int col, bool state[], int size) {
  for (int i = 0, j = row; i < size; i++, j++) {
    if (state[i] == true) {
      crossword[j][col] = '-';
    }
  }
}
void set_Value(bool helper[], int len) {
  for (int i = 0; i < len; i++) {
    helper[i] = false;
  }
}
bool crossWordHelper(string input[], int size, int index) {
  if (index == size) {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        cout << crossword[i][j];
      }
      cout << "\n";
    }
    return true;
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (crossword[i][j] == '-' || crossword[i][j] == input[index][0]) {
        int length = input[index].size();
        bool state[length];
        set_Value(state, length);
        if (isValidHorizontal(i, j, input[index])) {

          setHorizontal(i, j, input[index], state);
          if (crossWordHelper(input, size, index + 1)) {
            return true;
          }
          resetHorizontal(i, j, state, length);
        }
        if (isValidVertical(i, j, input[index])) {

          setVertical(i, j, input[index], state);
          if (crossWordHelper(input, size, index + 1)) {
            return true;
          }
          resetVertical(i, j, state, length);
        }
      }
    }
  }
  return false;
}
void solveCrossword(string input[], int size) {
  bool res = crossWordHelper(input, size, 0);
}
int main() {
  string ss;
  for (int i = 0; i < 10; i++) {
    cin >> ss;
    for (int j = 0; j < ss.size(); j++) {
      crossword[i][j] = ss[j];
    }
  }
  char s[200];
  cin >> s;
  string input[10];
  char ch;
  string word = "";
  int a = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == ';') {
      input[a++] = word;
      word = "";
    } else {
      word += s[i];
    }
  }
  input[a++] = word;
  solveCrossword(input, a);
  return 0;
}