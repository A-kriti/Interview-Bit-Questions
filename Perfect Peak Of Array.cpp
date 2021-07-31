// ques link - https://www.interviewbit.com/problems/perfect-peak-of-array/

int Solution::perfectPeak(vector<int> &A) {
  int n= A.size();
  vector<int> x(n);
  vector<int> y(n);

    x[0]=A[0];
    for(int i=1;i<A.size();i++){
        x[i]=max(x[i-1],A[i]);
    }
    y[n-1]=A[n-1];
    for(int j=n-2;j>=0;j--){

        y[j]=min(y[j+1],A[j]);
    }

    for(int k=1;k<=n-2;k++){

        if(x[k-1]<A[k] && A[k]<y[k+1]){
            return 1;
        }
    }


return 0;
}
