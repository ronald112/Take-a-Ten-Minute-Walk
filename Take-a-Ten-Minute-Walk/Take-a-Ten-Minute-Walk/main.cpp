#include <iostream>
#include <vector>

bool isValidWalk(std::vector<char> walk) {
	int arr[4] = { 0 };
	int check_nmb = 0;
	int check = 0;

	for (int i = 0; i < walk.size(); ++i) {
		if (walk[i] == 'n') {
			arr[0]++;
			check_nmb++;
			arr[1]--;
		}
		else if (walk[i] == 's') {
			arr[1]++;
			check_nmb++;
			arr[0]--;
		}
		else if (walk[i] =='w') {
			arr[2]++;
			check_nmb++;
			arr[3]--;
		}
		else if (walk[i] == 'e') {
			arr[3]++;
			check_nmb++;
			arr[2]--;
		}
	}
	if (check_nmb > 10)
		return false;
	else {
		for (int i = 0; i < 4; ++i) {
			check += arr[i] > 0 ? arr[i] : arr[i] *= -1;
		}
	}
	if (check_nmb == 10 && check == 0)
		return true;
	else
		return false;
}


int main() {
	std::vector<char> V = { 'n' };
	isValidWalk(V) ? std::cout << "valid\n" : std::cout << "not valid\n";
	std::cout << std::endl;
	std::vector<char> V1 = { 'n','s','n','s','n','s','n','s','n','s' };
	isValidWalk(V1) ? std::cout << "valid\n" : std::cout << "not valid\n";
	std::cout << std::endl;
	std::vector<char> V2 = { 'n','s' };
	isValidWalk(V2) ? std::cout << "valid\n" : std::cout << "not valid\n";
	std::cout << std::endl;
	std::vector<char> V3 = { 'n','s','n','s','n','s','n','s','n','s','n','s' };
	isValidWalk(V3) ? std::cout << "valid\n" : std::cout << "not valid\n";
	std::cout << std::endl;
	std::vector<char> V4 = { 'e','w','e','w','n','s','n','s','e','w' };
	isValidWalk(V4) ? std::cout << "valid\n" : std::cout << "not valid\n";
	std::cout << std::endl;
	std::vector<char> V5 = { 'n','s','e','w','n','s','e','w','n','s','e','w','n','s','e','w' };
	isValidWalk(V5) ? std::cout << "valid\n" : std::cout << "not valid\n";
	std::cout << std::endl;
	std::vector<char> V6 = { 'n','s','e','w','n','s','e','w','n','s' };
	isValidWalk(V6) ? std::cout << "valid\n" : std::cout << "not valid\n";
	std::cout << std::endl;
	std::vector<char> V7 = { 's','e','w','n','n','s','e','w','n','s' };
	isValidWalk(V7) ? std::cout << "valid\n" : std::cout << "not valid\n";
	std::cout << std::endl;
	std::vector<char> V8 = { 'n','s','n','s','n','s','n','s','n','n' };
	isValidWalk(V8) ? std::cout << "valid\n" : std::cout << "not valid\n";
	std::cout << std::endl;
	std::vector<char> V9 = { 'e','e','e','w','n','s','n','s','e','w' };
	isValidWalk(V9) ? std::cout << "valid\n" : std::cout << "not valid\n";
	std::cout << std::endl;
	system("pause");
	return 0;
}
