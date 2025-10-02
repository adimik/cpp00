/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 09:42:00 by didimitr          #+#    #+#             */
/*   Updated: 2025/10/02 20:02:40 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

#include "phonebook.hpp"
#include <sstream>

PhoneBook::PhoneBook() : index(0), contactCount(0) {}

void PhoneBook::addContact() {
    Contact c;
    std::string input;

    std::cout << "First name:";
    std::getline(std::cin, input);
    c.setFirstName(input);

    std::cout << "Last name:";
    std::getline(std::cin, input);
    c.setLastName(input);

    std::cout << "Nickname:";
    std::getline(std::cin, input);
    c.setNickname(input);

    std::cout << "Number:";
    std::getline(std::cin, input);
    c.setNumber(input);

    std::cout << "Darkest Secret:";
    std::getline(std::cin, input);
    c.setDarkestSecret(input);

    std::cout << "Contact added." << std::endl;

    contacts[index] = c;
    index = (index + 1) % 8;
    if (contactCount < 8)
        contactCount++;
}
void PhoneBook::searchContact() {
    if (contactCount == 0) {
        std::cout << "The phonebook is empty." << std::endl;
        return;
    }
    std::cout << "|" << printFormated("INDEX")
              << "|" << printFormated("FIRST NAME")
              << "|" << printFormated("LAST NAME")
              << "|" << printFormated("NICKNAME")
              << "|" << std::endl;
    for (int i = 0; i < contactCount; i++) {
        std::cout << "|" << printFormated(std::to_string(i))
                  << "|" << printFormated(contacts[i].getFirstName())
                  << "|" << printFormated(contacts[i].getLastName())
                  << "|" << printFormated(contacts[i].getNickname())
                  << "|" << std::endl;
    }
}
int PhoneBook::getContactCount() {
    return(contactCount);
}

std::string PhoneBook::printFormated(const std::string& text) {
    if (text.size() > 10) {
        return text.substr(0, 9) + ".";
    }
    std::ostringstream oss;
    oss << std::setw(10) << text;
    return oss.str();
}
void    PhoneBook::displayContact(unsigned int i) {
    if(contacts[i].getFirstName().empty())
    {
        std::cout << "Index is empty." << std::endl;
        return;
    }
    else 
    {
        std::cout << contacts[i].getNumber() << std::endl;
        std::cout << contacts[i].getDarkestSecret() << std::endl;
    }
};

int main(void)
{
    PhoneBook pb;
    std::string command;
    std::cout << "Hello, for using the phonebook use these commands: ADD, SEARCH, EXIT." << std::endl;
    while(std::getline(std::cin, command))
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, command);
        if(command == "ADD")
            pb.addContact();
        else if (command == "SEARCH")
        {    
            pb.searchContact();
            std::cout << "Insert the index for more data:" << std::endl;
            std::getline(std::cin, command);
            pb.displayContact(std::stoi(command));
        }
        else if (command == "EXIT")
            break;
        else 
            std::cout << "Unknown command. Use: ADD, SEARCH, EXIT." << std::endl;
    }
    return(0);
}