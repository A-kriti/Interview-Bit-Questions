// ques link - https://www.interviewbit.com/problems/smaller-or-equal-elements/

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int c=0;
    for(int i=0;i<n;i++){
        if(A[i]<=B){
            c++;
        }
    }
    return c;
}
