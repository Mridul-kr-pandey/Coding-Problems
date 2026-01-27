class Solution {
    public String removeStars(String s) {
        Stack<Character>st=new Stack<>();
        int n=s.length();
        for(int i=0;i<n;i++){
            char ch=s.charAt(i);

            if(!st.empty() && ch=='*'){
                st.pop();
            }
            else{
                st.push();
            }
        }
        StringBuilder sb=new StringBuilder();
        for(char ch:st){
            sb.append(ch);
        }
        return sb.toString();
    }
}