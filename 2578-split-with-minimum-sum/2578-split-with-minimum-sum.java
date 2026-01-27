class Solution {
    public int splitNum(int num) {
        char[] arr=String.valueOf(num).toCharArray();
        Arrays.sort(arr);
        int num1=0,num2=0,n=arr.length;
        for(int i=0,j=1;i<n;i+=2,j+=2){
            num1=num1*10+(arr[i]-'0');
            if(j<n)
                num2=num2*10+(arr[j]-'0');
        }
        return num1+num2;
    }
}