#include "phonebook.hpp"

Phonebook::Phonebook(void):size(0), index(0)
{
}

Phonebook::~Phonebook(void)
{
}

size_t	Phonebook::getSize(void)
{
	return (this->size);
}

size_t Phonebook::getIndex(void)
{
	return (this->index);
}

void	Phonebook::addSize(void)
{
	size_t	size;

	size = this->getSize();
	if (size < 8)
		this->size++;
}

void	Phonebook::addIndex(size_t _index)
{
	if (index >= 8)
		index = 7;
	this->index = _index;
}

void Phonebook::addContact(void)
{
	size_t index;

	index = this->getIndex();
	this->contacts[index].fillData();
	this->addIndex(++index);
	this->addSize();
}

void Phonebook::truncateInput(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << str << "|";
}

void Phonebook::selectContact()
{
	size_t index;

	std::cout << "Select index: " << std::endl;
	std::cin >> index;
	this->contacts[index].showContact();
}

void Phonebook::showList(void)
{
	size_t size;
	size_t it;

	it = -1;
	size = this->getSize();
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (++it < size)
	{
		std::cout << std::setw(10) << it << "|";
		this->truncateInput(this->contacts[it].getValue(0));
		this->truncateInput(this->contacts[it].getValue(1));
		this->truncateInput(this->contacts[it].getValue(2));
		std::cout << std::endl;
	}
	this->selectContact();
}

void Phonebook::searchContact(void)
{
	this->showList();
}
