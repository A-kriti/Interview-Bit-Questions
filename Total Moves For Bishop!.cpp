// ques link - https://www.interviewbit.com/problems/total-moves-for-bishop/

int Solution::solve(int A, int B) {

    
    return min(B-1,A-1) + min(8-B,A-1) + min(8-B,8-A) + min(B-1,8-A);
    
    
}

//OR------------------------------------------

int Solution::solve(int A, int B) {

    int tl=min(A,B)-1;
    int tr=min(A,9-B)-1;
    int bl=8-max(A,B);
    int br=8-max(A,9-B);
    //int y=x*B-1;
    int z=tl+tr+bl+br;
    return z;
}
