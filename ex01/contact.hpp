/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:57:14 by didimitr          #+#    #+#             */
/*   Updated: 2025/10/06 15:22:25 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
private: 
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string number;
    std::string darkestSecret;

public:
    void setFirstName(const std::string& fn);
    void setLastName(const std::string& ln);
    void setNickname(const std::string& nn);
    void setNumber(const std::string& n);
    void setDarkestSecret(const std::string& ds);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getNumber() const;
    std::string getDarkestSecret() const;
};

#endif
