/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: SarahLouise <SarahLouise@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/20 23:51:30 by SarahLouise   #+#    #+#                 */
/*   Updated: 2024/03/24 18:23:12 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cctype>
# include <ctime>
# include <cstring>
# include "../include/Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// ---- constructors ---- //
Account::Account(){}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;

	_amount = initial_deposit;
	_totalAmount += initial_deposit;

	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

// ---- destructor ---- //
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}


// ---- getters ---- //
int		Account::getNbAccounts()
{
	return (_nbAccounts);
}

int		Account::getTotalAmount()
{
	return (_totalAmount);
}

int		Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

// ---- public ---- //
void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}


void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits += 1;
	_totalNbDeposits += 1;
	_totalAmount += deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount + deposit << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;

	this->_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->_amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << _amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_totalAmount -= withdrawal;

		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << _amount<< ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount - withdrawal << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;

		this->_amount -= withdrawal;
		return (true);
	}
}

int		Account::checkAmount() const
{
	return (_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}


// ---- priavte ---- //
void	Account::_displayTimestamp()
{
	time_t		now = time(0);
	struct tm	*localTime = localtime(&now);

	char		buffer[80];

	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", localTime);	
	std::cout << buffer;
}
