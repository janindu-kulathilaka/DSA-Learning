#include <iostream>
#include <string.h>
using namespace std;

void search(char* pat, char* txt) {
	
	int m = strlen(pat);
	int n = strlen(txt);
	
	for (int i = 0; i <= n-m; i++ ){
		int j;	
		for (j = 0; j < m; j++){
			if (txt[i+j] != pat[j]){
				break;
			}
		}
		if (j == m) {
			cout << "Pattern found index start with " << i <<endl;
		}
	}
}

int main() {
	
	char* txt = "AABAACAADAABAABA";
	char* pattern = "AABA";
	
	search(pattern, txt);
	
	return 0;
}
