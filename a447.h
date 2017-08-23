class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int num = points.size();
        vector<vector<long> > dist;
        for(int i = 0; i < num; i++){
          vector<long> v(num, 0.0);
          dist.push_back(v);
        }

        long d = 0;
        for(int i = 0; i < num; i++){
          for(int j = 0; j < num; j++){
        dist[i][j] = pow((points[i].first - points[j].first), 2) + pow((points[i].second - points[j].second), 2);
          }
        }

        int sum = 0;
        for(int i = 0; i < num; i++){
          map<long, int> m;
          for(int j = 0; j < num; j++){
            if(i != j){
        m[dist[i][j]]++;
            }
          }
          map<long, int>::iterator iter;
          for(iter = m.begin(); iter != m.end(); iter++){
            if(iter->second > 1){
        sum += (iter->second * (iter->second - 1));
            }
          }
        }

        return sum;
    }
};
