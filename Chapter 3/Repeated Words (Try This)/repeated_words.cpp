#include <std_lib_facilities.h>

int main()
{
	string previous = " ";
	string current;
	while (cin >> current) {
		if (previous == current)
			cout << "Repeated Word: " << current << '\n';
		previous = current;
	}
}