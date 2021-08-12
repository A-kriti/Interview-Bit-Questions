# ques link - https://www.interviewbit.com/problems/add-one-to-number/

class Solution:
    # @param A : list of integers
    # @return a list of integers
    def plusOne(self, A):
      
        s=""
        for i in range(len(A)):
            s+=str(A[i])
        x=int(s)+1
        y=str(x)
        l=[]
        for i in range(len(y)):
            l.append(int(y[i]))
        return l;
