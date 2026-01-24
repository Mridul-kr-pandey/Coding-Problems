class Solution {
    public int countGoodSubstrings(String s) {
        char[] chars = s.toCharArray();
        int count = 0;

        for (int i=0;i<chars.length-2;i++){
            char ch0=chars[i];
            char ch1=chars[i+1];
            char ch2=chars[i+2];

            if (ch0!=ch1 && ch0!=ch2 && ch1!=ch2){
                count++;
            }
        }
        return count;
    }
}