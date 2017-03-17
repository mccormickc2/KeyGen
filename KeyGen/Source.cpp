#include <iostream>
#include "windows.h"
#include <string.h>
#include <intrin.h>
#include <stdio.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


void password1();
void password2();
void password3();
void password4();
void password5();

int main() 
{
	password1();
	password2();
	password3();
	password4();
	password5();
	cin.ignore();
	return 0;
}

void password1() 
{
	//password 1 key gen.
	char password[50];
	char hash[] = "ABCDEF123456";
	for (int i = 0; i < sizeof(hash) - 1; i++)
	{
		password[i] = hash[i] + 5;

	}
	printf("Password 1 = ");
	for (int i = 0; i < sizeof(hash) - 1; i++)
	{
		cout << password[i];
	}
	//CORRECT PASSWORD 1:	FGHIJK6789:;
}

void password2()
{
	//password 2 key gen.
	char password[50];
	char hash[] = "ARCHIEMILLER";
	for (int i = 0; i < sizeof(hash) - 1; i++)
	{
		password[i] = hash[i] - i;

	}
	printf("\nPassword 2 = ");
	for (int i = 0; i < sizeof(hash) - 1; i++)
	{
		cout << password[i];
	}
	//CORRECT PASSWORD 2:	AQAEE@GBDC;G
}

void password3()
{
	char password[50];
	char hash[] = "GO FLYERS!!!";

	for (int i = 0; i < sizeof(hash) - 1; i++)
	{
		password[i] = i ^ hash[i];
	}
	printf("\nPassword 3 = ");
	for (int i = 0; i < sizeof(hash) - 1; i++)
	{
		cout << password[i];
	}
	//CORRECT PASSWORD 3:	GN"EH\CU[(+*
}

void password4()
{
	TCHAR volumeName[MAX_PATH + 1] = { 0 };
	TCHAR fileSystemName[MAX_PATH + 1] = { 0 };
	DWORD serialNumber = 0;
	DWORD maxComponentLen = 0;
	DWORD fileSystemFlags = 0;
	if (GetVolumeInformation(
		("C:\\"),
		volumeName,
		ARRAYSIZE(volumeName),
		&serialNumber,
		&maxComponentLen,
		&fileSystemFlags,
		fileSystemName,
		ARRAYSIZE(fileSystemName)))
	{
		printf(("\nPassword 4 = %d"), serialNumber);
	}
	//CORRECT PASSWORD 4 (for my pc):	-20212840
}

/*
I was not 100% sure how to program this part.
I believe what needs to happen is the following:
(1) get the IPv4 address from the current PC.
(2) convert said IP address to a long integer in base hex.
(3) convert said long integer into a string.
(4) this string is the password for part 5.
*/
void password5()
{
	long ipv4 = 22866944740655;
	std::string address = "\nPassword 5 = " + std::to_string(ipv4);
	std::cout << address;

	//printf("\nOriginal = ");
	/*char pass[] = "14";
	long recover = strtol(pass, 0, 16);
	std::cout << recover;*/

}