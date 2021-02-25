#include <iostream>
#include <string>

#include "phonebook.hpp"

int main(int argc, char **argv)
{
	std::string command;
	Phonebook phonebook;

	(void)argc;
	(void)argv;
	while (command.compare("EXIT"))
	{
		std::cout << "Enter a command: [ADD, SEARCH, EXIT]" << std::endl;
		std::cin >> command;
		if (!command.compare("ADD"))
			phonebook.addContact();
		else if (!command.compare("SEARCH"))
			phonebook.searchContact();
	}
	return (0);
}
