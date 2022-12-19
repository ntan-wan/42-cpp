#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
    std::string name_;
public:
    Zombie();
    ~Zombie();
    Zombie(std::string name);
    void    setName(std::string name);
    void    announce(void);
};

Zombie  *zombieHorde(int N, std::string name);
#endif