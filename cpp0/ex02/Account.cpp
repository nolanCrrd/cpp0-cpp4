/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:22:05 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/11 14:22:17 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_amount = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "created\n";
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "created\n";
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << "amount:" << _amount << ";"
		<< "nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdraw)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";";
	if (_amount >= withdraw)
	{
		std::cout << "withdrawal:" << withdraw << ";";
		_totalAmount -= withdraw;
		_amount -= withdraw;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << "amount:" << _amount << ";"
			<< "nb_withdrawals:" << _nbWithdrawals << "\n";
		return (true);
	}
	std::cout << "withdrawal:refused" << "\n";
	return (false);
}

int	Account::getNbAccounts() {
	return (_nbAccounts);
}

int	Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

int	Account::getTotalAmount() {
	return (_totalAmount);
}

void	Account::_displayTimestamp() {
	std::time_t	now = std::time(NULL);
	std::tm		*local = std::localtime(&now);
	std::cout << "["
		<< local->tm_year + 1900;
	if (local->tm_mon < 10)
		std::cout << "0" << local->tm_mon + 1 << local->tm_mday;
	else
		std::cout << local->tm_mon + 1 << local->tm_mday;
	std::cout << "_";
	if (local->tm_hour < 10)
		std::cout << "0" << local->tm_hour;
	else
		std::cout << local->tm_hour;
	if (local->tm_min < 10)
		std::cout << "0" << local->tm_min;
	else
		std::cout << local->tm_min;
	if (local->tm_sec < 10)
		std::cout << "0" << local->tm_sec;
	else 
		std::cout << local->tm_sec;
	std::cout << "] ";
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
		<< "total:" << _totalAmount << ";"
		<< "deposits:" << _totalNbDeposits << ";"
		<< "withdrawals:" << _totalNbWithdrawals << "\n";
}

void	Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals << "\n";
}

int	Account::checkAmount() const {
	return (_amount);
}

Account::~Account()
{
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	_totalAmount -= _amount;
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "closed\n";
}

