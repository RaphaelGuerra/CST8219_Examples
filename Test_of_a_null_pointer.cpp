#include <iostream>;
#include <string.h>;

using namespace std;

int length(const char *s) {
	if (s) {
		const char* t = s;
		while (*t != '\0') {
			t++; // The difference of two pointers is an integer
		}return t - s;
	}
	else {
		return 0; // the pointer was null
	}
}
int main(int argc, char** argv) {
	const char* s = 0;
	cout << length(s) << '\n';
	s =  "It’s not personal, it’s business";
	cout << length(s) << '\n';
}