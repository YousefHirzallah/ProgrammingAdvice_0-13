#pragma once

#ifndef	CLSPERSON_HPP
# define	CLSPERSON_HPP

# include <iostream>
# include "../Include/CoreUtilities.hpp"
# include "../Include/InputValidator.hpp"
# include "../Include/StringUtils.hpp"

class	clsPerson
{

public:
			clsPerson(std::string Firstname, std::string Lastname, std::string Email, std::string PhoneNbr) 
			{
				_Firstname = Firstname;
				_Lastname = Lastname;
				_Fullname = Firstname + " " + Lastname;
				_Email = Email;
				_PhoneNbr = PhoneNbr;
			}


			clsPerson(std::string fullname ,std::string Email, std::string PhoneNbr) 
			{
				_Fullname = fullname;
				_Email = Email;
				_PhoneNbr = PhoneNbr;


				std::vector fullname_sections =  StringUtils::splitByDelim(fullname);
				_Firstname =  fullname_sections[0];
				_Lastname = fullname_sections[1];
			}


			void	setFirstname(std::string Firstname)
			{
				this->_Firstname = Firstname;
				setFullname();
			}


			void	setLastname(std::string Lastname)
			{
				this->_Lastname = Lastname;
				setFullname();
			}


			void	setFullname()
			{
				_Fullname = _Firstname + " " + _Lastname;
			}


			void	setEmail(std::string Email)
			{
				this->_Email = Email;
			}


			void	setPhoneNbr(std::string PhoneNbr)
			{
				this->_PhoneNbr = PhoneNbr;
			}


			std::string	Firstname()
			{
				return (_Firstname);
			}


			std::string	Lastname()
			{
				return (_Lastname);
			}


			std::string	Fullname()
			{
				return (_Fullname);
			}


			std::string	Email()
			{
				return (_Email);
			}


			std::string	PhoneNbr()
			{
				return (_PhoneNbr);
			}

			


private:

			std::string	_Firstname;
			std::string	_Lastname;
			std::string	_Fullname;
			std::string	_Email;
			std::string	_PhoneNbr;
};


# endif