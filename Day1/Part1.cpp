#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int sum = 0;
	int num = 0;
	fstream file;
	string line;
	file.open("Text.txt");
	while (!file.eof()) {
		getline(file, line);
		num = stoi(line.substr(1, line.length() - 1));
		if (line[0] == '+') {
			sum += num;
		}
		else {
			sum -= num;
		}
	}
	cout << sum << endl;
	file.close();
	return 0;
}
