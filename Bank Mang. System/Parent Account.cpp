#include "Parent Account.h"
account::account() : acc_ID(0), acc_balance(0){};
account::account(int balancee)
{
	acc_ID = Generate_ID_values();
	card_num_client = Generate_Debit_Card_num();
	acc_balance = balancee;
//	counter = Show_number_of_created_account();
//	cout << counter << endl;
//	Save_Sum_of_Genrated_ID(acc_ID,card_num_client);
//	Saved_Generated_ID
//	Show_Genrated_ID();
}
bool account::Check_ID_ACC(uint64_t card_ID,int a )
{
	if (this->card_num_client == card_ID)
	{
		cout << " Account is found " << endl;
		return true;
	}
	else if (a == 5 && this->card_num_client != card_ID)
	{
		cout << " account is not in our Database" << endl;
		return false; 
	}
	
	return false;
}
	void account :: show_acc_info()
	{
		cout << "\nYour acc_ID : " << this->acc_ID << endl;
		cout << "\nYour Card Number Of Debit Card is : " << this->card_num_client << endl ;
		cout << "\nYour new Balance : " << this->acc_balance << endl;
		cout << "\nYour account was Created : " << return_time() << endl;
		cout << "------------------------------------------------" << endl;
		
	}

	 double account::Show_acc_balance(account)
	{
		return this->acc_balance;
	}

	 double account:: Show_acc_balance(double amount)
	{
		if (amount > this->acc_balance) {
			cout << "Error: Deducted amount is greater than account balance" << endl;
			return NULL;
		}

		return this->acc_balance -= amount;
	}
	 uint64_t account :: Generate_ID_values()
	 {
	       static int x = -1;
		static int y = x+1;
			 static std::atomic<uint64_t> i;
			 for (; x < y; x++){
				 ID_acc[y] = 15154445553339+i++;
			 }
			 y++;
			 return ID_acc[x];
	 }
	 uint64_t account::Generate_Debit_Card_num()
	 {
		 static int x = -1;
		 static int y = x + 1;
		 static std::atomic<uint64_t> i;
		 for (; x < y; x++){
			 Card_num[y] = 55559666817778 + i++;
		 }
		 y++;
		 return Card_num[x];
	 }



	char*  account::return_time()
	 {
		 // current date/time based on current system
		 time_t now = time(0);
		 // convert now to string form
		 char* dt = ctime(&now);
		 return dt;
		 
	 }