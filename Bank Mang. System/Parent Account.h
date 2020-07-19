#include <iostream>
#include <string>
#include <iomanip>
#include <atomic>
#include <ctime>
using namespace std;

class account {
private:
//	string acc_Date = " 25/4/2018";
	string acc_type;
    uint64_t acc_ID;
	uint64_t card_num_client;
	double acc_balance;
	      // save 2 generated id of Debit_Card & Account ID 
	uint64_t ID_acc[100];
	uint64_t Card_num[100];
  //  int counter;
	//int y;
	//uint64_t Saved_Generated_ID[100];
public :

		account();
		account(int balancee);
		void show_acc_info();
		bool Check_ID_ACC(uint64_t card_ID, int);
		virtual double Show_acc_balance(account a);
		virtual double Show_acc_balance(double amount);
		uint64_t Generate_ID_values();
		uint64_t Generate_Debit_Card_num();
		char* return_time();
};

