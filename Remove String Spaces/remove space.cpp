#include<iostream>
#include<string>
using namespace std;

std::string no_space(const std::string& x)
{
	string result = "";
	for (int i = 0; i < x.size(); i++)
	{                                   //x.erase(std::remove(x.begin(), x.end(), ' '), x.end());
		if (x[i] == ' ')
			continue;
		else
			result += x[i];
	}
	return result;
}

int main()
{
	cout << no_space("shhh kk lltt  uu");
	return 0;
}