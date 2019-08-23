#include <iostream>
#include <string>
#include <map>

int main() {
  int N;
  std::map<std::string, int> count; 

  std::cin >> N;
  std::cin.ignore();

  while(N--) {   
	std::string country, tmp;
	std::cin >> country;
	std::getline(std::cin, tmp);
	count[country] += 1;    
  }

  for (auto& p : count)
	std::cout << p.first << ' ' << p.second << '\n';
}
