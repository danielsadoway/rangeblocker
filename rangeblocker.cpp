#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

int createBlacklist (int AAA, int BBB) {

std::time_t uniqueSuffix = std::time(0);

std::ofstream myfile;
std::string filename = "blacklist_" + std::to_string(uniqueSuffix) + 
".csv";
myfile.open (filename);
    myfile << "Name,Given Name,Additional Name,Family Name,Yomi Name,Given Name Yomi,Additional Name Yomi,Family Name Yomi,Name Prefix,Name Suffix,Initials,Nickname,Short Name,Maiden Name,Birthday,Gender,Location,Billing Information,Directory Server,Mileage,Occupation,Hobby,Sensitivity,Priority,Subject,Notes,Language,Photo,Group Membership,Phone 1 - Type,Phone 1 - Value";
    myfile << std::endl;

for (int i=0; i<10; i++) {
	for (int j=0; j<10; j++) {
		myfile << std::endl;
		myfile << "Spam" << uniqueSuffix << i << j << " Spam,Spam" << uniqueSuffix << i << j << ",,Spam,,,,,,,,,,,,,,,,,,,,,,,,,* myContacts,,";
		for (int k=0; k<10; k++) {
			for (int l=0; l<10; l++) {
				myfile << "(" << AAA << ") " << BBB << "-" << i << j << k << l << " ::: ";
			}
		}
	}
}
myfile.close();
return 0;
}

int main () {

int AAA, BBB;
std::cout << "(AAA) BBB - XXXX" << std::endl;
std::cout << "Enter area code (AAA, numbers only): ";
std::cin >> AAA;
std::cout << "\nEnter 3-digit prefix (BBB, numbers only): ";
std::cin >> BBB;

createBlacklist(AAA, BBB);
}
