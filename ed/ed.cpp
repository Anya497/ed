#include <iostream>
#include <string>


void days_counter(int day, int month, int year, std::time_t today) {
	tm tmp = tm();
	tmp.tm_mday = day;
	tmp.tm_mon = month - 1;
	tmp.tm_year = year - 1900;
	time_t birthday = mktime(&tmp);
	int days = (today - birthday) / 3600 / 24;
	std::cout << "difference = " << days << " days" << std::endl;
}


int main()
{
	int N;
	std::cout << "N = ";
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		int day, month, year;
		std::cout << "My birthday: ";
		std::cin >> day >> month >> year;
		time_t today = std::time(0);
		days_counter(day, month, year, today);
	}
}