#include "Account.hpp"
#include <string>
#include <time.h>
#include <stdio.h>
#include <iostream>


int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _nbDeposits(0),_nbWithdrawals(0)
{
	_amount = initial_deposit; //init account
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;
	_totalNbDeposits += _nbDeposits;
	_totalNbWithdrawals += _nbWithdrawals;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" ;
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;

}

Account::~Account( void )
{
	_displayTimestamp();
	_nbAccounts-- ;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
/*	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;*/
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" ;
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" ;
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount + deposit << ";";
	std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
	_totalNbDeposits += _nbDeposits;
	_totalAmount += deposit;
	_amount += deposit;
}

bool Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" ;
	std::cout << "p_amount:" << _amount << ";";
	if (withdrawal > _amount)
		std::cout << "withdrawal:refused" << std::endl;
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount -= withdrawal;
		_totalNbWithdrawals += _nbWithdrawals;
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
	}
	return (true);
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts; 
}

int	Account::getTotalAmount( void )
{
	return _totalAmount; 
}

int Account::getNbDeposits( void )
{
	return _totalNbDeposits; 
}

int Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals; 
}

void Account::_displayTimestamp(void)
{
	time_t timep;
	time (&timep);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "%Y%m%d_%H%M%S", localtime(&timep));
	std::cout << "[" << tmp << "] ";	
	
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

int	Account::checkAmount( void ) const
{
	return _amount; 
}
