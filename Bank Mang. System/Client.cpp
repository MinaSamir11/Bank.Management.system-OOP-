#include "client.h"
client :: client(int acc_no_branch, string branch_name)
{
	this->acc_num_of_branch = acc_no_branch;
	this->branch_name_belong_to_client = branch_name;
//	this->count = counter_of_object;
}
void client :: show_client_data()
{
	cout << "\n \nClient Name : " << this->client_name << endl;
	cout << "\nClient Phone Number : " << this->client_phone_No<< endl;
	cout << "\nClient Address : " << this->client_address << endl;
	cout << "\nAccount Number Of branch : " << this->acc_num_of_branch << endl;
	cout << "\nClient Belong To branch : " << this->branch_name_belong_to_client << endl;
}
