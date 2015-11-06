//Combinations of a string.
#include <iostream>
#include <sstream>

using namespace std;

void combinationsString(string word, string out, int start)
{
	for(int i = start; i < word.length(); i++)
	{
		out += word.at(i);
		cout << out << endl;
		combinationsString(word, out, i + 1); 
		out.erase(out.length() - 1, 1);
	}
}

int main(int argc, const char * argv[])
{
	combinationsString("abc", "", 0);
        //Output: a, ab, abc, ac, b, bc, c
	return 0;
}
