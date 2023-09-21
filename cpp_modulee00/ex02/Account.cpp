#include "ACXXount.hpp"
#include <iostream>

int	ACXXount::_nbACXXounts = 0;
int	ACXXount::_totalAmount = 0;
int	ACXXount::_totalNbDeposits = 0;
int	ACXXount::_totalNbWithdrawals = 0;

ACXXount::ACXXount( int initial_deposit )
{
	_displayTimestamp();
	_aCXXountIndex = _nbACXXounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _aCXXountIndex << ";amount:" << _amount << ";created\n";
	_totalAmount += _amount;
}

ACXXount::~ACXXount( void )
{
	_displayTimestamp();
	std::cout << "index:" << _aCXXountIndex << ";amount:" << _amount << ";closed\n";
}
int	ACXXount::getNbACXXounts( void ){
	return (_nbACXXounts);
}

int	ACXXount::getTotalAmount( void ){
	return (_totalAmount);
}

int	ACXXount::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int	ACXXount::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	ACXXount::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _aCXXountIndex  << ";p_amount:" << _amount << ';';
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << '\n';
}
bool	ACXXount::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _aCXXountIndex  << ";p_amount:" << _amount << ';';
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
int	ACXXount::checkAmount( void ) const
{
	return (_amount);
}

void	ACXXount::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _aCXXountIndex << ";amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << '\n';
}

void	ACXXount::_displayTimestamp( void ){
	std::time_t currentTime = std::time(NULL);
    struct std::tm* timeInfo = std::localtime(&currentTime);
    char buffer[20]; 
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeInfo);

    std::cout << buffer << ' ';
}

void	ACXXount::displayACXXountsInfos( void )
{
	_displayTimestamp();
	std::cout << "aCXXounts:" << _nbACXXounts << ";total:" << _totalAmount << ';';
	std::cout << "deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << '\n';
}
