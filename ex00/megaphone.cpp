#include <iostream>
#include <string>

void	transform(int argc, char **argv)
{
	int 					it;
	std::string 			str;
	std::string::iterator 	begin;
	std::string::iterator	end;

	it = 1;
	while (it < argc)
	{
		str = argv[it];
		begin = str.begin();
		end = str.end();
		while (begin != end)
		{
			std::cout << (char)toupper(*begin);
			begin++;
		}
		std::cout << " ";
		it++;
	}
	std::cout << std::endl; 
}

int main(int argc, char **argv)
{
	std::string str;

	str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *"; 
	if (argc < 2)
		std::cout << str << std::endl;
	else
		transform(argc, argv);
	return (0);
}
