#include "Branch.h"
using namespace std;


branch::branch(){}
branch::branch(string path_branch_name, int ID_OF_branch)
{
	Branch_name = path_branch_name;
	ID_OF_Client_branch = ID_OF_branch;
}
void branch::Show_all_accounts_In_all_branchs(int Object_of_a_branch)
{
	for (int x = 0; x < num_of_client_in_branch; x++)
	{
		newclient[Object_of_a_branch][x]->show_client_data();
		create_account[Object_of_a_branch][x]->show_acc_info();
	}
	
}

	void branch :: Open_new_acc()
	{
		
		cout << "Enter Balance : ";
		cin >> balance; 
		create_account[Obj_in_a_branch][num_of_client_in_branch] = new account(balance);
 		newclient[Obj_in_a_branch][num_of_client_in_branch] = new client(ID_OF_Client_branch, Branch_name);
	//	store = Obj_in_a_branch;
		cout << "Enter The Name of The Client Holder : " << endl;
		cin.ignore();
		cin.getline(newclient[Obj_in_a_branch][num_of_client_in_branch]->client_name, 50);
		cout << "Enter The Phone Number: " << endl;
		cin >> newclient[Obj_in_a_branch][num_of_client_in_branch]->client_phone_No;
		cout << "Enter The Address Of Client: " << endl;
		cin.ignore();
		cin.getline(newclient[Obj_in_a_branch][num_of_client_in_branch]->client_address, 50);
		cout << "nnnAccount Created.." << endl; ;
		cout << "------------------------------------------------" << endl;
		num_of_client_in_branch++;
		f = num_of_client_in_branch;

	}
	bool branch::Check_account_statue(uint64_t card_id, branch *branchs[],int object_of_a_branch)
	{
		bool temp = false;
		int a;
		for (int x = 0; x < num_of_client_in_branch ; x++)
		{
			int n = x+1;
			if (x < num_of_client_in_branch)
				a = 0;
			if (n==num_of_client_in_branch)
				a = 5;
			
			temp=branchs[object_of_a_branch]->create_account[object_of_a_branch][x]->Check_ID_ACC(card_id,((a==5)?5:0));
			if (temp == true)
				return true;
				
		}
		return false;
	}

	//void branch ::transfer() 
	//{
	//	int transfer_acc_ID, transfer_amount;

	//	cout << "Enter ACC ID that you want to transfer" << endl;
	//	cin >> transfer_acc_ID;
	//	cout << "Enter amount that you want to tranfer" << endl;
	//	cin >> transfer_amount;
	//}
	//void branch:: Deposite()
	//{
	//	int Deposite_acc_ID, Deposite_amount;

	//	cout << "Enter ACC ID to Deposite on it" << endl;
	//	cin >> Deposite_acc_ID;
	//	account access_account;
	//	cout << " Avaliable :    " << access_account.Show_acc_balance(Deposite_acc_ID) << endl;
	//	cout << "Enter Amount that you want to Deposite " << endl;
	//	cin >> Deposite_amount;

	//}


