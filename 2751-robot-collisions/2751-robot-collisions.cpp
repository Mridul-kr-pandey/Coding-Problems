class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<int> order(n);
        for(int i = 0; i<n; i++) order[i] = i;

        sort(order.begin(), order.end(), [&](int a, int b){
            return positions[a] < positions[b];
        });
        stack<int> st;
        vector<bool> dead(n, false);

        for(int id : order){
            if(directions[id] == 'R'){
                st.push(id);
            }
            else{
                while (!st.empty()){
                    int top = st.top();

                    if(healths[top] > healths[id]){
                        healths[top]--;
                        dead[id] = true;
                        break;
                    }
                    else if(healths[top] < healths[id]){
                        healths[id]--;
                        dead[top] = true;
                        st.pop();
                    }
                    else{
                        dead[id] = true;
                        dead[top] = true;
                        st.pop();
                        break;
                    }
                }
                
            }
        }
        vector<int> res;
        for(int i = 0; i<n; i++){
            if(!dead[i]){
                res.push_back(healths[i]);
            }
        }
        return res;
    }
};