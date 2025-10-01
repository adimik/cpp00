/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:03:09 by didimitr          #+#    #+#             */
/*   Updated: 2025/10/01 15:19:47 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int index;
    int contactCount;
public:
    PhoneBook(): contactCount(0), index(0) {}
    void addContact() {
        Contact c;
        std::string input;
        
        std::cout << "First name:";
        std::getline(std::cin, input);
        c.setFirstName(input);

        std::cout << "Last name:";
        std:getline(std::cin, input);
        c.setLastName(input);
        
        std::cout << "Nickname:";
        std:getline(std::cin, input);
        c.setNickname(input);
        
        std::cout << "Number:";
        std:getline(std::cin, input);
        c.setNumber(input);
        
        std::cout << "Darkes Secret:";
        std:getline(std::cin, input);
        c.setDarkestSecret(input);
        
        contacts[index] = c;
        index = (index + 1) % 8;
        if(contactCount < 8)
            contactCount++;
    }
    void SearchContact() {
        if (contactCount == 0)
        {
            std::cout << "The phonebook is empty." << std::endl;
            return;
        }
        int i = 0;
        while(i < contactCount)
        {
            std::cout << "Index:" << i;
            std::cout << "First name:" << contacts[i].getFirstName();
            std::cout << "Last name:" << contacts[i].getLastName();
            std::cout << "Nickname:" << contacts[i].getNickname();
            std::cout << "Number:" << contacts[i].getNumber();
            std::cout << "Dark secret:" << contacts[i].getDarkestSecret();
            i++;
        }
    
    
    };
};