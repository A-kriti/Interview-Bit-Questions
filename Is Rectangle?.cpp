//ques link - https://www.interviewbit.com/problems/is-rectangle/

int Solution::solve(int A, int B, int C, int D) {

    int c=0;
    if(A==B && B==C && C==D){
        return 1;
    }

    else if(A==B &&  C==D){
        return 1;
    }
    else if(A==C &&  B==D){
        return 1;
    }
    else if(A==D &&  C==B){
        return 1;
    }

    return 0;
}
