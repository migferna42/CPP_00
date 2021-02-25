#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "contact.hpp"

class Phonebook
{
	private:
		size_t size;
		size_t index;
		Contact contacts[8];
	public:
		Phonebook();
		~Phonebook();
		size_t getSize(void);
		size_t getIndex(void);
		void addSize(void);
		void addIndex(size_t index);
		void addContact(void);
		void searchContact(void);
		void selectContact(void);
		void showList(void);
		void truncateInput(std::string str);
};

#endif
