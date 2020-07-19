#include <iostream>
#include <string>
using namespace std;

class client 
{
private :
	int count = 0;
public :
	int client_phone_No; int data, acc_num_of_branch;
	char client_address[50]; string branch_name_belong_to_client;
	
public:
	char client_name[50];
	client(){};
	client(int acc_no_branch, string branch_name);
	void show_client_data();
};