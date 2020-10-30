// ConsoleApplication41.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



//Kedamawi Mulualem
//11/22/16
//Project 2: Multi-class
//  this double  reporter function accepts vector of BankHolder type variables (objects ) 
//and prints the account of people with all of the money in it and the sum of all the money 
//in each account type  and returns the sum of all the monet in the whole bank system at the end 
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Account
{
public:
	char acctType;
	double balance;
	string status;

};

class BankHolder
{
public:
	vector<Account> accts;
	string bankerName;


};


vector<BankHolder> bankers() {
	static vector<BankHolder> *lst = NULL;
	if (lst == NULL) {

		lst = new vector<BankHolder>;


		BankHolder *bhp = new BankHolder;
		bhp->bankerName = "Leigha Ekberg";

		Account *a = new Account;
		a->acctType = 'C';
		a->balance = 34.29;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Pearl Peshe";
		a = new Account;
		a->acctType = 'C';
		a->balance = 33.90;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);


		bhp = new BankHolder;
		bhp->bankerName = "Kermit Yann";
		a = new Account;
		a->acctType = 'S';
		a->balance = 453.92;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Jim Tyson";
		a = new Account;
		a->acctType = 'C';
		a->balance = -.47;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Joseph Steele";
		a = new Account;
		a->acctType = 'S';
		a->balance = 45780.02;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Mom and Pop, Inc.";
		a = new Account;
		a->acctType = 'B';
		a->balance = 230.05;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Jim McDonald";
		a = new Account;
		a->acctType = 'S';
		a->balance = 70.47;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);


		bhp = new BankHolder;
		bhp->bankerName = "Matthew Marks";
		a = new Account;
		a->acctType = 'S';
		a->balance = 7234.97;
		bhp->accts.push_back(*a);
		a = new Account;
		a->acctType = 'C';
		a->balance = 4.71;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);


		bhp = new BankHolder;
		bhp->bankerName = "UDC Foundation";
		a = new Account;
		a->acctType = 'B';
		a->balance = 89230.05;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Oscar Unger";
		a = new Account;
		a->acctType = 'C';
		a->balance = 10.05;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);


		bhp = new BankHolder;
		bhp->bankerName = "Dante Dern";
		a = new Account;
		a->acctType = 'C';
		a->balance = 74.48;
		bhp->accts.push_back(*a);
		a = new Account;
		a->acctType = 'S';
		a->balance = 29.99;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Jill Martin";
		a = new Account;
		a->acctType = 'S';
		a->balance = 11.0;
		lst->push_back(*bhp);


		bhp = new BankHolder;
		bhp->bankerName = "Rea Haislip";
		a = new Account;
		a->acctType = 'S';
		a->balance = 3474.48;
		bhp->accts.push_back(*a);
		a = new Account;
		a->acctType = 'C';
		a->balance = -2000.5;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);


		bhp = new BankHolder;
		bhp->bankerName = "Cellphones R Us, LLC";
		a = new Account;
		a->acctType = 'B';
		a->balance = 2.57;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Harry Tanner";
		a = new Account;
		a->acctType = 'S';
		a->balance = 11.0;
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Ezekiel Bryant";
		a = new Account;
		a->acctType = 'D';
		a->balance = 911.6;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);


		bhp = new BankHolder;
		bhp->bankerName = "Sonny Binghamton";
		a = new Account;
		a->acctType = 'S';
		a->balance = 8910.05;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Joe Richerson";
		a = new Account;
		a->acctType = 'S';
		a->balance = 2234.48;
		bhp->accts.push_back(*a);
		a = new Account;
		a->acctType = 'C';
		a->balance = -234.5;
		bhp->accts.push_back(*a);
		a = new Account;
		a->acctType = 'D';
		a->balance = 500.34;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Felix Katz";
		a = new Account;
		a->acctType = 'S';
		a->balance = 8911.0;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Perry Mason, plc";
		a = new Account;
		a->acctType = 'S';
		a->balance = 11.0;
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Yummy Foods";
		a = new Account;
		a->acctType = 'B';
		a->balance = 212.97;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Joe College";
		a = new Account;
		a->acctType = 'S';
		a->balance = 2.48;
		bhp->accts.push_back(*a);
		a = new Account;
		a->acctType = 'C';
		a->balance = 2.5;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Sally Saver";
		a = new Account;
		a->acctType = 'D';
		a->balance = 971.01;
		bhp->accts.push_back(*a);
		a = new Account;
		a->acctType = 'S';
		a->balance = 91.81;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Karl Checker";
		a = new Account;
		a->acctType = 'C';
		a->balance = 4971.01;
		bhp->accts.push_back(*a);
		a = new Account;
		a->acctType = 'D';
		a->balance = 501.81;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

		bhp = new BankHolder;
		bhp->bankerName = "Elaine Song";
		a = new Account;
		a->acctType = 'S';
		a->balance = 222.22;
		bhp->accts.push_back(*a);
		a = new Account;
		a->acctType = 'C';
		a->balance = 3334.34;
		bhp->accts.push_back(*a);
		a = new Account;
		a->acctType = 'D';
		a->balance = 555.5;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);


		bhp = new BankHolder;
		bhp->bankerName = "Gustavo Engelbrecht";
		a = new Account;
		a->acctType = 'B';
		a->balance = 1224.57;
		bhp->accts.push_back(*a);
		lst->push_back(*bhp);

	}
	return (*lst);
} //end of function




  //Beginning  of reporter function

