/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 06:50:58 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/18 11:46:45 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << "0";
	std::cout << "created" << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	this->_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index" << this->_accountIndex << ";";
	std::cout << "amount" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void    Account::_displayTimestamp(void)
{
	time_t		seconds_since_epoch;
    struct tm   *time;

    std::time(&seconds_since_epoch);
    time = localtime(&seconds_since_epoch);
    std::cout << "[";
    std::cout << time->tm_year + 1900;
    std::cout << std::setw(2) << std::setfill('0') << time->tm_mon + 1;
    std::cout << std::setw(2) << std::setfill('0') << time->tm_mday << "_";
    std::cout << std::setw(2) << std::setfill('0') << time->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << time->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << time->tm_sec;
    std::cout <<"] ";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "Withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ":";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amouont:" << this->_amount << ";";
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount" << this->_amount << ";";
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}

int	Account::checkAmount(void) const
{
	return (this->_amount > 0);
}
