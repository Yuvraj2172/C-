# 2) Given a string S (that can contain multiple words), you need to find the word which has minimum length.
# Note : If multiple words are of same length, then answer will be first minimum length word in the string.


## Read input as specified in the question.
## Print output as specified in the question.
l = list(map(str,input().split()))
minlen=100000
for i in l:
    length=len(i)
    if length< minlen:
        minlen = length
for i in l:
    if len(i)==minlen:
        print(i)
        break