


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
		int			GetIndex(void);
		std::string	GetFirst(void);
		std::string	GetLast(void);
		std::string	GetNick(void);
		std::string	GetPhone(void);
		std::string	GetSecret(void);
		void		SetIndex(int number);
		void		SetFirst(std::string str);
		void		SetLast(std::string str);
		void		SetNick(std::string str);
		void		SetPhone(std::string str);
		void		SetSecret(std::string str);
};

#endif
