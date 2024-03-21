/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: SarahLouise <SarahLouise@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/20 23:51:30 by SarahLouise   #+#    #+#                 */
/*   Updated: 2024/03/21 01:11:46 by SarahLouise   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cctype>
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
	// set _acountIndex using nbaccounts
	// number acount += 1;
	//  _amount is init_depo
	// total amount is += ini_depo
	// _nbdepos = 0
	// nbwith = 0

	// created bit for log
	// _displayTimestamp();
	// index, amount, created
}

// ---- destructor ---- //
Account::~Account()
{
	
	// closed part of log
	// _displayTimestamp();
	std::cout << "index:" <<_accountIndex << ";";
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
	// _displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}


void	Account::makeDeposit(int deposit)
{
	
}

bool	Account::makeWithdrawal(int withdrawal)
{
	
}

int		Account::checkAmount() const
{
	return (_amount);
}

void	Account::displayStatus() const
{
	// _displayTimestamp()
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}


// ---- priavte ---- //
// why you private? 
// [19920104_091532] ... er what
void	Account::_displayTimestamp()
{
}
