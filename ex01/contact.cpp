#include "contact.hpp"

const std::string Contact::fields_names[] = {
	"first name",
	"last name",
	"nickname",
	"login",
	"postal address",
	"email address",
	"phone number",
	"birthday date",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

Contact::Contact(void)
{
}

void	Contact::fillData()
{
	size_t 		it;
	std::string	value;

	it = -1;
	while (++it < 11)
	{
		std::cout << "Please enter your " << this->fields_names[it] << std::endl;
		std::cin >> value;
		this->fields_value[it] = value;
	}
}

std::string Contact::getValue(size_t index)
{
	return (this->fields_value[index]);
}

void Contact::showContact()
{
	size_t it;

	it = -1;
	while (++it < 11)
	{
		std::cout << this->fields_names[it] << ":" << this->fields_value[it] << std::endl;
	}
}

Contact::~Contact(void)
{
}
