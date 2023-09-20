#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
	_totalAmount += _amount;
}

Account::~Account( void )
{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}
int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void ){
	std::time_t currentTime = std::time(NULL);
    struct std::tm* timeInfo = std::localtime(&currentTime);
    char buffer[20]; 
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeInfo);

    std::cout << buffer << ' ' << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	while ()
}