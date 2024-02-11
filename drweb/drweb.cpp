#include <iostream>
#include "includes.h"

int main()
{
	Dictionary<std::string, int> dict;

	dict.set("first", 1);
	dict.set("second", 2);
	dict.set("third", 3);

	std::string isSetResp = dict.is_set("first") ? "true" : "false";
	std::cout << "Have key for first: " << isSetResp << std::endl;

	try
	{
		int valueF = dict.get("first");
		std::cout << "Value of first key: " << valueF << std::endl;

		int valueS = dict.get("fourth");
		std::cout << "Value of fourth key: " << valueS << std::endl;
	}
	catch (const NFExc<std::string>& e)
	{
		std::cerr << "Key not found: " << e.get_key() << std::endl;
	}
}