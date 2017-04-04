class Solution{
	public:
		vector<string> fizzBuzz(int n){
			vector<string> v;
			stringstream ss;
			string s;
			for(int i = 1; i <= n; i++){
				if((i % 3 != 0) && (i % 5 != 0)){
					ss << i;
					ss >> s;
					v.push_back(s);
					ss.clear();
				}else if((i % 3 == 0) && (i % 5 != 0)){
					v.push_back("Fizz");
				}else if((i % 3 != 0) && (i % 5 == 0)){
					v.push_back("Buzz");
				}else{
					v.push_back("FizzBuzz");
				}
			}
			return v;
		}	
};
