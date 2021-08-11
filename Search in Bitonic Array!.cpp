// ques link - https://www.interviewbit.com/problems/search-in-bitonic-array/

int Solution::solve(vector<int> &A, int B) {
    
    int n=A.size();
    for(int i=0;i<n;i++){
        if(A[i]==B){
            return i;
        }
        
    }

    return -1;
}
