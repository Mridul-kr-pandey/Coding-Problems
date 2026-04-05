class Solution {
public:
    bool judgeCircle(string moves) {
        int ans1 = 0;
        int ans2 = 0;
        for(int i = 0; i < moves.size(); i++){
            if(moves[i] == 'U') ans1 += 1;
            else if(moves[i] == 'D') ans1 -= 1;
        }
        for(int i = 0; i < moves.size(); i++){
            if(moves[i] == 'R') ans2 += 1;
            else if(moves[i] == 'L') ans2 -= 1;
        }
        return ans1 == 0 && ans2 == 0;
    }
};