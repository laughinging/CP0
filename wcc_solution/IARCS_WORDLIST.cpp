// http://opc.iarcs.org.in/index.php/problems/WORDLIST

#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::string line;
    std::string word;

    std::set<std::string> word_set;

    getline(std::cin, line);

    char puncs[5] = {'\'', '.', ',', ';', ':'};
    while (N--) {
       getline(std::cin, line);
       std::transform(line.begin(), line.end(), line.begin(), ::tolower);
       for (int i=0; i<5; i++) std::replace(line.begin(), line.end(), puncs[i], ' ');

       std::istringstream iss(line);
       while (iss>>word) {
           word_set.insert(word);
       }
    }

    std::cout << word_set.size() << std::endl;
    for (std::set<std::string>::iterator it = word_set.begin(); it != word_set.end(); it++)
        std::cout << *it << std::endl;

    return 0;
}