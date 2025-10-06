/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:16:51 by didimitr          #+#    #+#             */
/*   Updated: 2025/10/06 15:35:42 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
#include <string>
#include <cstdlib>


int main(void)
{
    PhoneBook pb;
    std::string command;
    std::cout << "Hello, for using the phonebook use these commands: ADD, SEARCH, EXIT." << std::endl;
    while(true)
    {
        std::cout << "Enter command: ";
        if (!std::getline(std::cin, command))
            break;
        if(command == "ADD")
            pb.addContact();
        else if (command == "SEARCH")
        {    
            pb.searchContact();
            if (pb.getContactCount() > 0) {
                std::cout << "Insert the index for more data:" << std::endl;
                std::getline(std::cin, command);
                pb.displayContact(atoi(command.c_str()));
            }
        }
        else if (command == "EXIT")
            break;
        else 
            std::cout << "Unknown command. Use: ADD, SEARCH, EXIT." << std::endl;
    }
    return(0);
}