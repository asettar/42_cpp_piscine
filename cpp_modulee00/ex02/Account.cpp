#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
	_totalAmount += _amount;
}

Account::~Account( void )
{
	_displayTimestamp();
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

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex  << ";p_amount:" << _amount << ';';
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << '\n';
}
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex  << ";p_amount:" << _amount << ';';
	if (withdrawal > _amount){
		std::cout << "withdrawal:refused\n";
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << '\n';
	return (true);
}
int	Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << '\n';
}

void	Account::_displayTimestamp( void ){
	std::time_t currentTime = std::time(NULL);
    struct std::tm* timeInfo = std::localtime(&currentTime);
    char buffer[20]; 
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeInfo);

    std::cout << buffer << ' ';
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ';';
	std::cout << "deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << '\n';
}
