#include<iostream>
#include<iomanip>
#include<conio.h>
#include<windows.h>
using namespace std;

void loading()
{
	char c=219;
	cout<<"\n\n\n\n\n\n                         # WELCOME TO MARYA'S PROJRCT #";
	cout<<"\n\n\n\n\n\n                                     loading\n                         ";
	for(int i=1; i<=30; i++)
	{
		cout<<c;
		Sleep(200);
	}
}
	void stars()
	{
		for(int st=0; st<=77; st++)
			{
				cout<<"*";
			}
	};
	void line()
	{
		for(int line=0; line<=77; line++)
			{
				cout<<"_";
			}
	};
	int main()
{	string name, lastname;
	int choice, op, ans;
	char enter,next,movx =4,movy =1,c,op2;
	loading();
	
	start:
		
		system("cls");
		cout<<"\t\t\t #  C plus plus  #\n";
		line();
		cout<<"\t\t\tWelcome to PROGRAMING by MaryaB (19SW20)\n";
		stars(); cout<<endl; stars();
		cout<<"\n     Let's get some information about you, for your better experience.!!\n";
		stars(); cout<<endl; stars();
		cout<<"\n\n Enter your first name here: ";
		cin>>name;
		cout<<"\n Enter you last name / cast :";
		cin>>lastname;
		line();
		cout<<"\n Thankyou so much dear "<<name<<" \n\n\n\n\n press 'c' to continue..";	
		cin>>enter;
		if(enter=='c')
		{
			goto welcome;
		}
		else 
			{goto start;}
	welcome: 
			{
			while(true){
				if(c=='\r')
				{ 
					switch(movy)
					{
						case 1: { goto tuto; break;}
						case 2: { goto prog; break;}
						case 3: { goto QA;   break;}
						case 4: { goto developer; break;}
						case 5: { goto ex;   break;}
					}
				}
				
				switch(c){
							case'w': {if(movy>1) movy--;	break;}
							case's': {if(movy<5) movy++;	break;}
						 }
				
			system("cls");
			stars();
			cout<<"\n\t\tWelcome "<<name<<" in MB PROGRAMMING\n";
			stars(); cout<<"\n\n";
			for(int y=1; y<= 5; y++)
			{ for(int x =1; x<=5; x++)
				{
					if(x==movx && y==movy)
					{cout<<">";}
					else if(y==1 && x==5)
					{cout<<" Tutorials";}
					else if (y==2 && x==5)
					{cout<<" Programms";}
					else if(y==3 && x==5)
					{cout<<" Question";}
					else if(y==4 && x==5)
					{cout<<" Developer's Information";}
					else if(y==5 && x==5)
					{cout<<" Exit";}
					else {cout<<" ";}
				}
				cout<<endl;
			}
		  c = getch();
}
			
tuto:
		system("cls");
		cout<<"\t\tWelcome to C++ Tutorials "<<name<<endl;
		stars();
		cout<<"\nLet's start learning...\n";
		stars();
		cout<<endl;
		cout<<"Press the number of option you want to learn about..\n\n";
		cout<<"1>> Introduction To C++\t";
		cout<<" 11>> If else ladder \t";
		cout<<"     21>> Function \n";
		cout<<"2>> Syntax\t\t";
		cout<<" 12>> Nested If \t";
		cout<<"     22>> String Funcion\n";
		cout<<"3>> Variable\t\t";
		cout<<" 13>> Switch \t\t";
		cout<<"     23>> Structure\n";
		cout<<"4>> Constant\t\t";
		cout<<" 14>> For Loop \n";
//		cout<<"     24>> Union\n";
		cout<<"5>> Keyword \t\t";
		cout<<" 15>> While Loop \n";
//		cout<<"     25>> Enum\n";
		cout<<"6>> Data Type \t\t";
		cout<<" 16>> Do While Loop \n";
//		cout<<"     26>> Enum\n";
		cout<<"7>> Storage classes\t";
		cout<<" 17>> Nested Loop \t\n";
		//cout<<"     27>> File Handling\n";
		cout<<"8>> Operator \t\t";
		cout<<" 18>> Pointer \n";
		cout<<"9>> If\t\t\t";
		cout<<" 19>> Single Dimension Array \n";
		cout<<"10>> If else \t\t";
		cout<<" 20>> Double Dimension Array \n";
		stars();
		cout<<"\nEnter your choice number ==> ";
		cin>>op;
		switch(op)
				{
				case 1: {	system("cls");
					cout<<"\n\t\t<<<<< Introduction to C++ Language >>>>>\n";
					line();
					cout<<endl;
					line();
					cout<<"\t\t\t\t__________________________\n";
					cout<<"\t\t\t|*******Definition*******|\n";
					//cout<<"\t\t\tTTTTTTTTTTTTTTTTTTTTTTTTTT";
					cout<<"\n1. It is a basic , high level and object oriented programming language.";
					cout<<"\n2. It supports object oriented programming structure so it is called object \n   oriented programming language.";
					cout<<"\n3. It is developed by 'Bjarne Stroustrup'.\n4. It is developed at AT and T's Bell laboratory(USA)";
					cout<<"\n5. It was developed in 1979.\n6. Basically it was developed to make writing good programs easier and more \n   pleasent for the individual programmer.";
					cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
					if(next='n')
					{ system("cls");
					cout<<"\n\n\t\t\t__________________________\n";
					cout<<"\t\t\t|Features of C++ language|\n";
					cout<<"\n=> Simple\n=> Powerfull\n=> Portable\n=> Machine Independent\n=> High Level Programminhg Language\n=> High Speed\n=> High Efficiency\n=> Flexible\n\n";
					cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
						if(next='n')
						{ system("cls");
						cout<<"\t\t\t______________________________\n";
						cout<<"\t\t\t|Apllications of C++ Language|\n\n»Developing Games\n»Operating Systems\n»Compilers\n»Editors\n»Database Systems\n»Network Drivers\n»Graphics Packages\n»Interpreters\n";
					cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
						if(next='n')
						{ system("cls");
						line();
						cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
						line();
						cout<<"\n\n\t     You have completed step one in C++ Language\n\t     Now you know all about the Introduction of C++ Language..!!\n\t     Wish you all the best for next steps..!";
						cout<<"\n\n\n\nFor Tutorial menu ==> Press 1 \nor exit ==> Press 2\n>>>"; cin>>op;
						switch(op)
						{
						//case 0: goto welcome; break;
						case 1: goto tuto; break;
						case 2: goto ex; break;
						//default: exit;
						}
						}
						}
						 }
						
						 break;}
				case 2: { system("cls");
						cout<<"\n\t\t\t<<<<<Syntax of C++ Language>>>>>\n";
						line(); cout<<"\n"; line();
						cout<<"\n#include<iostream>\n#include<conio.h>\nusing namespace std;\nint main()\n{\nsystem(''cls'');\ncout<<''HELLO WORLD'';\n   return 0;\n }";
						cout<<"\n\n\n\n\nPress 'n' for next >>"; cin>>next;
						if(next='n')
							{
							system("cls");
							cout<<"\n\t\t\t\t__________\n";
							cout<<"\t\t\t\t|iostream|\n";
							cout<<"\n1. It is a header file\n2. It stands for input output stream.\n3. It is collection of predefined funtions/methods.\n4. It is also called library of c++\n";
							line(); line();
							cout<<"\n\t\t\t\t_________\n\t\t\t\t|include|\n";
							cout<<"\n\n1. It is used to include the header file into the program.";
							cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
							if(next='n')
							{
							system("cls");
							cout<<"\t\t\t_________\n\t\t\t|   #   |\n\n1. It is called preprocessor.\n2. It includes the library/headerfile of C++ into the program before the\n   execuation of program.\n";
							line(); cout<<endl; line();
							cout<<"\n\t\t\t_______\n\t\t\t|Conio|\n\n1. It is a headerfile of C++.\n2. It stands for console input output. \n3. It is used to show the output on console window.";
							cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
							if(next='n')
								{
								 system("cls");
								cout<<"\t\t\t________\n\t\t\t|  Int  |\n\n1. It is a keyword in C++. \n2. It indicates that some value is to return at the end of program.\n3. If We will use Return keyword at the end of program.\n\n";
								line(); cout<<endl; line();
								cout<<"\n\t\t\t________\n\t\t\t| Main |\n\n1. It is the function which is called the entry point of any program.\n2. The execution of any program starts from the main function.\n3. If in a program there is only one funtcion than it should be main function.";
								cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
									cout<<"\t\t\t__________________\n\t\t\t|system(''clr'');|\n\n1. CLR stands for clear screen.\n2. It is predefined function which is used to clear the output screen\n3. It acts like a duster on output screen.\n4. It is defined in the conio.h header file\n";
									line(); cout<<endl; line();
									cout<<"\n\t\t\t    ________\n\t\t\t    | Cout |\n\n1. It is keyword which is userd to print data or information on to the output screen.\n2. It is always used with insertion operation.";
								cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
									cout<<"\t\t\t__________\n\t\t\t|return 0|\n\n1. it is ued because at start of program we use int main funtion so therefor \n   we have to return some value at the end of function to hold the output \n   screen.";
								cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
						if(next='n')
						{ system("cls");
						line();
						cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
						line();
						cout<<"\n\n\t     You have completed 2nd step in C++ Language\n\t     Now you know all about the Syntax of C++ Language..!!\n\t     Wish you all the best for next steps..!";
						cout<<"\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
						switch(op)
						{
						case 1: goto tuto; break;
						case 2: goto ex; break;
						}
					
		/*if conditions end*/}	}	}	}	}	}
			    		cout<<"\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
						  	break; /*case 2 end*/ }
				case 3: {	system("cls");
							cout<<"\t\t\t'Variable in C++ language'\n"; line();
							cout<<"\n\n\t\t\t____________\n\t\t\t|Definitions|\n\n1. It is a name of storage space which is used to store data.\n2. It's value is changable.\n3. It always contains last value stored to it.\n4. It is always declareds with data type.\n";
							//line(); cout<<endl; line();
							cout<<"\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{ system("cls");
							cout<<"\n\t\t\t______________________\n\t\t\t|Variable Declaration|\n\n => int rollno;\n => float marks;\n => char grade;\n\nHere rollno is a variable of type int\nmarks is a variable of type float\nand grade is a variable of type char.";
							cout<<"\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
									cout<<"\t\t\t_________________________\n\t\t\t|Variable Initialization|\n\nint rollno = 201;\nfloat marks = 85.6;\nchar grade = A;\n\nHere 201 is the value of the rollno, 85.6 is the value of marks and \nA is the value of grade. Character value is always written in single qoutes.";
									cout<<"\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
							
									cout<<"\n\t\t_________________________________________\n\t\t|Other method of Variable Initialization|\n\nint rollno;\nfloat marks;\nchar grade;\n\nrollno=201;\nmarks=85.6;\ngrade='A'; ";
								cout<<"\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
									cout<<"\t\t\t_____________________________\n\t\t\t|Rules to declare a variable|\n\n1. The first letter of a variable should be alphabet or undescore(_)\n2. The first letter of variable should not be digit\n3. After first character it may be combination of alphabets and digits.\n4. Blank spaces are not allowed in variable name.\n5. Variable name should not be a keyword.";
								cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
						if(next='n')
						{ system("cls");
						line();
						cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
						line();
						cout<<"\n\n\t     You have completed 3rd step in C++ Language\n\t     Now you know all about the Variables of C++ Language..!!\n\t     Wish you all the best for next steps..!";
						cout<<"\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
						switch(op)
						{
						//case 0: goto welcome; break;
						case 1: goto tuto; break;
						case 2: goto ex; break;
						//default: exit;
						}
					
								}}}}}
						
							break; /*case 3 end*/ }
				case 4: {
							system("cls");
						cout<<"\t\t\t# Constant in C++ Language #\n";
						line(); cout<<endl; line();
						cout<<"\n\t\t\t\t____________\n\t\t\t\t|Definition|";
						cout<<"\n\n1. An element of program whose value can not be changed at the time \n   of execution of program is called constant.\n2. It is also called literals.";
						cout<<"\n3. It may be int,float and character data type.";
								cout<<"\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
								cout<<"\t\t_________________________________________\n\t\t|Rules for constructing integer constant|\n";
								cout<<"\n1. It must have atleast one digit.\n2. It must not have a decimal point.\n3. It may be positive of negative.\n4. The range of integer constant is -32768 to +32767.\n5. No comma or blank space are allowd in integer constant.";
								cout<<"\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
								cout<<"\t\t________________________________________________\n\t\t|Rules for constructing floating point constant|\n\n1. It must have atleast one digit.\n2. It msut have a decimal point.\n3. It may be positive or negative.\n4. No comma or blank space are allowed in floatting point constant.";
								cout<<"\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
								cout<<"\t\t___________________________________________\n\t\t|Rules for constructing character constant|\n\n";
								cout<<"1. It is a single alphabet,digit or special symbol.\n2. The length of character constant is one character.\n3. Character constant is enclosed withing single quotes\n   (Example: char c='A';)\n";
								cout<<"\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
								cout<<"\t\t\t_____________________________\n\t\t\t|Use of constants in program|\n\n";
								cout<<"There are two ways of using constants in the program,\n1. Using const\n2. Using #define\n";
								line(); cout<<endl; line();
								cout<<"\n\t\t\t\t_________\n\t\t\t\t|Example|\n\nconst int rollno=20;\nconst float marks=98;\nconst char grade=A;";
								cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
						if(next='n')
						{ system("cls");
						line();
						cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
						line();
						cout<<"\n\n\t     You have completed 4th step in C++ Language\n\t     Now you know all about the constants of C++ Language..!!\n\t     Wish you all the best for next steps..!";
						cout<<"\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
						switch(op)
						{
						//case 0: goto welcome; break;
						case 1: goto tuto; break;
						case 2: goto ex; break;
						//default: exit;
						}
					
								}}}}}
						
							break;/*case 4 ends (constant)*/}					  
				case 5:{
						system("cls");
						cout<<"\t\t\t# Keyword in C++ Language #\n";
						line(); cout<<endl; line();
						cout<<"\n\t\t\t____________\n\t\t\t|Definition|";
						cout<<"\n\n1. The word has a predefined meaning is called keywords.";
						cout<<"\n2. It's funtionality is also predefined.";
						cout<<"\n3. It can not be used as an identifier.";
								cout<<"\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
								cout<<"\t\t\t_________________________________\n\t\t\t|Keywords in C++ are given below|\n";
								line();
								cout<<"\n\n1. default\t\t11. while\t\t22. const\t31. void\n2. float\t\t12. case\t\t22. const\t32. auto\n3. register\t\t13. double\t\t23. enum\n4. struct\t\t14. goto\t\t24. int\n5. volatile\t\t15. short\t\t25. sizeof\n6. break\t\t16. typedef\t\t26. unsigned\n7. do\t\t\t17. char\t\t27. continue\n8. for\t\t\t18. else\t\t28. extern\n9. retun\t\t19. if\t\t\t29. long\n10. switch\t\t20. signed\t\t30. static";
								cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
						if(next='n')
						{ system("cls");
						line();
						cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
						line();
						cout<<"\n\n\t     You have completed 5th step in C++ Language\n\t     Now you know all about the Keywords of C++ Language..!!\n\t     Wish you all the best for next steps..!";
						cout<<"\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
						switch(op)
						{
						//case 0: goto welcome; break;
						case 1: goto tuto; break;
						case 2: goto ex; break;
						//default: exit;
						}
					/*if conditions end*/	}}
						
							break;/*case 5 ends (keywords)*/}
				case 6: {
							system("cls");
							cout<<"\t\t\t# Datatypes in C++ Language #\n";
							line(); cout<<endl; line();
							cout<<"\n\t\t\t\t____________\n\t\t\t\t|Definition|";
							cout<<"\n\n1. It is a type of data. ";
							cout<<"\n2. There are many predefined data types \n   in c library like int,char,float etc.";
							cout<<"\n\n\n\n\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
						
							cout<<"\n______________";
							cout<<"\n|            | 1. Integer Type(int)";
							cout<<"\n| Basic Type | 2. Floating Type(float)";
							cout<<"\n|____________| 3. Character Type(char)";
							cout<<"\n______________";
							cout<<"\n|            | 1.  Pointer";
							cout<<"\n|            | 2.   Array";
							cout<<"\n|Derived Type| 3. Structure";
							cout<<"\n|            | 4.   Union";
							cout<<"\n|____________|";  
							cout<<"\n\n\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
								cout<<"\t\t\t   __________________\n\t\t\t   |<<Integer Type>>|\n\n";
//								tableline();
								cout<<"\n\t\t_____________________________________________";
								cout<<"\n\t\t|             |          |                  |";
								cout<<"\n\t\t|  Data Type  |Size(byte)|       Range      |";
								cout<<"\n\t\t|_____________|__________|__________________|";
								cout<<"\n\t\t|             |          |                  |";
								cout<<"\n\t\t|    short    |     2    | -32768 to +32767 |";
								cout<<"\n\t\t|     int     |     2    | -32768 to +32767 |";
								cout<<"\n\t\t|unsigned int |     2    |    0 to 65536    |";
								cout<<"\n\t\t|     long    |     4    |-2147483..to+214..|";
								cout<<"\n\t\t|unsigned long|     4    |0 to 4,294,967,295|";
								cout<<"\n\t\t|_____________|__________|__________________|";
									cout<<"\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{
									system("cls");
								cout<<"\t\t\t     ________________\n\t\t\t     |<<Float Type>>|\n\n";
								cout<<"\n\t\t_________________________________________________";
								cout<<"\n\t\t|             |          |                      |";
								cout<<"\n\t\t|  Data Type  |Size(byte)|         Range        |";
								cout<<"\n\t\t|_____________|__________|______________________|";
								cout<<"\n\t\t|             |          |                      |";
								cout<<"\n\t\t|    Float    |     4    |  3.4E-38 to 3.4E+38  |";
								cout<<"\n\t\t|    double   |     8    | 1.7E-308 to 1.7E+308 |";
								cout<<"\n\t\t| Long double |     10   |3.4E-4932 to 1.1E+4932|";
								cout<<"\n\t\t|_____________|__________|______________________|";
								cout<<"\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{	 system("cls");
								cout<<"\t\t\t    ____________________\n\t\t\t    |<<Character Type>>|\n\n";
								cout<<"\n\t\t_________________________________________________";
								cout<<"\n\t\t|             |          |                      |";
								cout<<"\n\t\t|  Data Type  |Size(byte)|         Range        |";
								cout<<"\n\t\t|_____________|__________|______________________|";
								cout<<"\n\t\t|             |          |                      |";
								cout<<"\n\t\t|    char     |     1    |      -128 to +127    |";
								cout<<"\n\t\t| signed char |     1    |      -128 t0 +127    |";
								cout<<"\n\t\t|unsigned char|     1    |        0 to 255      |";
								cout<<"\n\t\t|_____________|__________|______________________|";
								cout<<"\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{ system("cls");
									line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 6th step in C++ Language\n\t     Now you know all about the DataTypes of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
						/*if conditions end*/		}}}}}
							
								break;/*case 6 ends(dataType)*/}
				case 7: {
							system("cls");
						cout<<"\t\t\t# Storage Classes in C++ #\n";
						line(); cout<<endl; line();
						cout<<"\n\nA storage class in c++ defines the scope,liftime,default initial value \nand storage spaces of a variable.\n\n\n1. automatic\n2. static\n3. external";
						cout<<"\n\n\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t____________________________\n\t\t\t|<<Automatic:storage class>>|\n\n";
								cout<<"1. Automatic variables are declared inside a function in which they \n   have to used.\n";
								cout<<"2. When the function is called automatic variables are created and \n   destroyed when function is exited.\n";
								cout<<"3. Automatic variables can not be used outside it means we can say \n   that it is private member.\n";
								cout<<"4. Automatic variables are also known as local variable.\n";
								cout<<"5. auto keyword is used to declare automatic type variable.";
								cout<<"\n\n\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\tExample:\n\n";
								cout<<"#include<iostream>\nusing namespace std;\nint main()   {\n\t\tauto int x=5;\n\t\t{\n\t\t  auto int x=3;\n\t\t  {\n\t\t\tauto int x=1;\n\t\t\tcout<<x<<endl;\n\t\t  }\n\t\t  cout<<x<<endl;\n\t\t}\n\t\tcout<<x<<endl;\nreturn 0;   }";
								cout<<"\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t____________________________\n\t\t\t|<< Static:storage class >>|\n";
								cout<<"\n1. Static variable can be used anywhere in the program inside or outside \n   of a function or block.\n";
								cout<<"2. The value of the static variable exists until the end of program.\n3. The static variable which is declared inside a function is called \n   internal static variable and it can not be used outside that function.\n4. The static variable which is declared outside a function is called \n   external static variable and it can be used in all the function of that \n   program.";
								cout<<"\n\n\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\tExample:\n\n";
								cout<<"#include<iostream>\nusing namespace std;\nvoid demo()\n{\n\tstatic int x=0;\n\tcout<<x<<endl;\n\tx++;\n}\nint main()\n{\n\tdemo(); //Calling\n\tdemo();\n\tdemo();\n\tdemo();\n}";
								cout<<"\nPress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t______________________________\n\t\t\t|<< Register:storage class >>|\n\n";
								cout<<"\n1. register variable is stored in one of the register of system, instead of memory.\n2. Value stored in register can be accessed faster than one that is stored in memory.";
								cout<<"\n\n\n\n\n\n\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\tExample:\n\n";
								cout<<"#include<iostream>\n\nusing namespace std;\n\nint main()\n{\n\nregister int x,y=20, z=30;\nx=y+z;\ncout<<''ADD=''<<x;\n\n}";
								cout<<"\n\n\n\nPress 'n' for next >>"; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t______________________________\n\t\t\t|<< External:storage class >>|\n\n";
								cout<<"\n\n1. Variable that can be used anywhere in the program is called external \n   variable.\n2. External storage class does not create a variable, but it informs the \n   compiler of its existence.\n3. extern keyword is used to declare external variable.";
								cout<<"\n\n\n\n\n\n\n\nPress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\tExample:\n\n\n#include<iostream>\nusing namespace std;\n\nint x=10; //external variable\n\nint main()\n{\n\n\textern int x=5;\n\tcout<<x;\n\n}";
								cout<<"\n\n\nPress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
									line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 7th step in C++ Language\n\t     Now you know all about the Storage Classes of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
						/*if conditions end*/		}}}}}}}}}
						break;/*case 7 ends*/}
				case 8:{		system("cls");
					cout<<"\t\t\t# Operator in C++ Language # \n";
					line(); cout<<endl; line();
					cout<<"\n\t\t\t    ________________\n\t\t\t    |<< Operatot >>|";
					cout<<"\n\nIt is a special symbol which is used to perform logical or mathematical \noperations on data or variable.\n";	
					line(); cout<<endl; line();
					cout<<"\n\t\t\t    _______________\n\t\t\t    |<< Operand >>|";
					cout<<"\n\nIt is a data or variable on which the operation is to be performed.";
					cout<<"\n\n\nPress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
									cout<<"\t\t\t_________________________\n\t\t\t|<< Types of Operator >>|";
									cout<<"\n\n\n\n=>  Arithmatic Operators\n=>  Relational Operators\n=>  Logical Operators\n=>  Assignment Operators\n=>  Bitwise Operators\n=>  Increment/Decrement Operators\n=>  Conditional Operators\n=>  Special Operators";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t    ____________________________\n\t\t\t    |<< Arithmatic Operators >>|\n\n\n";
								cout<<"\t\t\t____________________________________\n";
								cout<<"\t\t\t|        |               |         |\n";
								cout<<"\t\t\t| Symbol |   Operation   | Example |\n";
								cout<<"\t\t\t|________|_______________|_________|\n";
								cout<<"\t\t\t|        |               |         |\n";
								cout<<"\t\t\t|    +   |    Addition   |   x+y   |\n";
								cout<<"\t\t\t|    -   |  Subtraction  |   x-y   |\n";
								cout<<"\t\t\t|    *   | Multiplication|   x*y   |\n";
								cout<<"\t\t\t|    /   |    Division   |   x/y   |\n";
								cout<<"\t\t\t|    %   |     Modulus   |   x%y   |\n";
								cout<<"\t\t\t|________|_______________|_________|";
								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t__________________________\n\t\t\t|<< Logical Operators >>|\n\n";
								cout<<"\t\t\t__________________________________________\n";
								cout<<"\t\t\t|        |               |               |\n";
								cout<<"\t\t\t| Symbol |   Operation   |    Example    |\n";
								cout<<"\t\t\t|________|_______________|_______________|\n";
								cout<<"\t\t\t|        |               |               |\n";
								cout<<"\t\t\t|   &&   |  Logical AND  | if(x>y && x>z)|\n";
								cout<<"\t\t\t|   ||   |  Logical OR   | if(x>y || x>z)|\n";
								cout<<"\t\t\t|   !    |  Logical NOT  |   if(!(x>y))  |\n";
								cout<<"\t\t\t|________|_______________|_______________|\n";
 								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t___________________________\n\t\t\t|<< Assignment Operators >>|\n\n";
								cout<<"\t\t\t_______________________________________\n";
								cout<<"\t\t\t|        |             |              |\n";
								cout<<"\t\t\t| Symbol |   Example   |    same as   |\n";
								cout<<"\t\t\t|________|_____________|______________|\n";
								cout<<"\t\t\t|        |             |              |\n";
								cout<<"\t\t\t|    =   |      x=y    |      y=x     |\n";
								cout<<"\t\t\t|   +=   |      x+=y   |     x=x+y    |\n";
								cout<<"\t\t\t|   *=   |      x*=y   |     x=x*y    |\n";
								cout<<"\t\t\t|   /=   |      x/=y   |     x=x/y    |\n";
								cout<<"\t\t\t|   %=   |      x%=y   |     x=x%y    |\n";
								cout<<"\t\t\t|________|_____________|______________|\n";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t_________________________\n\t\t\t|<< Bitwise Operator >>|\n\n";
								cout<<"\t\t\t__________________________________________\n";
								cout<<"\t\t\t|        |               |               |\n";
								cout<<"\t\t\t| Symbol |   Operation   |    Example    |\n";
								cout<<"\t\t\t|________|_______________|_______________|\n";
								cout<<"\t\t\t|        |               |               |\n";
								cout<<"\t\t\t|   &    |  Bitwise AND  |      x&y      |\n";
								cout<<"\t\t\t|   |    |  Bitwise OR   |      x|y      |\n";
								cout<<"\t\t\t|   <<   |  Shift Left   |      x<<2     |\n";
								cout<<"\t\t\t|   >>   |  Shift Right  |      x>>2     |\n";
								cout<<"\t\t\t|________|_______________|_______________|\n";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t_____________________________________\n\t\t\t|<< Increment/Decrement Operators >>|\n\n";
								cout<<"\t\t\t__________________________________________________________\n";
								cout<<"\t\t\t|        |               |               |               |\n";
								cout<<"\t\t\t| Symbol |      Name     |    Function   |    Example    |\n";
								cout<<"\t\t\t|________|_______________|_______________|_______________|\n";
								cout<<"\t\t\t|        |               |               |               |\n";
								cout<<"\t\t\t|   ++   |   Increment   |Value = value+1|      ++x      |\n";
								cout<<"\t\t\t|   --   |   Decrement   |Value = value-1|      --x      |\n";
								cout<<"\t\t\t|________|_______________|_______________|_______________|";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 8th step in C++ Language\n\t     Now you know all about the Operators of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
									/*if conditions end*/		}}}}}}}
								break;/*case 8 ends*/}
				case 9: {	system("cls");
								cout<<"\t\t\t# If statement in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\t\t\t\t______________\n\t\t\t\t|<< Syntax >>|\n\n";
								cout<<"   if(condition)\n\n\t{\n\t\t//Body of IF\n\n\t}";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n\n\n1. If the condition is true its body executes otherwise does not executes.\n2. In the case of if in the place of condition always zero and non-zero \n   value is checked in which zero means conditionn is false and non-zero \n   means condition is true.";
								cout<<"\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 9th step in C++ Language\n\t     Now you know all about the If statement of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}
								break;/* case 9 ends*/}
				case 10: {	system("cls");
								cout<<"\t\t\t# If else statement in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\t\t\t\t______________\n\t\t\t\t|<< Syntax >>|\n\n";
								cout<<"   if(condition)\n\n\t{\n\t\t//Body of IF\n\n\t}\n   else\n\t{\n\t\tBody of if\n\t}";
								cout<<"\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n\n1. IF the condition is true if part executes and if the condition is \n   false else part executes.\n2. In the case of if in the place of condition always zero and non-zero value \n   is checked in which zero  means condition is false and non-zero\n   means condition is true.";
								cout<<"\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 10th step in C++ Language\n\t     Now you know all about the If else statement of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}				
						break; /*case 10 ends*/ }
				case 11: {	system("cls");
								cout<<"\t\t\t# If else ladder statement in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\t\t\t\t______________\n\t\t\t\t|<< Syntax >>|\n\n";
								cout<<"   if(condition)\n\t{\t//Body of else\n\n\t}\n   else if(condition)\n\t{\t//Body of else\n\n\t}\n   else if(condition)\n\t{\t//Body of else\n\n\t}\n   else\n\t{\n\t\tBody of if\n\t}";
								cout<<"\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n\n1. It is a part of conditional statement that execute only one condition at a time.\n2. If all conditions are false then else part executes.\n3. It executes that condition that becomes first true from the top.\n4. In the case of if in the place of condition always zero and non-zero value is checked in which zero means condition is false and one means condition is true.";
								cout<<"\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 11th step in C++ Language\n\t     Now you know all about the If else Ladder in C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}
								break; /* case 11 ends*/ }
				case 12: {	system("cls");
								cout<<"\t\t\t# If else ladder statement in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\t\t\t\t______________\n\t\t\t\t|<< Syntax >>|\n\n";
								cout<<"   if(condition)\n\t{\n\t   if(condition)\n\t\t{\n\t\t\t//Body of else\n\t\t}\n\t}";
								cout<<"\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n\n1. Nested means one inside another so one if inside another if is called nested if.\n2. In the case of if in the place of if always zero and non-zero value \n   is checked in which zero  means condition is false and non-zero\n   means condition is true. ";
								 cout<<"\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 12th step in C++ Language\n\t     Now you know all about Nested If of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}
								break; /* case 13 ends*/ }
				case 13: {	system("cls");
								cout<<"\t\t\t# Switch statement in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\n\n\n   Switch allows us to execute one statement from many statement and that \n   statements are called case. \n   Actually in switch statement, inside the body of switch a number of cases \n   are used and a parameter is passed then with which case that parameter \n   matches , that case is executed.";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\t\t\t\t______________\n\t\t\t\t|<< Syntax >>|\n\n";
								cout<<"switch(parameter)\n{\ncase 1:\n	statement 1; break;\ncase 2:\n	statement 2; break;\n................\n................\ncase n:\n	statement n; break;\ndefault:\n	default statement;\n}";
								cout<<"\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n\n\n1. In the switch statement a value/number is passed in the place of \n   parameter and that case will execute which is equal to that \n   value/number.\n\n2. If no case matched with parameter then default case will execute.";
								cout<<"\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 13th step in C++ Language\n\t     Now you know all about Nested If of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}}
					break; /* case 13 ends*/}
				case 14: {	system("cls");
								cout<<"\t\t\t# For Loop in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\n\n\nTo run the body continuously untill a required condition is fullfill is \ncalled looping. It is used to perform looping operation. When the condition \nwill become false the execuation of loop will be stopped."; 
								cout<<"\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\t\t\t\t______________\n\t\t\t\t|<< Syntax >>|\n\n\n\n";
								cout<<"\tfor(initialization; condition; increment/decrement)\n\n\t{\n\n\t\tBody \n\n\t}";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n\n\n1. In for loop there are three part initialization,condition and \n   increment/decrement.\n\n2. Initialization part executes only once.\n\n3. All the three part of for loop are optional.";
								cout<<"\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 14th step in C++ Language\n\t     Now you know all about For Loop of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}}
					break; /* case 14 ends*/}
				case 15: {	system("cls");
								cout<<"\t\t\t# While Loop in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\n\n  To run the body continuously untill a required condition is fullfill is \n  called looping.\n  It is used to perform looping operation. When the condition will become \n  false the execution of loop will be stopped.";
								cout<<"\n\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\t\t\t\t______________\n\t\t\t\t|<< Syntax >>|\n\n\n\n";
								cout<<"\twhile(condition)\n\n\t{\n\t\tBody\n\t}";
								cout<<"\n\n\n\tIts body will execute until the given condition is true.";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 15th step in C++ Language\n\t     Now you know all about While Loop of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}
					break; /* case 15 ends*/} 
				case 16: {	system("cls");
								cout<<"\t\t\t# Do While Loop in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\n\n  To run the body continuously untill a required condition is fullfill is \n  called looping.\n  It is used to perform looping operation. When the condition will become \n  false the execution of loop will be stopped.";
								cout<<"\n\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\t\t\t\t______________\n\t\t\t\t|<< Syntax >>|\n\n\n\n";
								cout<<"\tdo\n\n\t{\n\t\tBody\n\t}\n\twhile(condition);";
								cout<<"\n\n\n\tIts body will execute until the given condition is true.";
								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 16th step in C++ Language\n\t     Now you know all about Do While Loop of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}
					break; /* case 16 ends*/}
				case 17: {	system("cls");
								cout<<"\t\t\t# Nested Loop in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\t\t\t\t__________________\n\t\t\t|<< Definition >>|\n\n";
								cout<<"A loop inside another loop is called nested loop so one for loop inside \nanother for loop is called nested for loop and so on.";
								cout<<"\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\t\t\t\t______________\n\t\t\t\t|<< Syntax >>|\n\n\n\n";
								cout<<"\tfor(initialization; condition; increment/decrement)\n\t{\n\t\tfor(initialization; condition; increment/decrement)\n\n\t\t{\n\t\t\tBody\n\t\t}\n\t}";
								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 17th step in C++ Language\n\t     Now you know all about Nested Loop of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}
					break; /* case 17 ends*/}
				case 18: {	system("cls");
								cout<<"\t\t\t# Pointer in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\n1. It is a special type of variable which is used to store the address \n   of another variable.";
								cout<<"\n2. It can store the address of same data type means an integer pointer\n   can store the address of integer variable,character pointer can\n   store the address of character variable and so on.";
								cout<<"\n3. If we add asterisk(*) symbol with any variable at the time\n   of declaring variable then this variable is called pointer variable.";
								cout<<"\n4. We use ampersand symbol to get the address of variable.\n5. * symbol is used to get the value at address which is hold by pointer.";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\t\t\t\t______________\n\t\t\t\t|<< Syntax >>|\n\n\n\n";
								cout<<"\tint a;\n\tint *p;";
								cout<<"\n\n1. Here a is a normal variable.\n2. p is a pointer variable because it is associated with * symbole.";
								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 18th step in C++ Language\n\t     Now you know all about pointers of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}
					break; /* case 18 ends*/}
				case 19: {	system("cls");
								cout<<"\t\t\t# Array in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\n1. It is a collection of data of same type.\n2. It is used to store group of data simultaneously.\n3. It can store data of same data type means an integer array can store \n   only integer value, character array can store only character value \n   and so on.";
								cout<<"\n4. We can not fetch data from array directly therefore we use index point.\n5. The indexing of array always start with 0\n6. Index value is always an integer number.\n7. Array maybe of any data type like int,char,float,etc.";
								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t______________\n\t\t\t|<< Syntax >>|\n\n";
								cout<<"\n\t\tint a[5];";
								cout<<"\n\nMemory representation:";
								cout<<"\n\t\t  _____________________";
								cout<<"\n\t\ta |___|___|___|___|___|";
								cout<<"\n\t\t    0   1   2   3   4   <----- Index";						
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n1. Here a is the name of array.\n2. int is the data type of array.\n3. Size of array is 5 means we can store maximum 5 values in this array.";
								cout<<"\n\nINITIALIZATION METHOD 01\n\n\tint a[5]={11,12,13,14,15};\n\nINITIALIZATION METHOD 01\n\n\tint a[5];\n\ta[0]=11;\n\ta[1]=12;\n\ta[2]=13;\n\ta[3]=14;\n\ta[4]=15;";
								cout<<"\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 19th step in C++ Language\n\t     Now you know all about the Arrays of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}}
					break; /* case 19 ends*/}
				case 20: {	system("cls");
								cout<<"\t\t\t# Double Dimension Array in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\n1. It is a collection of data of same type.\n2. It is used to store group of data simultaneously.\n3. It can store data of same data type means an integer array can store \n   only integer value, character array can store only character value \n   and so on.";
								cout<<"\n4. We can not fetch data from array directly therefore we use index point.\n5. The indexing of array always start with 0\n6. Index value is always an integer number.\n7. Array maybe of any data type like int,char,float,etc.";
								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t______________\n\t\t\t|<< Syntax >>|\n\n";
								cout<<"\n\t\tint a[3][3];";
								cout<<"\n\n1. Here a is the name of array.\n2. int is the data type of array.\n3. Size of array is 3x3 means we can store maximum 9 values in this array.";
								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\nINITIALIZATION METHOD 01\n\n\tint a[3][3]={{10,20,30},{11,22,33},{50,100,150}};\n\nINITIALIZATION METHOD 01\n\n\tint a[3][3];\n\ta[0][0]=10;\n\ta[0][1]=20;\n\ta[0][2]=30;\n\ta[1][0]=11;\n\ta[1][1]=12;\n\ta[1][2]=13;\n\ta[2][0]=50;\n\ta[2][1]=100;\n\ta[2][2]=150;";
								cout<<"\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 20th step in C++ Language\n\tNow you know all about the Double Dimension Arrays of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}}
					break; /* case 20 ends*/}
				case 21: {	system("cls");
								cout<<"\t\t\t# Function in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\n   A function is a block of code which only runs when it is called.\n   You can pass data, known as parameters, into a function.\n   Functions are used to perform certain actions, and they are \n   important for reusing code: Define the code once, and use it many times.";
								cout<<"\n\n\n\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t___________________________\n\t\t\t|<< Creating a function >>|\n\n";
								cout<<"C++ provides some pre-defined functions, such as main(), which is used \nto execute code. But you can also create your own functions to perform \ncertain actions.To create (often referred to as declare) a function, specify \nthe name of the function, followed by parentheses ():\n\n\t\t\t\t______________\n\t\t\t\t|<< Syntax >>|\n\nvoid myFunction() \n{ \n\t // code to be executed\n}";
								cout<<"\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n\t\t\tExample Explained:\n\n\n   myFunction() is the name of the function\n   void means that the function does not have a return value.\n   inside the function (the body), add code that defines what the \n   function should do";
								cout<<"\n\n\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\t\t\t_______________________\n\t\t\t|<< Call a Function >>|\n\nDeclared functions are not executed immediately. \nThey are ''saved for later use'', and will be executed later, when they are \ncalled.\nTo call a function, write the function's name followed by two parentheses () \nand a semicolon ;\nIn the following example, myFunction() is used to print a text (the action), \nwhen it is called:";
								cout<<"\n\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\t\t___________________________________________\n\t\t|<< Function Declaration and Definition >>|\n\nA C++ function consist of two parts:\n\nDeclaration: the function's name, return type, and parameters (if any)\nDefinition: the body of the function (code to be executed)\n\nvoid myFunction() \n{ // declaration\n  // the body of the function (definition)\n}";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 21th step in C++ Language\n\t     Now you know all about the Functions of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}}}}
					break; /* case 21 ends*/}
				case 22: {	system("cls");
								cout<<"\t\t\t# String Function in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\n\n1. String is a collection of character.\n2. C language doesnot support string data type therefore char data type is\n   used to make string.\n3. String in c is stored in single dimension character array.\n4. There are many predefined string string function in C library.\n5. All the string functions are predefined in string.h header file.";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\nSome functions are given below :\n\n\n1. strlen(s)      = It is used to get the length of String.\n2. strcpy(s1,s2); = It is used to copy the string, here string s2 \n                    is coppied into string s1.\n3. strupr(s);     = It is used to convert all the character into upper \n                    alphabet.\n4. strlwr(s);     = It is used to convert all the character into lower \n                    alphabet.\n5. strrev(s);     = It is used  to reserve the string.";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 22nd step in C++ Language\n\t     Now you know all about the String Functions of C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}
					break; /* case 22 ends*/}
				case 23: {	system("cls");
								cout<<"\t\t\t# Structure in C++ Language #\n"; line(); cout<<endl; line();
								cout<<"\t\t\t\n\n1. It is a collection of data of different data type.\n2. It is a user defined data type.\n3. We can access the member of structure by making the variable of structure.\n5. Struct keyword is used to create a structure.";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t______________\n\t\t\t|<< Syntax >>|\n\n";
								cout<<"\n\tstruct sturucture_name\n\t{\n\n\t\tdata type variable 1;\n\t\tdata type variable 2;\n\t\t---------------------\n\t\tdata type variable n;\n\n\t}";
								cout<<"\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t\t________________________________\n\t\t\t|<< Declaration of structure >>|\n\n";
								cout<<"struct student\n{\n\tchar name[200];\n\tint rollno;\n\tfloat marks;\n};\nint main()\n{\n\tstruct student s1;\n\nreturn 0;\n}";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\t\t_______________________________________________\n\t\t|<< Accessing the data members of structure >>|\n\n";
								cout<<"\n\nThe data member of structure can be accessed as \n\tstructure_variable.data_member;\n\nFor example if we want to access the rollno of student then we can write as:\n\ts1.rollno;";
								cout<<"\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								line();
								cout<<"\n\n\t\t\tCongratulations "<<name<<" ..!\n";
								line();
								cout<<"\n\n\t     You have completed 23rd step in C++ Language\n\t     Now you know all about the structure in C++ Language..!!\n\t     Wish you all the best for next steps..!";
								cout<<"\n\n\n\n\n\nFor Tutorial menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>op;
								switch(op)
								{
									case 1: goto tuto; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}}}}
					break; /* case 23 ends*/}
