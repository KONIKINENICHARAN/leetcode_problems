class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& A){
        if(A.size()==1||A[0].size()==1){
              vector<int>B;
            if(A[0].size()==1){
                for(int i=0;i<A.size();i++){
                    B.push_back(A[i][0]);
                }
            }
            else{
            for(int i=0;i<A[0].size();i++){
                B.push_back(A[0][i]);
            }
            }
            return B;
        }
        int a=A.size();
        int b=A[0].size();
    int fla=0;
    int j=0;
    vector<int>C;
    while(j<b){
        vector<int>B;
        int i=0;
        int j1=j;
        while(j1>=0&&i<a){
           B.push_back(A[i][j1]);
           j1--;
           i++;
        }
        if(fla%2==0){
            reverse(B.begin(),B.end());
        }
        for(int i1=0;i1<B.size();i1++){
            C.push_back(B[i1]);
        }
        fla++;
        j++;
    }
    int k=1;
    while(k<a){
        // int kl=b-1;
        int y=b-1;
        vector<int>B;
        int op=k;
        while(op<a&&y>=0){
            B.push_back(A[op][y]);
            op++;
            y--;
        }
        if(fla%2==0){
            reverse(B.begin(),B.end());
        }
        for(int io=0;io<B.size();io++){
            C.push_back(B[io]);
        }
        k++;
        fla++;
    }
     return C;
    }
};