//ques link - https://www.interviewbit.com/problems/sort-array-with-squares/
vector<int> Solution::solve(vector<int> &A) {
    int n=A.size();
    int i;

    vector<int> x;
    
    
    for(i=0;i<n;i++){
        
        x.push_back(A[i]*A[i]);
        }
   

    sort(x.begin(),x.end());

return x;
    

}
