class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>A;
        A.push(asteroids[0]);
        for(int i=1;i<asteroids.size();i++){
            if(!A.empty()&&A.top()>0&&asteroids[i]<0){
                int op=0;
                while(!A.empty()&&(A.top()>0&&asteroids[i]<0)&&A.top()<=abs(asteroids[i])){
                    op=A.top();
                    A.pop();
                    if(op==abs(asteroids[i])){
                        break;
                    }
                }
               if(!A.empty()&&op!=abs(asteroids[i])&&A.top()<0&&asteroids[i]<0){
                   A.push(asteroids[i]);
               }
                if(A.empty()&&op!=abs(asteroids[i])){
                    A.push(asteroids[i]);
                }
            }
            else{
                A.push(asteroids[i]);
                cout<<A.top()<<" ";
            }
        }
        vector<int>B;
        while(!A.empty()){
            B.push_back(A.top());
            A.pop();
        }
        reverse(B.begin(),B.end());
        return B;
    }
};