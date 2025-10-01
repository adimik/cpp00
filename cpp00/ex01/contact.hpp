/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:57:14 by didimitr          #+#    #+#             */
/*   Updated: 2025/10/01 10:59:54 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact {
private: 
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string number;
    std::string darkestSecret;

public:
    void setFirstName(const std::string& fn) { firstName = fn; }
    void setLastName(const std::string& ln) { lastName = ln; }
    void setNickname(const std::string& nn) { nickname = nn; }
    void setNumber(const std::string& n) { number = n; }
    void setDarkestSecret(const std::string& ds) { darkestSecret = ds; }

    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getNickname() const { return nickname; }
    std::string getNumber() const { return number; }
    std::string getDarkestSecret() const { return darkestSecret; }
};