double reporter(vector<BankHolder> kedamawi())
{
	double sum = 0; // the vecrtor to store the sum of all acounts.
	for (int counter = 0; counter < kedamawi().size(); counter++) {
		double total = 0; //variable to store the sum of each account.
		char w;//variable to store the account type of each element of an account .
		bool buss = false; //variable to  flag if the account is a Business account.
		bool neg = false;//variable to  flag if the account is a negative account.
		bool pend = false;//variable to  flag if the account is a  pending account.
		for (int s = 0; s < kedamawi()[counter].accts.size(); s++)
		{
			if (kedamawi()[counter].accts.at(s).acctType == 'B')
			{
				buss = true;
			}
			if (kedamawi()[counter].accts.at(s).balance < 0)
			{
				neg = true;
			}
		}

		if (kedamawi()[counter].accts.size() == 0)
		{
			pend = true; cout << "-" << kedamawi()[counter].bankerName << ":" << endl
				<< "             -Accounts are pending" << endl
				<< "----------------------------------------------------"
				<< endl;
		}
		if (neg && !buss)
		{
			cout << "*";
		}
		else if (buss)
		{
			cout << "+";
		}


		for (int l = 0; l < kedamawi()[counter].accts.size(); l++)
		{

			if (l == 0)
			{
				cout << kedamawi()[counter].bankerName << ":" << endl;
			}
			w = kedamawi()[counter].accts.at(l).acctType;
			if (w == 'D') //chakes if the account type is  D (certificate of deposit)
			{
				cout << "            ";
				if (kedamawi()[counter].accts.at(l).balance < 0) // chakes if the account is negative 
				{
					cout << "***";
				}
				cout << "certificate of deposit balance $" << kedamawi()[counter].accts.at(l).balance;
				if (kedamawi()[counter].accts.at(l).balance < 0)// chakes if the account is negative 
				{
					cout << "***";
				}
				cout << endl;
				total = total + kedamawi()[counter].accts.at(l).balance;
			}
			else if (w == 'C') //chakes if the account type is  C (Checking account)
			{
				cout << "            ";
				if (kedamawi()[counter].accts.at(l).balance < 0) // chakes if the account is negative 
				{
					cout << "***";
				} cout << "Checking account balance $" << kedamawi()[counter].accts.at(l).balance;
				if (kedamawi()[counter].accts.at(l).balance < 0) // chakes if the account is negative 
				{
					cout << "***";
				}; cout << endl;
				total = total + kedamawi()[counter].accts.at(l).balance;
			}
			else if (w == 'S')//chakes if the account type is  S (Saving account balance)
			{
				cout << "            ";
				if (kedamawi()[counter].accts.at(l).balance < 0) // chakes if the account is negative 
				{
					cout << "***";
				}cout << "Saving account balance $" << kedamawi()[counter].accts.at(l).balance;
				if (kedamawi()[counter].accts.at(l).balance < 0) // chakes if the account is negative 
				{
					cout << "***";
				}; cout << endl;
				total = total + kedamawi()[counter].accts.at(l).balance;
			}
			else if (w == 'B') //chakes if the account type is  B (Business account)
			{
				cout << "            ";
				if (kedamawi()[counter].accts.at(l).balance < 0) // chakes if the account is negative 
				{
					cout << "***";
				}
				cout << "Business account balance:$" << kedamawi()[counter].accts.at(l).balance;
				if (kedamawi()[counter].accts.at(l).balance < 0)// chakes if the account is negative 
				{
					cout << "***";
				};
				cout << endl;
				total = total + kedamawi()[counter].accts.at(l).balance;
			}
		}
		if (!pend) {
			if (neg && !buss) { cout << "*"; }
			else if (buss) { cout << "+"; }
			neg = false;
			buss = false;
			cout << "TOTAL BALANCE FOR: " << kedamawi()[counter].bankerName << ": $" << total << endl << "-----------------------------------------------------" << endl;//prints out the total for the non pendling accounts 
		}
		sum = sum + total;//keeps adding all the accounts .
	}return sum;
}
//end of reporter function

int main() {

	reporter(bankers);

	system("pause");
	return 0;
}

