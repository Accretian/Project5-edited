#include <iostream>
#include <cstring>



char symbcheck(char symb) {
	if (std::strchr("bfpv", symb))
		return '1';
	if (std::strchr("cgjkqsxz", symb))
		return '2';
	if (std::strchr("dt", symb))
		return '3';
	if (std::strchr("l", symb))
		return '4';
	if (std::strchr("mn", symb))
		return '5';
	if (std::strchr("r", symb))
		return '6';
	else return '0';

}

int main() {
	std::string str, out;

	std::cin >> str;
	out.push_back(str[0]);

	for (int i = 1; i != str.length(); i++) {
		char symb1 = symbcheck(str[i]);
		if (symb1 != out.back() && symb1 != '0' && (int)out.length() < 4)
			out.push_back(symb1);
	}

	while (out.length() < 4)
		out.push_back('0');

	std::cout << out;

}