#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int test, caseno = 0;

	cin >> test;
	while(test--){
		int num;
		cin >> num;
		int length, width, height, volume;

		vector<int> vol;
		vector<std::string> nam;
		for(int i = 0;i<num;i++){

			string name;
			cin >> name >> length >> width >> height;
			nam.push_back(name);
			volume = length * width * height;
			vol.push_back(volume);
		}

		int min = 10000007, max = -1, indexMax = -1, indexMin = -1;
		for(int i = 0;i<num;i++){
			if(min > vol[i]){
				min = vol[i];
				indexMin = i;
			}

			if(max < vol[i]){
				max = vol[i];
				indexMax = i;
			}
		}
		if(min == max)
			printf("Case %d: no thief\n",++caseno );
		else
			cout << "Case " << ++caseno << ": " << nam[indexMax] << " took chocolate from " << nam[indexMin]<< endl;
	}
	return 0;

}