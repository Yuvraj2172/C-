int sum(int input[], int n) {
  if(n<0)return 0;
  return input[n-1] + sum(input , n-1);
}
