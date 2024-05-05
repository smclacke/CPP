/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 17:04:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 17:26:04 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Character.hpp"

// default
Character::Character()
{
	std::cout << "Character Default Constructor called" << std::endl;
}

// parameterised constructor
Character::Character(std::string name) : _name(name)
{
	std::cout << "Character parameterised constructor called" << std::endl;
	std::cout << "Character: " << _name << " created" << std::endl;
	
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

// copy constructor
Character::Character(const Character &copy) : _name(copy.getName() + "_copy")
{
	std::cout << "Character Copy Constructor called" << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		if ((copy._inventory)[i])
			(this->_inventory)[i] = (copy._inventory[i]->clone());
	}
	
	std::cout << "Character " << copy._name << " copied creating " << _name << "clone " << std::endl;
}

// copy assignment operator // can't change name cause const
Character	&Character::operator=(const Character &copy)
{
	std::cout << "Character Copy assignment operator called" << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (copy._inventory[i])
			this->_inventory[i] = (copy._inventory[i])->clone();
	}
	return *this;
}

// destructor
Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}


// methods
void	Character::equip(AMateria *materia)
{
	int	i = 0;
	
	if (!materia)
	{
		std::cout << this->_name << " can't equip nothing" << std::endl;
		return ;
	}
	while ((this->_inventory)[i] > 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->_name << " can't equip more than 4 Materia" << std::endl;
		return ;
	}
	(this->_inventory)[i] = materia;

	std::cout << this->_name << " equipt materia" << materia->getType() << " in slot number " << i << std::endl;
		
}

void	Character::unequip(int i)
{
	if (i < 0 || i >= 4)
		std::cout << this->_name << " can't unequip nothing or too more than 4 Materia" << std::endl;
	else if (!(this->_inventory)[i])
		std::cout << this->_name << " has nothing to unequip" << std::endl;
	else
	{
		AMateria	*materiaType = (this->_inventory)[i];
		(this->_inventory)[i] = 0;
		std::cout << this->_name << " unequipped " << materiaType->getType() << std::endl;
	}
}

void	Character::use(int i, ICharacter &target)
{
	std::string	name = this->getName();

	if (i < 0 || i >= 4 || !(this->_inventory)[i])
	{
		std::cout << "no Materia found to use" << std::endl;
		return ;
	}
	std::cout << name;
	((this->_inventory)[i])->use(target);
}



// getters
std::string const	&Character::getName() const
{
	return this->_name;
}

AMateria	*Character::getMateria(int i)
{
	return (this->_inventory)[i];
}
