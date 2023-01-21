/*stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56*/
vector<int> parseInts(string str) {
	// Complete this function
    int val;char ch;
    stringstream s(str);
    vector<int>res;
    while(s>>val){
        res.push_back(val);
        s>>ch;
    }
 return res;   
}
