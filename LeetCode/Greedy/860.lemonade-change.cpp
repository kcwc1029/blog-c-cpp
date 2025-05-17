bool lemonadeChange(vector<int>& bills) {
    int five = 0, ten = 0; // 用變數分別記錄5、10元(20元不能找零)
    for(int b:bills){
        if(b==5){
            five++;
        }else if(b==10){
            five--;
            ten++;
        }else{ // b==20
            if(ten>0){
                ten--;
                five--;
            }
            else{
                five-=3;
            }
        }
        if(five<0) return false;

    }
    return true;
}