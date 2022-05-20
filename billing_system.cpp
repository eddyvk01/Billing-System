#include<bits/stdc++.h>
#include<fstream>
#include<conio.h>

using namespace std;

class shopping
{
	private:
		  int pcode;
		  float price;
		  float dis;
		  string pname;
		  
		  public:
		  	 void menu();
		  	 void admin();
		  	 void buyer();
		  	 void add();
		  	 void edit();
		  	 void rem();
		  	 void list();
		  	 void receipt();
		  	 void admin_list();
};

void shopping:: menu(){
	m:
	int choice;
	string email;
	string passward;
	
	cout<<"\t\t\t=====================================================================\n";
	cout<<"\t\t\t                                                                     \n";
	cout<<"\t\t\t                  Supermarket Main Menu                              \n";
	cout<<"\t\t\t                                                                     \n";
   	cout<<"\t\t\t=====================================================================\n";
	cout<<"\t\t\t                                                                     \n";
	cout<<"\t\t\t\t|         1.)  Admistrator      |\n";
	cout<<"\t\t\t\t|                               |\n";
	cout<<"\t\t\t\t|         2.)  Buyer            |\n";
	cout<<"\t\t\t\t|                               |\n";
	cout<<"\t\t\t\t|         3.)  Exit             |\n";
	cout<<"\t\t\t\t|                               |\n";
	cout<<"\n\t\t\t  Please enter your choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			{
			cout<<endl<<"\t\t\t=====================================================================\n";
			cout<<"\t\t\t                                                                     \n";
			cout<<"\t\t\t                       -----|  Login  |-----                       \n";
			cout<<"\t\t\t                                                                     \n";
         	cout<<"\t\t\t=====================================================================\n";
        	cout<<"\t\t\t                                                                     \n";

			cout<<"\t\t\t    Enter Email      : ";
			cin>>email;
			passward ="";
            char ch;
			cout<<"\t\t\t    Password         : ";
		    ch = getch();
            while(ch != 13){//character 13 is enter
            passward.push_back(ch);
            cout << '*';
            ch = getch();
   }
			
			if(email=="eddy@email.com" && passward=="eddy@123")
			{
				system("cls");
				admin();
			}
			else{
				cout<<"\n\t\t\t\t***| Invalid Email and Password  |***\n\n";
				getch();
				system("cls");
			}
			break;
		    }
		case 2:
			{
				buyer();
				break;
			}
		case 3:
			{
				exit(0);
				break;
			}
		default:
		   {
		   	 cout<<"Pleasee select from the given options";
		   	 break;
			}	
	}
goto m;
}

void shopping:: admin(){
	
	m:	
	//system("cls");
	int choice;
	cout<<endl<<"\t\t\t=====================================================================\n";
	cout<<"\t\t\t                                                                     \n";
	cout<<"\t\t\t                   -----|  Admin Menu  |-----                       \n";
    cout<<"\t\t\t                                                                     \n";
   	cout<<"\t\t\t=====================================================================\n";
	cout<<"\n\t\t\t\t|                                    |";
	cout<<"\n\t\t\t\t|_______1) Add the product___________|";
	cout<<"\n\t\t\t\t|                                    |";
	cout<<"\n\t\t\t\t|_______2) Modify the product________|";
	cout<<"\n\t\t\t\t|                                    |";
	cout<<"\n\t\t\t\t|_______3) Delete the product________|";
	cout<<"\n\t\t\t\t|                                    |";
	cout<<"\n\t\t\t\t|_______4) List of the Product_______|";
	cout<<"\n\t\t\t\t|                                    |";
	cout<<"\n\t\t\t\t|_______5) Back to the Main Menu_____|";
	cout<<"\n\t\t\t\t|                                    |";
	cout<<"\n\n\t Please enter your choice : ";
	cin>>choice;
	
	switch(choice){
		case 1:
			add();
			break;
		case 2:
			 edit();
			 break;
		case 3:
			rem();
			break;
			
		case 4:
			admin_list();
			break;
		case 5:
			system("cls");
			menu();
			break;
		default:
			cout<<"\t\tInvalid choice!"<<endl;
			cout<<"\n\n Press any key to go back to Admin Main Menu....";
	        getch();
	        system("cls");
	}
	
	goto m;
}

