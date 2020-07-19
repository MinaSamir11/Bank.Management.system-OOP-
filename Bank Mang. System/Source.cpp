#include "Branch.h"
#include "ATM Operations.h"
static int x = 0;
int main(){
	//	char x;
	//	int y,n=1,c=0;
	//	char choice ='y';
	//	cout << "a- ATM Opeartions \nb- exit  " << endl;
	//	cin >> x;
	//	switch (x)
	//	{
	//	case 'a': 
	//		 do {
	//			 if (choice == 'c')
	//			 {
	//				 c++;
	//			//	 c1[c] = new client(); 
	//			//	 c1[c]->Get_Debit_card_Data();
	//				
	//			 }
	//			 cout << "1- Balance inquiry \n2- Withdrawl \n3- Transfer " << endl;
	//			 cin >> y;
	//			
	//					  if (y == 1)
	//					  {
	//						  if (n == 0)
	//						  {
	//							//  c1[c]->balance_inquiry();
	//						  }
	//						  else
	//						  {
	//							  //  c1[c] = new client();
	//							//  c1[c]->Get_Debit_card_Data();
	//							 // c1[c]->balance_inquiry();
	//							  n = 0;
	//							  
	//						  }
	//						  
	//					  }
	//
	//					  else if (y==2)
	//					  {
	//						  if (n != 0)
	//						  {
	//							/*  c1[c] = new client();
	//							  c1[c]->Get_Debit_card_Data();
	//							  c1[c]->withdrawl();*/
	//							  n = 0;
	//						  }
	//						  else 
	//						  {
	//						//	 c1[c]->withdrawl();
	//						  }
	//						  
	//					  }
	//					  else if (y==3)
	//					  {
	//
	//					  }
	//					  cout << "Do you want to get back or exit or Check anthor Account (y/n/c)" << endl;
	//					  cin >> choice;
	//
	//		} while (choice == 'y'| choice == 'c');
	//			break;
	//		
	//	case 'b': cout << "Thank u" << endl;
	//		break;
	//	default: cout << "invalid input Thank U bye bye" << endl;
	//	}
	//	
	//	// c1.balance_inquiry();
	//	cout << "\n \n \n " << endl;
	//	//c1.withdrawl();
	//	cout << "\n \n \n " << endl;
	////	c1.balance_inquiry();
	//	//  c1.Deposite();  
	//	cout << "\n \n \n " << endl;
	////	  c1.transfer();
	//
	string branch_name;
	int id, count = 0;
	branch *branches[100];
	cout << "Enter branch Name " << endl;
	cin >> branch_name;
	cout << " Enter Branch ID" << endl;
	cin >> id;
	
	char a,b;
	// loop for creating new accounts in different branchs
	for (; x < 100; x++)
	{
		branches[x] = new branch(branch_name, id);
		cout << " welcome Branch " << branch_name << endl;
		cout << "Do you want to Open  account  y/n" << endl;
		cin.ignore();
		cin >> b;
		if (b == 'y')
		{
			do{
				
				branches[x]->Open_new_acc();
				cout << "Do you want to Open anthor account y/n" << endl;
				cin >> a;
			} while (a == 'y');
			
		}

		else 
		{
			x--;
			break;
			count++;
			cout << "to you want to transfer to log in anthor branch " << endl;
		}
		 
	}
	  
	// loop for showing existing account in all  branches  database   
	
		for (int y=0; y <= count; y++){

			branches[y]->Show_all_accounts_In_all_branchs(count);

		}
	ATM obj;
	obj.Get_Debit_card_Data(branches,x);	
	cout << "Good bye " << endl;
	return 0;
}
