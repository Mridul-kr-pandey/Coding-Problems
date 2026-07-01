class Solution {
    int[][] map;
    Map<String, Integer> memo = new HashMap<>();
    public int minStickers(String[] stickers, String target) {
        map = new int[stickers.length][26];
        memo.put("", 0);
        for(int i=0; i<stickers.length; i++){
            for(char ch: stickers[i].toCharArray()){
                 map[i][ch - 'a']++;
            }      
        }
        return dfs(target);
    }
    int dfs(String target){
        if(memo.containsKey(target)){
            return memo.get(target);
        }
        int min = Integer.MAX_VALUE;
        for(int[] sticker: map){
            StringBuilder sb = new StringBuilder();
            int[] copy = sticker.clone();
            for(char ch: target.toCharArray()){
                copy[ch - 'a']--;         
                if(copy[ch - 'a'] < 0){
                    sb.append(ch);
                }
            }
            if(sb.length() == target.length()){
                continue;
            }
            int countChild = dfs(sb.toString());
            if(countChild >= 0){
                min = Math.min(min, countChild + 1);
            }
        }
        if(min < Integer.MAX_VALUE){
            memo.put(target, min);        
            return min;
        }
        memo.put(target, -1);        
        return -1;        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna