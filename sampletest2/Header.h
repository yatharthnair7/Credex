#include<string>
#include<bits/stdc++.h>
using namespace std;


bool lengthchecker(string a) {
	int max = 15, min = 4;
	if (a.length() <= max && a.length() >= min) {
		return 1;
	}
	else return 0;
}
bool upperchecker(string s) {
	for (auto i : s) {
		if (isupper(i))	return 1;
	}
	return 0;
}

bool lowerchecker(string s) {
	for (auto i : s) {
		if (islower(i))	return 1;
	}
	return 0;
}

bool specialchecker(string s) {
	for (auto i : s) {
		if (i > 32 && i < 48) return 1;
	}
	return 0;
}

bool numericchecker(string s) {
	for (auto i : s) {
		if (i > 47 && i < 58) return 1;
	}
	return 0;
}