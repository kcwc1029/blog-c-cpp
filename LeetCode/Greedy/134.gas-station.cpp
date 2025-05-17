int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = accumulate(gas.begin(), gas.end(), 0);
        int totalCost  = accumulate(cost.begin(), cost.end(), 0);
        if(totalGas < totalCost) return -1;

        // 使用 `for` 迴圈找出起點
        int tank = 0, start = 0;
        for (int i = 0; i < gas.size(); i++){
            tank += gas[i] - cost[i];
            if(tank<0){
                start = i+1;
                tank = 0;
            }
        }
        return start;
    }