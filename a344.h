class Solution{
	public:
		string reverseString(string s){
			string v;
			int len = s.length();
			for(int i = len - 1; i >= 0; i--){
				v.append(1, s[i]);
				}
			return v;
			}
};
