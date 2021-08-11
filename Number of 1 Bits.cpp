//ques link - https://www.interviewbit.com/problems/number-of-1-bits/

int Solution::numSetBits(unsigned int A) {
    
    int c=0;
    while(A>=1){
        c+=A%2;
        A=A/2;
    }
    return c;
}
