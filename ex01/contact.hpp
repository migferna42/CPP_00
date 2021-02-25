#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact{
	private:
		static const std::string fields_names[11];
		std::string fields_value[11];
	public:
		Contact(void);
		~Contact(void);
		std::string getValue(size_t index);
		void fillData();
		void showContact();
};

#endif
