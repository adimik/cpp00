/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:03:09 by didimitr          #+#    #+#             */
/*   Updated: 2025/10/02 18:07:35 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

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
    PhoneBook();
    void addContact();
    void searchContact();
    std::string printFormated(const std::string& text);
    int  getContactCount();
    void displayContact(unsigned int i);
};

#endif