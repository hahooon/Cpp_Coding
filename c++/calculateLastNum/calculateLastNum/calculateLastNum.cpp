#include <iostream>
#include <fstream>

int main() {
	FILE *inp;
	inp = fopen("input.txt", "r");
	int num = 0;
	int test_case = 0;
	fscanf(inp, "%d", &test_case);
	while (num < test_case) {
		++num;
		int cnt = 0;
		fscanf(inp, "%d", &cnt);
		int last_num = 1;
		for (int i = 0; i < cnt; ++i) {
			int a = 0;
			fscanf(inp, "%d", &a);
			last_num *= (a % 10);
			last_num = last_num % 10;
		}
		std::cout << last_num << std::endl;
	}
}