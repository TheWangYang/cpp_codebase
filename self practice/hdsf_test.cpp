#include <iostream>
#include <vector>
#include <cstring>

using namespace std;


int main(){
	map<string,int> m(26);
	
	m["a"] = 0;
	m["b"] = 1;
	m["c"] = 2;
	m["d"] = 3;
	m["e"] = 4;
	m["f"] = 5;
	m["g"] = 6;
	m["h"] = 7;
	m["i"] = 8;
	m["j"] = 9;
	m["k"] = 10;
	m["l"] = 11;
	m["m"] = 12;
	m["n"] = 13;
	m["o"] = 14;
	m["p"] = 15;
	m["q"] = 16;
	m["r"] = 17;
	m["s"] = 18;
	m["t"] = 19;
	m["u"] = 20;
	m["v"] = 21;
	m["w"] = 22;
	m["x"] = 23;
	m["y"] = 24;
	m["z"] = 25;

	
	
	int k = 0;
	
	cin >> k;

	string tmp;
	vector<string> kp;
	while(cin >> tmp){
		kp.push_back(tmp);
	}
	
	for(int i = 0;i < kp.size();i++){
		cout << (m[kp.at(i)] + k) % 26;
	}

	
	return 0;
}