/*switch end*/}
/*wlcome end*/}
prog: { 	system("cls");
		cout<<"\t\tWelcome to C++ Program "<<name<<endl;
		stars();
		cout<<"\nLet's start learning...\n";
		stars();
		cout<<endl;
		cout<<"Press the number of option you want to learn about..\n\n";
		cout<<"1. Basic\t\t\t";
		cout<<"10. Function\n";
		cout<<"2. If, If else, Nested If\t";
		cout<<"11. String Function\n";
		cout<<"3. Switch\n";
		cout<<"4. For Loop\n";
		cout<<"5. While Loop\n";
		cout<<"6. Do While Loop\n";
		cout<<"7. Pointer\n";
		cout<<"8. Array\n";
		cout<<"9. Double Dimension Array";
		cout<<"\n\n\n Enter your choice number==>  ";
		cin>>op;
		switch(op)
		{
			case 1: {
				basic:
					system("cls");
				cout<<"\t\t# Basic Program List #\n\n";
				cout<<"a. Addition of Two numbers\n";
				cout<<"b. Substraction of Two numbers\n";
				cout<<"c. Multiplication of Two numbers\n";
				cout<<"d. Division of Two numbers\n";
				cout<<"e. Area of Rectangle\n";
				cout<<"f. Area of Square\n";
				cout<<"g. Area of Circle\n";
				cout<<"h. Area of Triangle\n";
				cout<<"i. Input of marks of 5 subjects and find average\n";
				cout<<"j. Swapping Two variable using Third Variable\n";
				cout<<"\nEnter your choice ==> ";
				cin>>op2;
				switch(op2)
				{ case 'a': 
						{ system("cls");
						cout<<"\t\t# ADDITION OF TWO NUMBERS #\n\n";
						  cout<<"#include<iostream>\nusing namespace std;\nint main()\n{\n\tint a,b,c;\n\tcout<<''Enter first number'';\n\tcin>>a;\n\tcout<<''Enter second number'';\n\tcin>>b;\n\tc=a+b;\n\tcout<<''Add=''<<c;\n\t}";
						//cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								cout<<"\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
				/* case 1 case 1 ends*/ break; }
				case 'b':
						{ system("cls");
							cout<<"\t\t# SUBTRACTION OF TWO NUMBERS #\n\n";
						  cout<<"#include<iostream>\nusing namespace std;\nint main()\n{\n\tint a,b,c;\n\tcout<<''Enter first number'';\n\tcin>>a;\n\tcout<<''Enter second number'';\n\tcin>>b;\n\tc=a-b;\n\tcout<<''sub=''<<c;\n\t}";
						//cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								cout<<"\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
						/* case (1, 2) ends*/ break;}
				case 'c': 
						{ system("cls");
						cout<<"\t\t# MULTIPLICATION OF TWO NUMBERS #\n\n";
						  cout<<"#include<iostream>\nusing namespace std;\nint main()\n{\n\tint a,b,c;\n\tcout<<''Enter first number'';\n\tcin>>a;\n\tcout<<''Enter second number'';\n\tcin>>b;\n\tc=a*b;\n\tcout<<''MULTIPLICATION=''<<c;\n\t}";
						//cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								cout<<"\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
				/* case (1, 3) ends*/ break; }
				case 'd': 
						{ system("cls");
						cout<<"\t\t# DIVISION OF TWO NUMBERS #\n\n";
						  cout<<"#include<iostream>\nusing namespace std;\nint main()\n{\n\tint a,b,c;\n\tcout<<''Enter first number'';\n\tcin>>a;\n\tcout<<''Enter second number'';\n\tcin>>b;\n\tc=a/b;\n\tcout<<''DIVISION=''<<c;\n\t}";
						//cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								cout<<"\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
				/* case (1 , 4) ends*/ break; }
				case 'e':
						{	system("cls");
						cout<<"\t\t# AREA OF RECTANGLE #\n\n";
						cout<<"#include<iostream>\nusing namespace std;\nint main()\n  {\n    int area,h,w;\n    cout<<''Enter height of rectangle'';\n    cin>>h;\n    cout<<''Enter width of rectangle'';\n    cin>>w;\n    area=h*w;\n    cout<<''Area of rectangle=''<<area;\n  }";
						cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
				/* case (1 , 5) ends*/ break;}
				case 'f':
						{	system("cls");
						cout<<"\t\t# AREA OF SQUARE #\n\n";
						cout<<"#include<iostream>"
							<<"\nusing namespace std;"
							<<"\nint main()"
							<<"\n  {"
							<<"\n    int area,side;"
							<<"\n    cout<<''Enter side of square'';"
							<<"\n    cin>>side;"
							<<"\n    area=side*side;"
							<<"\n    cout<<''Area of square='<<area;"
							<<"\n  }";
						cout<<"\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
				/* case (1 , 6) ends*/ break;}
				case 'g':
						{	system("cls");
						cout<<"\t\t# AREA OF CIRCLE #\n\n";
						cout<<"#include<iostream>"
							<<"\nusing namespace std;"
							<<"\nint main()"
							<<"\n  {"
							<<"\n    int area,r;"
							<<"\n    cout<<''Enter Radius of circle:'';"
							<<"\n    cin>>r;"
							<<"\n    area=3.14*r*r;"
							<<"\n    cout<<''Area of circle='<<area;"
							<<"\n  }";
						cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
				/* case (1 , 7) ends*/ break;}
				case 'h':
						{	system("cls");
						cout<<"\t\t# AREA TRIANGLE #\n\n";
						cout<<"#include<iostream>\nusing namespace std;\nint main()\n  {\n    int area,h,b;\n    cout<<''Enter height of triangle'';\n    cin>>h;\n    cout<<''Enter base of triangle'';\n    cin>>w;\n    area=0.5*h*b;\n    cout<<''Area of triangle=''<<area;\n  }";
						cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
				/* case (1 , 8) ends*/ break;}
//					/* case (1 , 7) ends*/ break;}
				case 'i':
						{	system("cls");
						cout<<"\t\t# INPUT OF MARKS AND AVERAGE #\n\n";
						cout<<"#include<iostream>"
							<<"\nusing namespace std;"
							<<"\nint main()"
							<<"\n  {"
							<<"\n    float p,c,m,h,e,avg;"
							<<"\n    cout<<''Enter marks in physics'';"
							<<"\n    cin>>p;"
							<<"\n    cout<<''Enter marks in chemistry'';"
							<<"\n    cin>>c;"
							<<"\n    cout<<''Enter marks in math'';"
							<<"\n    cin>>m;"
							<<"\n    cout<<''Enter marks in hindi\n'';"
							<<"\n    cin>>h;"
							<<"\n    cout<<''Enter marks in english\n';"
							<<"\n    cin>>e;"
							<<"\n    avg=(p+c+m+h+e)/5;"
							<<"\n    cout<<''Average of result=''<<avg;"
							<<"\n }";
						cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
				/* case (1 , 9) ends*/ break;}
				case 'j':
						{	system("cls");
						cout<<"\t\t# SWAPING VARIABLES USING 3rd VARIABLE #\n\n";
						cout<<"#include<iostream>"
							<<"\nusing namespace std;"
							<<"\nint main()"
							<<"\n  {"
							<<"\n    int a=10,b=20,c;c"
							<<"\n    cout<<''Before swapping a=''<<a<<'' and b=''<<b;"
							<<"\n    c=a;"
							<<"\n    a=b;"
							<<"\n    b=c;"
							<<"\n    cout<<''After swapping a=''<<a<<'' and b=''<<b;"
							<<"\n }";
						cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
				/* case (1 , 10) ends*/ break;}
					
				/* switch of case 1 ends*/break; }
				/* case 1 ends*/break;}
				case 2:
					{ system("cls");
					cout<<"\t\t# If Program List #\n\n";
					cout<<"a. Greater Value In 2 Numbers\n";
					cout<<"b. Check Given Number is +ve or -ve\n";
					cout<<"c. Show result according to percentage\n";
					cout<<"d. Even Odd program\n";
					cout<<"\n\nEnter your choice==> ";
					cin>>op2;
					switch(op2)
					{
						case 'a':
							{ system("cls");
							cout<<"\t\t # Greater Value In 2 Numbers #\n\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"\n    int f,s;"
								<<"\n    cout<<''Enter first number'';"
								<<"\n    cin>>f;"
								<<"\n    cout<<''Enter second number'';"
								<<"\n    cin>>s;"
								<<"\n    if(f>s)"
								<<"\n    cout<<''First number is greater'';"
								<<"\n    if(f<s)"
								<<"\n    cout<<''Second number is greater'';"
								<<"\n    if(f==s)"
								<<"\n	cout<<''Both are equal'';"   
								<<"\n  }";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (2, a) ends*/ break; }
						case 'b':
							{ system("cls");
							cout<<"\t\t # CHECK GIVEN NUMBER IS +VE OR -VE #\n\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"\n    int no;"
								<<"\n     cout<<''Enter any number'';"
								<<"\n    cin>>no;"
								<<"\n     if(no>0)"
								<<"\n    cout<<''no is positive'';"
								<<"\n    if(no<0)"
								<<"\n    cout<<''no is negative'';;"
								<<"\n    if(n==0)"
								<<"\n    cout<<''no is Zero'';"   
								<<"\n  }";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (2, b) ends*/ break;}
					
						case 'c':
							{ system("cls");
							cout<<"\t\t # SHOW RESULT ACCORDING TO PERCENTAGE #\n\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"\n    float p;"
								<<"\n     cout<<''enter your percent\n'';"
								<<"\n    cin>>P;"
								<<"\n     if(p<=100&&p>=60)"
								<<"\n    cout<<''First division'';"
								<<"\n    if(p<60&&p>=45)"
								<<"\n    cout<<''Second division'';;"
								<<"\n    if(p<45&&p>=33)"
								<<"\n    cout<<''Third division'';"   
								<<"\n    if(p<33)"   
								<<"\n    cout<<''Fail'';"   
								<<"\n  }";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (2, c) ends*/ break;}
					case 'd':
							{ system("cls");
							cout<<"\t\t # EVEN ODD NUMBERS #\n\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"\n     int no;"
								<<"\n     cout<<''Enter any number\n'';"
								<<"\n    cin>>no;"
								<<"\n     if((no%2==0)"
								<<"\n    {"
								<<"\n    cout<<''Even'';"
								<<"\n    }"
								<<"\n    else"
								<<"\n    cout<<''Odd'';"   
								<<"\n  }";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (2, d) ends*/ break;}
			/*switch of case 2 ends*/}
					/* case 2 ends*/ break; }
					case 3:
					{ system("cls");
					cout<<"\t\t# Switch Program List #\n\n";
					cout<<"a. Input any nuumber and print Day of week\n";
					cout<<"b. Check Given Alphabet is vowel or constant\n";
					cout<<"c. Simple calculator program\n";
					cout<<"d. Simple ATM program\n";
					cout<<"\n\nEnter your choice==> ";
					cin>>op2;
					switch(op2)
					{
						case 'a':
							{ system("cls");
							cout<<"\t\t # INPUT ANY NUMBER PRINT DAY OF WEEK #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int no;"
								<<"\n	cout<<''Enter any number'';"
								<<"\n	cin>>no;"
								<<"\n	switch(no)"
								<<"	{"		
								<<"\n		case 1:"
								<<"\n			cout<<''Monday'';"
								<<"		break;"
								<<"\n		case 2:"
								<<"\n			cout<<''Tuesday'';"
								<<"		break;"
								<<"\n		case 3:"
								<<"\n			cout<<''Wednesday'';"
								<<"		break;"
								<<"\n		case 4:"
								<<"\n			cout<<''Thursday'';"
								<<"		break;"
								<<"\n		case 5:"
								<<"\n			cout<<''Friday'';"
								<<"		break;"
								<<"\n		case 6:"
								<<"\n			cout<<''Saturday'';"
								<<"		break;"
								<<"\n		case 7:"
								<<"\n			cout<<''Sunday'';"
								<<"  /*switch ends*/   }"
								<<"  /*Program ends*/  }";
								cout<<"\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (3, a) ends*/ break;}
						case 'b':
							{ system("cls");
							cout<<"\t\t # CHECK ALPHABET IS VOWEL OR CONSTANT #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    char ch;"
								<<"\n	cout<<''Enter any alphabet'';"
								<<"\n	cin>>ch;"
								<<"\n	switch(ch)"
								<<"	{"		
								<<"\n		case 'a':"
								<<"\n			cout<<''vowel'';"
								<<"		break;"
								<<"\n		case 'e':"
								<<"\n			cout<<''vowel'';"
								<<"		break;"
								<<"\n		case 'i':"
								<<"\n			cout<<''vowel'';"
								<<"		break;"
								<<"\n		case 'o':"
								<<"\n			cout<<''vowel'';"
								<<"		break;"
								<<"\n		case 'u':"
								<<"\n			cout<<''vowel'';"
								<<"		break;"
								<<"\n		default"
								<<"\n			cout<<''Consonent'';"
								<<"\n  /*switch ends*/   }"
								<<"\n  /*Program ends*/  }";
								cout<<"\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (3, b) ends*/ break;}
						
						case 'c':
							{ system("cls");
							cout<<"\t\t # SIMPLE CALCULATOR PROGRAM #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"   float x,y;    char ch;"
								<<"\n	cout<<''Enter first number'';"
								<<"\n	cin>>x;"
								<<"\n	cout<<''Enter second number'';"
								<<"\n	cin>>y;"
								<<"\n	cout<<''Enter + for add - for sub * for multiply / for div'';"
								<<"\n	cin>>ch;"
								<<"\n	switch(ch)"
								<<"	{"		
								<<"\n		case '+':"
								<<"\n			cout<<''Add=''<<(x+y);"
								<<"		break;"
								<<"\n		case '-':"
								<<"\n			cout<<''Sub=''<<(x-y);"
								<<"		break;"
								<<"\n		case '*':"
								<<"\n			cout<<''Multiply=''<<(x*y);"
								<<"		break;"
								<<"\n		case '/':"
								<<"\n			cout<<''Div=''<<(x/y);"
								<<"		break;"
								<<"\n		default"
								<<"\n			cout<<''Invalid Input..!'';"
								<<"\n  /*switch ends*/   }"
								<<"\n  /*Program ends*/  }";
								cout<<"\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (3, c) ends*/ break;}
			
						case 'd':
							{ system("cls");
							cout<<"\t\t # SIMPLE ATM PROGRAM #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"   float amt,creditamt,debitamt;    char ch;"
								<<"\n	cout<<''Enter initial amount '';"
								<<"	cin>>amt;"
//								continue........................
								<<"\n	cout<<''Enter c  for credit d for debit b for balance'';"
								<<"\n	cin>>ch;"
								<<"\n	switch(ch)"
								<<"	{"		
								<<"		case 'c':"
								<<"\n			cout<<''Enter credit amount'';"
								<<"\n			cin>>creditamt;"
								<<"\n			amt=amt+creditamt;"
								<<"\n			cout<<''New Amount=''<<amt;"
								<<"		break;"
								<<"\n		case 'd':"
								<<"\n			cout<<''Enter debit amount'';"
								<<"\n			cin>>debitamt;"
								<<"\n			if(amt>=debitamt)"
								<<"\n			{"
								<<"	    amt=amt-debitamt;"
								<<"\n			    cout<<''New Amount=''<<amt;"
								<<"		}"
								<<"\n			else"
								<<"\n			cout<<''Insufficient amount'';"
								<<"		break;"
								<<"\n		case 'b':"
								<<"\n			cout<<''Amount in your account=''<<amt;"
								<<"		break;"
								<<"\n		default"
								<<"\n			cout<<''Invalid Input..!'';"
								<<"\n  /*switch ends*/   }"
								<<"  /*Program ends*/  }";
								cout<<"\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (3, d) ends*/ break;}
			/*case 3 switch ends*/}
					/* case 3 ends*/ break; } 
					case 4:
					{ system("cls");
					cout<<"\t\t# FOR LOOP PROGRAM LIST #\n\n";
					cout<<"a. Table of any number\n";
					cout<<"b. Priny A,B,C..........,Z\n";
					cout<<"c. Print EVEN all numbers between 1 and 20\n";
					cout<<"d. Factorial of any number\n";
					cout<<"\n\nEnter your choice==> ";
					cin>>op2;
					switch(op2)
					{
						case 'a':
							{ system("cls");
							cout<<"\t\t # TABLE OF ANY NUMBER #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int no;"
								<<"\n	cout<<''Enter any number'';"
								<<"\n	cin>>no;"
								<<"\n	 for(int i=1;i<=10;i++)"
								<<"\n	 {"
								<<"\n	 cout<<no*i<<endl; "
								<<"\n  /*for ends*/   }"
								<<"  /*Program ends*/  }";
								cout<<"\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (4, a) ends*/ break;}
						case 'b':
							{ system("cls");
							cout<<"\t\t # PRINT A B C ..... Z #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"\n	  for(char ch='A';ch<='Z';ch++)"
								<<"\n	 {"
								<<"\n	 cout<<ch<<'' ''; "
								<<"\n    } /*for ends*/"
								<<"\n  } /*Program ends*/";
								cout<<"\n\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (4, b) ends*/ break;}
						case 'c':
							{ system("cls");
							cout<<"\t\t # PRINT ALL  EVEN NUMBERS BETWEEN 1 AND 20 #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"\n	cout<<''Even number b/w 1 and 20 is given below'';"
								<<"\n	 for(int i=2;i<=20;i=i+2)"
								<<"\n	 {"
								<<"\n	 cout<<i<<endl; "
								<<"\n  /*for ends*/   }"
								<<"\n  /*Program ends*/  }";
								cout<<"\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (4, c) ends*/ break;}
						case 'd':
							{ system("cls");
							cout<<"\t\t # FACTORIAL OF ANY NUMBER #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int no;"
								<<"\n	cout<<''Enter any number'';"
								<<"\n	cin>>no;"
								<<"\n	 for(int i=1;i<=no;i++)"
								<<"\n	 {"
								<<"\n	 f=f*i; "
								<<"\n  /* for ends*/   }"
								<<"\n   cout<<''Factorial of ''<<no<<'' is: ''<<f;"
								<<"  /*Program ends*/  }";
								cout<<"\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (4, d) ends*/ break;}
			/*case 4 switch ends*/}
					/* case 4 ends*/ break; }	
					case 5:
					{ system("cls");
					cout<<"\t\t# WHILE LOOP PROGRAM LIST #\n\n";
					cout<<"a. Print digits of integer value in reverse order\n";
					cout<<"b. Find sum of digits of integer value\n";
					cout<<"c. Print given number is ARMSTRONG or not\n";
					cout<<"d. Find multiplication of digits of integer value\n";
					cout<<"\n\nEnter your choice==> ";
					cin>>op2;
					switch(op2)
					{
						case 'a':
							{ system("cls");
							cout<<"\t\t # PRINT DIGITS OF INTEGER VALUE IN REVERSE ORDER #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int no , b;"
								<<"\n	cout<<''Enter any number'';"
								<<"\n	cin>>no;"
								<<"\n	cout<<''Reverse is given below'';"
								<<"\n	while(no!=0)"
								<<"\n	{"
								<<"\n		b=no%10;"
								<<"\n	cout<<b;"
								<<"\n	no=no/10;"
								<<"\n     }"
								<<"  /*Program ends*/  }";
								cout<<"\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (5, a) ends*/ break;}
					case 'b':
							{ system("cls");
							cout<<"\t\t #  FIND SUM OF DIGITS OF INTEGER VALUE #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int no,b,sum=0;"
								<<"\n	cout<<''Enter any number'';"
								<<"\n	cin>>no;"
								<<"\n	while(no!=0)"
								<<"\n	{"
								<<"\n		b=no%10;"
								<<"\n		sum=sum+b;"
								<<"\n		no=no/10;"
								<<"\n     }"
								<<"\n	cout<<''Total sum of digits=''<<sum;"
								<<"  /*Program ends*/  }";
								cout<<"\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (5, b) ends*/ break;}
					case 'c':
							{ system("cls");
							cout<<"\t\t #  PRINT GIVEN NUMBER IS ARMSTRONG OR NOT #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int no,b,sum=0,copy;"
								<<"\n	cout<<''Enter any number'';"
								<<"\n	cin>>no;"
								<<"\n	copy=no;"
								<<"\n	while(no!=0)"
								<<"\n	{"
								<<"\n		b=no%10;"
								<<"\n		sum=sum+(b*b*b);"
								<<"\n		no=no/10;"
								<<"\n     }"
								<<"\n     if(copy==sum)"
								<<"\n			cout<<''Number is Armstrong'';"
								<<"\n	else"
								<<"\n			cout<<''Number is Not Armstrong'';"
								<<"  /*Program ends*/  }";
								cout<<"\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (5, c) ends*/ break;}
					case 'd':
							{ system("cls");
							cout<<"\t\t #  FIND MULTIPLICATION OF DIGITS OF INTEGER VALUE #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int no,bm=1;"
								<<"\n	cout<<''Enter any number'';"
								<<"\n	cin>>no;"
								<<"\n	while(no!=0)"
								<<"\n	{"
								<<"\n		b=no%10;"
								<<"\n		m=m*b;"
								<<"\n		no=no/10;"
								<<"\n     }"
								<<"\n	cout<<''Total multiply of digits=''<<m;"
								<<"  /*Program ends*/  }";
								cout<<"\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (5, d) ends*/ break;}
			/*case 5 switch ends*/}
					/* case 5 ends*/ break; } 
					case 6:
					{ system("cls");
					cout<<"\t\t# DO WHILE LOOP PROGRAM LIST #\n\n";
					cout<<"a. Print digits of integer value in reverse order\n";
					cout<<"b. Check number is palindromes or not\n";
					cout<<"c. Find first and last digit of given integer\n";
					cout<<"d. Find multiplication of digits of integer value\n";
					cout<<"\n\nEnter your choice==> ";
					cin>>op2;
					switch(op2)
					{
						case 'a':
							{ system("cls");
							cout<<"\t\t # PRINT DIGITS OF INTEGER VALUE IN REVERSE ORDER #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int no , b;"
								<<"\n	cout<<''Enter any number'';"
								<<"\n	cin>>no;"
								<<"\n	cout<<''Reverse is given below'';"
								<<"\n	do"
								<<"\n	{"
								<<"\n		b=no%10;"
								<<"\n	cout<<b;"
								<<"\n	no=no/10;"
								<<"\n     }"
								<<"\n	while(no!=0)"
								<<"  /*Program ends*/  }";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (6, a) ends*/ break;}
					case 'b':
							{ system("cls");
							cout<<"\t\t #  CHECK NUMBER IS PALINDROMES OR NOT  #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int no,b,rev=0,cpy;"
								<<"\n	cout<<''Enter any number'';"
								<<"\n	cin>>no;"
								<<"\n	cpy=no;"
								<<"\n	do"
								<<"\n	{"
								<<"\n		b=no%10;"
								<<"\n		rev=rev*10+b;"
								<<"\n		no=no/10;"
								<<"\n     }"
								<<"\n     while(no!=0);"
								<<"\n   if(cpy==rev) "
								<<"\n		cout<<''Palindrome'';"
								<<"\n	else"
								<<"\n		cout<<''Not Palindrome'';"
								<<"  /*Program ends*/  }";
								cout<<"\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (6, b) ends*/ break;}
					case 'c':
							{ system("cls");
							cout<<"\t\t #  FIND FIRST AND LAST DIGIT OF GIVEN INTEGER #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int no,b,f;"
								<<"\n	cout<<''Enter any number'';"
								<<"\n	cin>>no;"
								<<"\n	f=no%10;"
								<<"\n	do"
								<<"\n	{"
								<<"\n		b=no%10;"
								<<"\n		no=no/10;"
								<<"\n     }"
								<<"\n     while(no!=0);"
								<<"\n	cout<<''First digit=''<<b<<'' and Last digit=''<<f;"
								<<"  /*Program ends*/  }";
								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (6, c) ends*/ break;}
					case 'd':
							{ system("cls");
							cout<<"\t\t #  FIND MULTIPLICATION OF DIGITS OF INTEGER VALUE #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"     int no,b,m=1;"
								<<"\n	cout<<''Enter any number'';"
								<<"\n	cin>>no;"
								<<"\n	do"
								<<"\n	{"
								<<"\n		b=no%10;"
								<<"\n		m=m*b;"
								<<"\n		no=no/10;"
								<<"\n     }"
								<<"\n     while(no!=0);"
								<<"\n	cout<<''Total multiply of digits=''<<m;"
								<<"  /*Program ends*/  }";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (6, d) ends*/ break;}
			/*case 6 switch ends*/}
			/* case 6 ends*/ break; } 
			case 7:
					{ system("cls");
					cout<<"\t\t# POINTERS PROGRAM LIST #\n\n";
					cout<<"a. Addition of two numbers\n";
					cout<<"b. Pointer to array\n";
					cout<<"c. Pointer to function\n";
					cout<<"d. Pointer to structure\n";
					cout<<"\n\nEnter your choice==> ";
					cin>>op2;
					switch(op2)
					{
						case 'a':
							{ system("cls");
							cout<<"\t\t # ADDITION OF TWO NUMBERS #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int a,b=20,c=30;"
								<<"\n	 int *p,*q,*r;"
								<<"\n	p=&a;"
								<<"\n	q=&b;"
								<<"\n	r=&c;"
								<<"\n	*p=*q+*r;"
								<<"\n	 cout<<''Add=''<<*p;"
								<<"\n  /*Program ends*/  }";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (7, a) ends*/ break;}
					case 'b':
							{ system("cls");
							cout<<"\t\t # POINTER TO ARRAY #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"\n   int ar[10]={10,20,50,40,60,80,70,25,45,65};"
								<<"\n	 for(int i=0;i<=9;i++)"
								<<"\n	{"
								<<"\n		cout<<*(ar+i)<<''\n'';"
								<<"\n	}"
								<<"\n  /*Program ends*/  }";
								cout<<"\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (7, b) ends*/ break;}
					case 'c':
							{ system("cls");
							cout<<"\t\t # POINTER TO FUNCTION #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nvoid area(int *h,int *w)"
								<<"\n{"
								<<"\n int ar=*h * *w;"
								<<"\ncout<<''Area of rectangle=''<<ar;"
								<<"\n}"
								<<"\nint main()"
								<<"\n  {"
								<<"\n   int x,y;"
								<<"\n	cout<<''Enter height: '';"
								<<"\n	cin>>x;"
								<<"\n	cout<<''Enter width: '';"
								<<"\n	cin>>y;"
								<<"\n	area(&x,&y);"
								<<"\n  /*Program ends*/  }";
								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (7, C) ends*/ break;}
					case 'd':
							{ system("cls");
							cout<<"\t\t # POINTER TO STRUCTURE #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nstruct Student"
								<<"\n{"
								<<"\n int rollno;"
								<<"\n}"
								<<"\nint main()"
								<<"\n  {"
								<<"\n   struct Student obj_roll;"
								<<"\n	obj_roll.rollno=205;"
								<<"\n	struct Student *r;"
								<<"\n	r=&obj_roll;"
								<<"\n	cout<<''Roll number=''<<*r;"
								<<"\n  /*Program ends*/  }";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (7, d) ends*/ break;}
			/*case 7 switch ends*/}
			/* case 7 ends*/ break; }
			case 8:
					{ system("cls");
					cout<<"\t\t# ARRAYS PROGRAM LIST #\n\n";
					cout<<"a. Print all the elements of array\n";
					cout<<"b. Find maximum value from array\n";
					cout<<"c. Copy elements of one array to other\n";
					cout<<"d. Bubble sorting to array\n";
					cout<<"\n\nEnter your choice==> ";
					cin>>op2;
					switch(op2)
					{
						case 'a':
							{ system("cls");
							cout<<"\t\t #  PRINT ALL THE ELEMENTS OF ARRAY #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int ar[5]={10,20,50,40,60};"
								<<"\n	 for(int i=0;i<=4;i++)"
								<<"\n	cout<<ar[i]<<endl;"
								<<"\n  /*Program ends*/  }";
								cout<<"\n\n\n\n\n\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (8, a) ends*/ break;}
						case 'b':
							{ system("cls");
							cout<<"\t\t #  FIND MAXIMUM VALUE FROM ARRAY #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int a[100],n,i,max;"
								<<"\n	 cout<<''Enter how many number you want to store '';"
								<<"\n	cin>>n;"
								<<"\n	cout<<''Enter ''<<n<<'' number one by one'';"
								<<"\n	for(i=0;i<n;i++)"
								<<"\n	cin>>a[i];"
								<<"\n	max=a[0];"
								<<"\n	for(i=0;i<n;i++)"
								<<"\n	{"
								<<"\n	if(max<a[i])"
								<<"\n	max=a[i];;"
								<<"\n	}"
								<<"\n	cout<<''Maximum value=''<<max;"
								<<"\n  /*Program ends*/  }";
								cout<<"\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (8, b) ends*/ break;}
			case 'c':
							{ system("cls");
							cout<<"\t\t #  COPY ELEMENTS OF ONE ARRAY TO OTHER #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int a[5]={10,20,30,50,90}; int b[5],i;"
								<<"\n	 cout<<''First array is given below:'';"
								<<"\n	for(i=0;i<=4;i++)"
								<<"\n	{"
								<<"\n		cout<<a[i]<<'' '';"
								<<"\n		b[i]=a[i];"
								<<"\n	}"
								<<"\n	cout<<''After copy second array is given below'';"
								<<"\n	 for(i=0;i<=4;i++)"
								<<"\n	if(max<a[i])"
								<<"\n	cout<<b[i]<<'' '';"
								<<"\n	}";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (8, c) ends*/ break;}
			
						case 'd':
							{ system("cls");
							cout<<"\t\t #   BUBBLE SORTING IN ARRAY  #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"    int n,i,j,temp, arr[50];"
								<<"\n	 cout<<''Enter total number of elements:'';"
								<<"\n	cin>>n;"
								<<"\n	cout<<''Enter ''<<n<<'' number one by one'';"
								<<"\n	for(i=0;i<n;i++)"
								<<"\n	cin>>arr[i];"
//								<<"\n	max=a[0];"
								<<"\n	for(i=0;i<(n-1);i++)"
								<<"\n	{"
								<<"\n		for(j=0; j<(n-i-1); j++)"
								<<"\n		{"
								<<"\n			if(arr[j]>arr[j+1])"
								<<"\n			{"
								<<"\n				temp=arr[j];"
								<<"\n				arr[j]=arr[j+1];"
								<<"\n				arr[j+1]=temp;"
								<<"\n			}"
								<<"\n		}"
								<<"\n	}"
								<<"\n	cout<<''Sorted list in ascending order :'';"
								<<"\n	for(i=0; i<n; i++)"
								<<"\n		{"
								<<"\n			cout<<arr[i]<<'' '';"
								<<"\n		}"
								<<"\n  /*Program ends*/  }";
								cout<<"\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (8, d) ends*/ break;}
			/*case 8 switch ends*/}
			/* case 8 ends*/ break; }
			case 9:
					{ system("cls");
					cout<<"\t\t# DOUBLE DIMENSION ARRAYS PROGRAM LIST #\n\n";
					cout<<"a. Print all the elements of array\n";
					cout<<"b. Transpose of double array\n";
					cout<<"c. User input\n";
					cout<<"\n\nEnter your choice==> ";
					cin>>op2;
					switch(op2)
					{
						case 'a':
							{ system("cls");
							cout<<"\t\t #  PRINT ALL THE ELEMENTS OF ARRAY #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"   int array[3][3]={{7,8,9},{1,2,3},{4,5,6}};"
								<<"\n	 cout<<''Elements of array is given below: '';"
								<<"\n	for(int i=0;i<=2;i++)"
								<<"\n	{"
								<<"\n		for(int j=0;j<=2;j++)"
								<<"\n		{"
								<<"\n			cout<<array[i][j]<<'' '';"
								<<"\n		}"
								<<"\n		cout<<endl;"
								<<"\n	}"
								<<"\n  }";
								cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (9, a) ends*/ break;}
						case 'b':
							{ system("cls");
							cout<<"\t\t # TRANSPOSE OF DOUBLE DIMENSION ARRAY #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"   int array[2][2]={{5,5},{9,9}};  int i,j,k,sum;"
								<<"\n	 cout<<''First array is given below: '';"
								<<"\n	for(int i=0;i<2;i++)"
								<<"\n	{"
								<<"\n		for(int j=0;j<2;j++)"
								<<"\n		{"
								<<"\n			cout<<array[i][j]<<'' '';"
								<<"\n		}"
								<<"\n		cout<<endl;"
								<<"\n	}"
								<<"\n	 cout<<''Transpose of Array is given below:'';"
								<<"\n	for(int i=0;i<2;i++)"
								<<"\n	{"
								<<"\n		for(int j=0;j<2;j++)"
								<<"\n		{"
								<<"\n			cout<<array[j][i]<<'' '';"
								<<"\n		}"
								<<"\n		cout<<endl;"
								<<"\n	}"
								<<"\n  }";
								cout<<"\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (9, b) ends*/ break;}
					case 'c':
							{ system("cls");
							cout<<"\t\t # USER INPUT #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint main()"
								<<"\n  {"
								<<"  int array[50][50],row,col;  int i,j;"
								<<"\n	 cout<<''Enter row: '';"
								<<"\n	cin>>row;"
								<<"\n	 cout<<''Enter col: '';"
								<<"\n	cin>>col;"
								<<"\n	 cout<<''Elements of array is given below: '';"
								<<"\n	for(i=0;i<row;i++)"
								<<"\n	{"
								<<"\n		for(int j=0;j<col;j++)"
								<<"\n		{"
								<<"\n			cout<<array[i][j]<<'' '';"
								<<"\n		}"
								<<"\n		cout<<endl;"
								<<"\n	}"
								<<"\n  }";
								cout<<"\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (9, c) ends*/ break;}
			/*case 9 switch ends*/}
			/* case 9 ends*/ break; }
			case 10:
					{ system("cls");
					cout<<"\t\t# FUNCTIONS PROGRAM LIST #\n\n";
					cout<<"a. Functions with no return type and no parameter\n";
					cout<<"b. Functions with no return type and with parameter\n";
					cout<<"c. Functions with return type and no parameter\n";
					cout<<"d. Functions with return type and parameter\n";
					cout<<"e. Call by refrence\n";
					cout<<"\n\nEnter your choice==> ";
					cin>>op2;
					switch(op2)
					{
						case 'a':
							{ system("cls");
							cout<<"\t\t #  FUNCTION WITH NO RETURN TYPE AND NO PARAMETERS  #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nvoid add()"
								<<"\n{"
								<<"\n	int x,y=70,z=50;"
								<<"\n	x=y+z;"
								<<"\n	cout<<''Add=''<<x;"
								<<"\n}"
								<<"\nint main()"
								<<"\n  {"
								<<"\n  		add();"
								<<"\n  }";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (10, a) ends*/ break;}
					case 'b':
							{ system("cls");
							cout<<"\t\t #  FUNCTION WITH NO RETURN TYPE AND WITH PARAMETERS  #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nvoid add(int y,int z;)"
								<<"\n{"
								<<"\n	int x;"
								<<"\n	x=y+z;"
								<<"\n	cout<<''Add=''<<x;"
								<<"\n}"
								<<"\nint main()"
								<<"\n  {"
								<<"\n  		add(10,20);"
								<<"\n  }";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (10, b) ends*/ break;}
			case 'c':
							{ system("cls");
							cout<<"\t\t #  FUNCTION WITH RETURN TYPE AND NO PARAMETERS  #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint add()"
								<<"\n{"
								<<"\n	int x,y=70,z=50;"
								<<"\n	x=y+z;"
								<<"\n	return x;"
								<<"\n}"
								<<"\nint main()"
								<<"\n  {"
								<<"\n  		int rs=add();"
								<<"\n  		cout<<''Add=''<<rs;"
								<<"\n  }";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (10, c) ends*/ break;}
					case 'd':
							{ system("cls");
							cout<<"\t\t #  FUNCTION WITH RETURN TYPE AND PARAMETERS  #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nint add(int y,int z)"
								<<"\n{"
								<<"\n	int x;"
								<<"\n	x=y+z;"
								<<"\n	return x;"
								<<"\n}"
								<<"\nint main()"
								<<"\n  {" 
								<<"\n  		int rs=add(10,20);"
								<<"\n  		cout<<''Add=''<<rs;"
								<<"\n  }";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (10, d) ends*/ break;}
			case 'e':
							{ system("cls");
							cout<<"\t\t #  CALL BY REFRENCE  #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nvoid add(int *y,int *z;)"
								<<"\n{"
								<<"\n	int x;"
								<<"\n	x=*y+*z;"
								<<"\n	cout<<''Add=''<<x;"
								<<"\n}"
								<<"\nint main()"
								<<"\n  {"
								<<"\n  		int a=20,b=50;"
								<<"\n  		add(&a,&b);"
								<<"\n  }";
								cout<<"\n\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (10, e) ends*/ break;}
			/*case 10 switch ends*/}
			/* case 10 ends*/ break; }
			case 11:
					{ system("cls");
					cout<<"\t\t# STRUCTURE PROGRAM LIST #\n\n";
					cout<<"a. Input students details\n";
					cout<<"b. User Input\n";
					cout<<"c. Pointer to structure\n";
					cout<<"d. Array to structure\n";
					cout<<"\n\nEnter your choice==> ";
					cin>>op2;
					switch(op2)
					{
						case 'a':
							{ system("cls");
							cout<<"\t\t #  INPUT STUDENT DETAILS #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nstruct Student"
								<<"\n{"
								<<"\n	char name[200];"
								<<"\n	int rollno;"
								<<"\n	float marks;"
								<<"\n};"
								<<"\nint main()"
								<<"\n  {"
								<<"\n  		struct Student obj;"
								<<"\n  		strcpy(obj.name,''Marya Baloch'');"
								<<"\n  		obj.rollno=205;"
								<<"\n  		obj.marks=85.4;"
								<<"\n  		cout<<''Name=''<<obj.name<<endl;"
								<<"\n  		cout<<''Rollno=''<<obj.rollno<<endl;"
								<<"\n  		cout<<'Marks=''<<obj.marks<<endl;"
								<<"\n  }";
								cout<<"\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (11, a) ends*/ break;}
						case 'b':
							{ system("cls");
							cout<<"\t\t #  USER INPUT #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nstruct Arithmetic"
								<<"\n{"
								<<"\n	int x,y,z;"
								<<"\n};"
								<<"\nint main()"
								<<"\n  {"
								<<"\n  		struct Arithmetic obj;"
								<<"\n  		cout<<''Enter first number'';"
								<<"\n  		cin>>obj.y"
								<<"\n  		cout<<''Enter second number'';"
								<<"\n  		cin>>obj.z"
								<<"\n  		obj.x=obj.y+obj.z;"
								<<"\n  		cout<<'Add=''<<obj.x;"
								<<"\n  }";
								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (11, b) ends*/ break;}
						case 'c':
							{ system("cls");
							cout<<"\t\t #  POINTER TO STRUCTURE #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nstruct Student"
								<<"\n{"
								<<"\n	int rollno;"
								<<"\n};"
								<<"\nint main()"
								<<"\n  {"
								<<"\n  		struct Student obj_roll;"
								<<"\n  		obj_roll.rollno=205;"
								<<"\n  		struct Student *r;"
								<<"\n  		r=&obj_roll;"
								<<"\n  		cout<<''Roll number=''<<*r;"
								<<"\n  }";
								cout<<"\n\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (11, c) ends*/ break;}
						case 'd':
							{ system("cls");
							cout<<"\t\t #  ARRAY TO STRUCTURE #\n";
							cout<<"#include<iostream>"
								<<"\nusing namespace std;"
								<<"\nstruct ArrayToStruct"
								<<"\n{"
								<<"\n	int x;"
								<<"\n};"
								<<"\nint main()"
								<<"\n  {"
								<<"\n  		struct ArrayToStruct obj_array[5];"
								<<"\n  		cout<<''Enter  5 value one by one'';"
								<<"\n  		for(int i=0;i<5;i++)"
								<<"\n  		cin>>obj_array[i].x;"
								<<"\n  		cout<<''Element is given below:''"
								<<"\n  		for(int j=0;j<5;j++)"
								<<"\n  		cout<<obj_array[j].x<<'' '';"
								<<"\n  }";
								cout<<"\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1 \nFor exit ==> Press 2\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto ex; break;
								}
			/*if conditions end*/		}
			/* case (11, d) ends*/ break;}
			/*case 11 switch ends*/}
			/* case 11 ends*/ break; }
		 /* switch ends*/} 
		/*program ends*/} 
QA: 
			{ system("cls");
		 		cout<<"\t\t\t# Interview Questions #\n";
		 		line(); cout<<endl; line();
				 cout<<"\n\n\n1. What is C++ Language?\t\t";
		 		cout<<"11. What is operand?\n";
		 		cout<<"2. When was C++ developed?\t\t";
		 		cout<<"12.What is keyword?\n";
		 		cout<<"3. What is looping?\t\t\t";
		 		cout<<"13. How many parts of FOR LOOP?\n";
		 		cout<<"4. What is predefined function?\t\t";
		 		cout<<"14. Types of Operator?\n";
		 		cout<<"5. What is break Statement?\t\t";
		 		cout<<"15. What is variable?\n";
		 		cout<<"6. Who developed C++?\t\t\t";
		 		cout<<"16. What is goto statement?\n";
		 		cout<<"7. What is a global variable?\t\t";
		 		cout<<"17 Types of Loops?\n";
		 		cout<<"8. What is Do While?\t\t\t";
		 		cout<<"18. Length on int ?\n";
		 		cout<<"9. What is data type?\t\t\t";
		 		cout<<"19. What is an object?\n";
		 		cout<<"10. What is assignment operator?\t";
		 		cout<<"20. What is cin?";
				 cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1\nFor Tutorial menu ==> Press 2 \nFor exit ==> Press 3\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto tuto; break;
									case 3: goto ex;
								}
			/*if conditions end*/		}
				 } 
developer: { system("cls"); 
			line(); cout<<endl;
		  	stars(); cout<<endl;
			line();
			cout<<"\n\n\t\t\tProgram Developed by";
			cout<<"\n\n\t\t\tEngineer Marya Baloch\n\t\t";
			cout<<"\t\t19SW20\n\t\t";
			cout<<"    Software Engineering student at\n\t\t\tMEHRAN UET Jamshoro\n\n\n\n\n\n";
			cout<<"\n\n\n\npress 'n' for next >> "; cin>>next;
								if(next='n')
								{ system("cls");
								cout<<"\n\n";
								line(); cout<<endl; line();
								cout<<"\n\n\nFor programs menu ==> Press 1\nFor Tutorial menu ==> Press 2 \nFor exit ==> Press 3\n>>>"; cin>>ans;
								switch(ans)
								{
									case 1: goto prog; break;
									case 2: goto tuto; break;
									case 3: goto ex; break;
								}
			/*if conditions end*/		}
		   } 
ex:  { exit; } 
 
				
			
	return 0; }
