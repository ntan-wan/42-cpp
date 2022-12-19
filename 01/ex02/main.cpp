/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:44:37 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/19 12:11:39 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef std::string t_str;

void    printMemoryAddress(t_str str, t_str *strPTR, t_str &strREF)
{
    std::cout << "memory address" << "\n";
    std::cout << "str: " << &str << "\n";
    std::cout << "strPTR: " << strPTR << "\n";
    std::cout << "strREF: " << &strREF << std::endl;
}

void    printValue(t_str str, t_str *strPTR, t_str &strREF)
{
    std::cout << "value" << "\n";
    std::cout << "str: " << str << "\n";
    std::cout << "strPTR: " << *strPTR << "\n";
    std::cout << "strREF: " << strREF << std::endl;
}

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF = str;

    printMemoryAddress(str, strPTR, strREF);
    printValue(str, strPTR, strREF);
    return (0);
}