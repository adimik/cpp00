/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:21:09 by didimitr          #+#    #+#             */
/*   Updated: 2025/10/06 15:23:09 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setFirstName(const std::string& fn) { firstName = fn; }
void Contact::setLastName(const std::string& ln) { lastName = ln; }
void Contact::setNickname(const std::string& nn) { nickname = nn; }
void Contact::setNumber(const std::string& n) { number = n; }
void Contact::setDarkestSecret(const std::string& ds) { darkestSecret = ds; }

std::string Contact::getFirstName() const { return firstName; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getNumber() const { return number; }
std::string Contact::getDarkestSecret() const { return darkestSecret; }