//#include "Parent Account.h"
//#include "Branch.h"

class ATM :public branch
{
private:
	uint64_t Card_num, accc_ID;
	int n = 0,m=0;
 //  branch *branchs[100];
public:

	void Get_Debit_card_Data(branch *branchs[],int object_of_a_branch)
	{
		//	cout << "Please Enter you Card num " << endl;
		//cin >> Card_num;
		cout << " \n   " << endl;
		cout << "please Enter Your Card_ID " << endl;
		cin >> Card_num;
		bool temp = false;
		temp = branchs[n]->Check_account_statue(Card_num, branchs, object_of_a_branch);       //check if the acc is exist or not 
		if (temp == false){
			cout << " Opreation refused " << endl;
			exit(1);
		}
	}
			/* void balance_inquiry()
			 {

			 n--;

			 cout << "\n 'EGP Balance inquiry' " << endl;
			 cout << " Account : \n" << setw(18) << accc_ID << endl;
			 cout << " \n" << " Current Available : " << access_account[n]->Show_acc_balance(0)<< setw(5) << " EGP" << endl;
			 cout << "\n Thank You For Using ATM CASH 24 Services " << endl;
			 cout << " 1/5/2018" << setw(22) << " 1:58:18  A.M" << endl;
			 n++;
			 cout << "Your Balance is : " << endl;
			 }
			 void withdrawl()
			 {
			 n--;
			 double withdrawl_amount;
			 cout << "Please Enter withdrawl Amount : " << endl;
			 cin >> withdrawl_amount;
			 cout << " \n  " << endl;


			 cout << " \n  " << endl;
			 cout << "Card : " << Card_num << endl;
			 cout << "\n 'EGP Withdrawl' " << endl;
			 cout << " Account : \n" << setw(18) << accc_ID << endl;
			 cout << " \n" << " Current Available : " << access_account[n]->Show_acc_balance(0) << setw(5) << " EGP" << endl;
			 cout << " \n" << " Amount : " << withdrawl_amount << setw(5) << " EGP" << endl;

			 cout << " \n" << " Available After withdrawl : " << access_account[n]->Show_acc_balance(withdrawl_amount) << setw(5) << " EGP" << endl;
			 cout << access_account[n]->Show_acc_balance(0) << endl;
			 cout << "\n Thank You For Using ATM CASH 24 Services " << endl;
			 cout << " 1/5/2018" << setw(22) << " 1:58:18  A.M" << endl;

			 n++;
			 }
			 */
		
};