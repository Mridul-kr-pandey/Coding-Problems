int candy(int* ratings, int ratingsSize) {
    int res=0;
    int*arr = (int*)malloc(sizeof(int)*ratingsSize);
    for(int i=0;i<ratingsSize;i++){
        arr[i]=1;
    }
    for(int i=1;i<ratingsSize;i++){
        if(ratings[i]>ratings[i-1]){
            arr[i]=arr[i-1]+1;
        }
    }
    for(int i=ratingsSize-2;i>=0;i--){
        if(ratings[i]>ratings[i+1]&&arr[i]<=arr[i+1]){
            arr[i]=arr[i+1]+1;
        }
    }
    for(int i=0;i<ratingsSize;i++){
        res+=arr[i];
    }
    return res;
}