/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 09:42:00 by didimitr          #+#    #+#             */
/*   Updated: 2025/10/06 15:43:55 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <sstream>
#include <iomanip>

PhoneBook::PhoneBook() : index(0), contactCount(0) {}

void PhoneBook::addContact() {
    Contact c;
    std::string input;

    std::cout << "First name: ";
    std::getline(std::cin, input);
    c.setFirstName(input);

    std::cout << "Last name: ";
    std::getline(std::cin, input);
    c.setLastName(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    c.setNickname(input);

    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    c.setNumber(input);

    std::cout << "Darkest secret: ";
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
        std::cout << "|" << printFormated(intToString(i))
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

std::string PhoneBook::intToString(int num) {
    std::ostringstream oss;
    oss << num;
    return oss.str();
}
void PhoneBook::displayContact(unsigned int i) {
    if (i >= static_cast<unsigned int>(contactCount)) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    if (contacts[i].getFirstName().empty()) {
        std::cout << "Contact is empty." << std::endl;
        return;
    }
    
    std::cout << "First name: " << contacts[i].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[i].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
    std::cout << "Phone number: " << contacts[i].getNumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[i].getDarkestSecret() << std::endl;
};
