


#ifndef CONTACT_HPP
#define CONTACT_HPP


#define MAX_CON 8

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
	private:
		int			Index;
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		int			get_index(void);
		std::string	get_first_n(void);
		std::string	get_last_n(void);
		std::string	get_nick_n(void);
		std::string	get_phone(void);
		std::string	get_secret(void);
		void		set_index(int number);
		void		set_first_n(std::string str);
		void		set_last_n(std::string str);
		void		set_nick_n(std::string str);
		void		set_phone(std::string str);
		void		set_secret(std::string str);
};

#endif
