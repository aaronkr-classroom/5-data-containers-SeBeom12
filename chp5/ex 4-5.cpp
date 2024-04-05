#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
	vector<string> words;
	unordered_map<string, int> wordCount;

	cout << "Enter words (ctrl+z to stop) : " << endl;

	string word;
	while (cin >> word) {
		words.push_back(word);

	}

	for (auto& w : words) {
		wordCount[w]++;
	}

	cout << "Word count: " << endl;
	for (auto& pair : wordCount) {
		cout << pair.first << ":" << pair.second << endl;

	}
	return 0;
}




