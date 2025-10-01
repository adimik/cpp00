/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:40:07 by didimitr          #+#    #+#             */
/*   Updated: 2025/09/30 15:27:41 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) 
{
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return(0);
    }
    int i;
    i = 1;
    for(int i = 1; argv[i]; i++)
    {
        for(int n = 0; argv[i][n]; n++)
        {
            argv[i][n] = toupper(argv[i][n]);
        }
        std::cout << argv[i];
    }
    std::cout << "\n";
  return 0;
} 