void shopping:: buyer()
{
	m:
	int choice;
	cout<<endl<<"\t\t\t=====================================================================\n";
	cout<<"\t\t\t                                                                     \n";
	cout<<"\t\t\t                   -----|  Buyer  |-----                       \n";
    cout<<"\t\t\t                                                                     \n";
   	cout<<"\t\t\t=====================================================================\n\n";
	cout<<"\t\t\t                 1) Buy Product      \n";
	cout<<"                                           \n";
	cout<<"\t\t\t                 2) Go back         \n\n";
	cout<<"\t\t\t Enter your choice :  ";
	
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			receipt();
			break;
		case 2:
			system("cls");
			 menu();
			 break;
		default:
			cout<<"\n\t\t\t\t***| Invalid choice  |***\n\n";
			getch();
			system("cls");
   }

goto m;
}

void shopping:: add(){
	
	m:
	fstream data;
	int c;
	int token=0;
	float p;
	float d;
	string n;
	
	cout<<"\n\n\t\t\t----------| Add new product |-------------";
	cout<<"\n\n\t Product code of the product : ";
	cin>>pcode;
	cout<<"\n\n\t Name of the product        :  ";
	cin>>pname;
	cout<<"\n\n\t Price of the product       :  ";
	cin>>price;
	cout<<"\n\n\t Discount on product        :  ";
	cin>>dis;
	
	data.open("database.txt", ios::in);
	
	if(!data)
	{
		data.open("database.txt", ios::app|ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
		data.close();
	}
	else
	{
		data>>c>>n>>p>>d;
		
		while(!data.eof()){
			if(c==pcode)
			{
				token++;
			}
			data>>c>>n>>p>>d;
		}
		data.close();
	
	if(token==1)
	{
		cout<<"\n\n\t\t --***| Please Enter Valid Product code..this Product code already exist. |***---\n";
		goto m;
	}
	else{
		data.open("database.txt", ios::app|ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
		data.close();
	}
}
	cout<<"\n\n\t\t ----*| Record inserted |*-----\n";
	cout<<"\n\n Press any key to go back to Admin Main Menu....";
	getch();
	system("cls");
}

void shopping::edit(){
	
	fstream data,data1;
	int pkey;
	int token=0;
	int c;
	float p;
	float d;
	string n;
	
	cout<<"\n\n\t\t\t----------| Modify the Record |-------------";
	cout<<"\n\n\t\t\t Product code : ";
	cin>>pkey;
	
	data.open("database.txt", ios::in);
	if(!data)
	{
		cout<<"\n\n File Doesn't Exist! ";
	}
	else{
		data1.open("database1.txt", ios::app|ios::out);
		
		data>>pcode>>pname>>price>>dis;
		while(!data.eof()){
			if(pkey==pcode)
			{
				cout<<"\n\t\t Product new code    : ";
				cin>>c;
				cout<<"\n\t\t Name of the Product : ";
				cin>>n;
				cout<<"\n\t\t Price    : ";
				cin>>p;
				cout<<"\n\t\t Discount : ";
				cin>>d;
				data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
	            cout<<"\n\n\t\t ----*| Record Edited |*-----\n";
				token++;
				cout<<"\n\n Press any key to go back to Admin Main Menu....";
	            getch();
	            system("cls");
			}
			else
			{
				data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
			}
			data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close();
		
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0)
		{
			cout<<"\n\n Sorry! Record not found ";
			cout<<"\n\n Press any key to go back to Admin Main Menu....";
	        getch();
	        system("cls");
		}
	}
	
}

void shopping:: rem()
{
	fstream data, data1;
	int pkey;
	int token=0;
	cout<<"\n\n\t\t\t----------| Delete Product |-------------";
	cout<<"\n\n\t    Product Code : ";
	cin>>pkey;
	data.open("database.txt", ios::in);
	if(!data)
	{
		cout<<"File Doesn't Exist ";
	}
	else{
		data1.open("database1.txt", ios::app| ios::out);
		data>>pcode>>pname>>price>>dis;
		while(!data.eof())
		{
			if(pcode==pkey)
			{
				cout<<"\n\n\t Product deleted Succesfully! ";
				token++;
				cout<<"\n\n Press any key to go back to Admin Main Menu....";
	            getch();
	            system("cls");
			}
			else
			{
				data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
			}
		data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close();
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0)
		{
			cout<<"\n\n Sorry! Record not Found";
			cout<<"\n\n Press any key to go back to Admin Main Menu....";
	        getch();
	        system("cls");
		}
	}
}

void shopping:: list()
{
	system("cls");
	fstream data;
	data.open("database.txt", ios::in);
		cout<<"\n\n\t\t\t----------| Product List|-------------";

	cout<<"\n\n=======================================================================================\n";
	cout<<"proNo\t\tName\t\tPrice\n";
	cout<<"\n=======================================================================================\n";
	data>>pcode>>pname>>price>>dis;
    while(!data.eof()){
    	cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
		data>>pcode>>pname>>price>>dis;
	}
	data.close();
}

void shopping::admin_list()
{
	system("cls");
	fstream data;
	data.open("database.txt", ios::in);
		cout<<"\n\n\t\t\t----------| Product List|-------------";

	cout<<"\n\n=======================================================================================\n";
	cout<<"proNo\t\tName\t\tPrice\n";
	cout<<"\n=======================================================================================\n";
	data>>pcode>>pname>>price>>dis;
    while(!data.eof()){
    	cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
		data>>pcode>>pname>>price>>dis;
	}
	data.close();
	cout<<"\n\n Press any key to go back to admin Main Menu...."; 
    getch();
    system("cls");
	
	
}

void shopping:: receipt()
{
	fstream data;
	int arrc[100];
	int arrq[100];
	char choice;
	int c=0;
	float amount=0;
	float dis=0;
	float total=0;
	
	data.open("database.txt", ios::in);
	if(!data){
		cout<<"\n\nEmpty database";
	}
	else{
		data.close();
		
		list();
		cout<<"\n\n\n\t\t===========================================\n";
		cout<<"                                          \n";
		cout<<"\t\t        Please Place the order             \n";
		cout<<"                                           \n";
		cout<<"\t\t===========================================\n";
		do{
			m:
		  cout<<"\n\nEnter Product Code : ";
		  cin>>arrc[c];
		  cout<<"\n\nEnter the Quantity : ";
		  cin>>arrq[c];
		  for(int i=0; i<c;i++)
		  {  if(arrc[c]==arrc[i])
		    {
		  	cout<<"\n\n Duplicate Product Code. Please Try Again!";
		  	goto m;
		    }
		  }
		  c++;
		  cout<<"\n\n Do you want to buy another product? if yes then press y or else n  :";
		  cin>>choice;
		}while(choice == 'y');
		system("cls");
		cout<<"\n\n\t\t\t==============================| RECEIPT |==============================\n";
		cout<<"\nProduct no\tProduct Name\tProductQuantity\tPrice \tAmount\tAmount with discount\n ";
        
        for(int i=0; i<c; i++)
        {
        	data.open("database.txt", ios::in);
        	data>>pcode>>pname>>price>>dis;
        	while(!data.eof()){
        		if(pcode==arrc[i])
        		{
        			amount=price*arrq[i];
        			dis=amount-(amount*dis/100);
        			total=total+dis;
        			cout<<endl<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t"<<amount<<"\t\t"<<dis;
        		}
   				data>>pcode>>pname>>price>>dis;
			}
		}
         data.close();
	}
	
cout<<"\n\n==============================================";
cout<<"\n Total Amount : "<<total;
cout<<"\n-------------------------------";
cout<<"\n\n Press any key to go back to Buyer Main Menu....";
getch();
system("cls");

}

int main()
{  
  shopping s;
  s.menu();
  return 0;
}
