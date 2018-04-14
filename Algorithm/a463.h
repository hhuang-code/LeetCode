class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int width = grid[0].size();
	int height = grid.size();

	int p = 0;
	int l, r, t, b;
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			if(grid[i][j] == 1){
				l = j - 1;
				r = j + 1;
				t = i - 1;
				b = i + 1;
				if((l >= 0 && grid[i][l] == 0) || l < 0){
					p++;
				}
				if((r < width && grid[i][r] == 0) || r >= width){
					p++;
				}
				if((t >= 0 && grid[t][j] == 0) || t < 0){
					p++;
				}
				if((b < height && grid[b][j] == 0) || b >= height){
					p++;
				}
			}
		}
	}
	
	return p;
    }
};
