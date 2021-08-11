// ques link - https://www.interviewbit.com/problems/trailing-zeroes/

int Solution::solve(int A) {

    vector<int> l;
    int x;
    int c=0;
    while(A<=1){
        x=A%2;
        A=A/2;
        
        if(x==0){
            c+=1;
        }
        if(x==1){
            
            return c;
        }
        
        
    }

    
}
