bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
    flowerbed.insert(flowerbed.begin(), 0); // 在頭插0
    flowerbed.push_back(0); // 在尾巴插0
    for(int i=1; i<flowerbed.size()-1; i++){
        if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
            flowerbed[i]=1; // 種花
            n--;
        }
    }

    // 依據我現在種了幾朵花，判斷我是否可以完成題目給的種花目標數量
    if(n<=0) return true;
    else return false; 
}