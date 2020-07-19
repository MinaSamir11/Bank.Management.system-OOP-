#include "Client.h"
#include "Parent Account.h"


class branch : public account,client
{
private:
	string Branch_name, Branch_address;
	int Branch_ID, Obj_in_a_branch = 0, num_of_client_in_branch = 0, ID_OF_Client_branch;
	int  balance = 0;
public :
	 int f ;
	client *newclient[100][100];
	account *create_account[100][100];
	branch();
	branch( string path_branch_name, int ID_OF_branch );
	void Open_new_acc();
	bool Check_account_statue(uint64_t card_id, branch *branchs[], int);
    int return_num_of_client();
	void Show_all_accounts_In_all_branchs(int Object_of_a_branch);
	void transfer();
	void Deposite();
};