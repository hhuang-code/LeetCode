class Solution {
public:
    int binarySearchDist(vector<int> heaters, int x){
        int len = heaters.size();
        int s = 0;
        int e = len - 1;
        int mid = 0;
        while(s < e){
            mid = (s + e) / 2;
            if(heaters[mid] == x){
                return 0;
            }else if(heaters[mid] < x){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
        
        int dist = abs(heaters[s - 1 < 0 ? 0 : s - 1] - x) < abs(heaters[s] - x) ? abs(heaters[s - 1 < 0 ? 0 : s - 1] - x) : abs(heaters[s] - x);
        dist = abs(heaters[s + 1 >= len ? len - 1 : s + 1] - x) < dist ? abs(heaters[s + 1 >= len ? len - 1 : s + 1] - x) : dist;
        return dist;
    }
    
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int house_num = houses.size();
        int heater_num = heaters.size();
        sort(heaters.begin(), heaters.end());
        int max = INT_MIN;
        int min = 0;
        for(int i = 0; i < house_num; i++){
            min = binarySearchDist(heaters, houses[i]);
            if(min > max){
                max = min;
            }
        }
        
        return max;
    }
};
