#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <sstream>
#include <time.h>

using namespace std;
int criminal_id_int;
int criminal_height_int;
int criminal_fir_int;

const  int maxrow = 20;
int  ID[maxrow] = {};
void date1();
int login();
string Name[maxrow] = {};
string Crime[maxrow] = {};
void callExit();
void delay();
void menu1();
//int count1 = 3;
//void save2();
//date of arrest struct
struct date
{
	string day;
	string month;
	string year;

};


void date1()
{
	time_t T = time(NULL);
	//struct  tm tm = *localtime(&T);
	struct tm tm;
	localtime_s(&tm, &T);

	cout << "\n\n\n";
	cout << "\t\t\t\t\t   Date:" << tm.tm_mday << "/" << tm.tm_mon + 1 << "/" << tm.tm_year + 1900 << "\n";
}
void delay(unsigned int mseconds)
{
	clock_t goal = mseconds + clock();
	while (goal > clock());
}
//police station struct
struct police_station
{
	string policename;
	string fir;
};
//the court struct
struct court
{
	string court_name;
	string state;
	string crime;
	string act;
};
//the criminal discrption
struct discrp
{
	string skin;
	string face_disc;
	string hight;
	string identfication_mark;
	string eye_color;
};
struct convict
{
	string id;
	string name;
	string gender;
	string address;
	string  age;
	date doa;
	police_station station;
	court cou;
	discrp dis;
}criminal, cri1, cri2, cri3;
//void list() {
//	cri1.id = "6";
//	cri1.name = "karam";
//	cri1.gender = 'M';
//	cri1.address = "nasr city";
//	cri1.age = 20;
//	cri1.cou.court_name = "nasr city court";
//	cri1.cou.state = "cairo";
//	cri1.cou.crime = "murder";
//	cri1.cou.act = "He was arrested";
//	cri1.dis.skin = "Wheaten skin";
//	cri1.dis.face_disc = "big nose,small eyes,curly hair";
//	cri1.dis.identfication_mark = "with beard";
//	cri1.dis.eye_color = "brown";
//	cri1.dis.hight = 189;
//	cri1.doa.day = "24";
//	cri1.doa.month = "9";
//	cri1.doa.year = "2001";
//	//_____
//	cri2.id = "9";
//	cri2.name = "Ahmed";
//	cri2.gender = 'M';
//	cri2.address = "kerdasa";
//	cri2.age = 24;
//	cri2.cou.court_name = "kerdasa court";
//	cri2.cou.state = " Giza";
//	cri2.cou.crime = "thief";
//	cri2.cou.act = "He was arrested";
//	cri2.dis.skin = "White";
//	cri2.dis.face_disc = "smooth hair,wide eyes,withe teeth";
//	cri2.dis.identfication_mark = "with beard";
//	cri2.dis.eye_color = "hazel brown";
//	cri2.dis.hight = 179;
//	cri2.doa.day = "1";
//	cri2.doa.month = "7";
//	cri2.doa.year = "1997";
//	//_____
//	cri3.id = "27";
//	cri3.name = "ablaa";
//	cri3.gender = 'F';
//	cri3.address = "el khsos";
//	cri3.age = 36;
//	cri3.cou.court_name = "el khsos court";
//	cri3.cou.state = "Qalyubia";
//	cri3.cou.crime = "murder";
//	cri3.cou.act = "sHe was arrested";
//	cri3.dis.skin = "Wheaten skin";
//	cri3.dis.face_disc = "big nose,big mouth";
//	cri3.dis.identfication_mark = "short";
//	cri3.dis.eye_color = "brown";
//	cri3.dis.hight = 150;
//	cri3.doa.day = "5";
//	cri3.doa.month ="3" ;
//	cri3.doa.year = "1985";
//}

convict data1[maxrow] = {};
void Add()
{
	system("cls");
	while (true)// handling the test case that the user enter char(s)
	{
		cout << "\n\n\n\t Enter The Criminal ID 'Please Enter A Number':\n";
		cin >> criminal.id;
		stringstream streamm(criminal.id);//explained in line 95
		streamm >> criminal_id_int;
		if (criminal_id_int == 0)
		{
			cout << "\n\n\t     Enter a valid Criminal ID" << endl;
			continue;
		}
		else
			break;
	}

	cin.ignore();
	cout << "\t Enter the Criminal name:\n";
	getline(cin, criminal.name);
	cout << "\t Enter the Criminal Gender:(F Or M)\n";
	do
	{
		cin >> criminal.gender;

		if (criminal.gender == "f" || criminal.gender == "m" || criminal.gender == "M" || criminal.gender == "F")
		{
			break;
		}
		else
		{
			cout << "\t  Please Enter the  RIGHT Criminal Gender :\n";
			continue;

		}
	} while (true);
	cin.ignore();
	cout << " \t Enter the Criminal address:\n";
	getline(cin, criminal.address);


	while (true) {
		int criminal_age_int;
		cout << "\t Enter the Criminal age:\n";
		cin >> criminal.age;
		stringstream age_to_int(criminal.age);

		age_to_int >> criminal_age_int;
		// copy the valu of criminal.age as int value in criminal_age_int
		// criminal_age_int has the in value of criminal.age
		// if criminal.age has chars the criminal_age_int will be zero else it will have the int value
		// for example criminal.age="abc"==> criminal_age_int=0
		//criminal.age="123"==>criminal_age_int=123
		cin.ignore();
		if (criminal_age_int >= 5 && criminal_age_int <= 100) break;
		else {
			cout << "\t Please Enter an Valid Age ! \n";
			continue;
		}
	}
	system("CLS");
	cout << "\t\t\t\t\t\tCourt Information\n" << "\t\t\t\t\t\t------------------\n";
	cout << "\t Enter the court\n";
	getline(cin, criminal.cou.court_name);
	cout << "\t Enter the state\n";
	getline(cin, criminal.cou.state);
	cout << "\t Enter the crime\n";
	getline(cin, criminal.cou.crime);
	cout << "\t Enter the act\n";
	getline(cin, criminal.cou.act);
	system("CLS");

	cout << "\n\n\t\t\tDESCRIPTION\n" << "\t\t\t\t------------------\n";
	cout << "\t Enter the color of the criminal skin\n";
	getline(cin, criminal.dis.skin);
	cout << "\t Enter the   criminal face discprtion\n";
	getline(cin, criminal.dis.face_disc);

	cout << "\t Enter the  criminal most  identfication mark\n";
	getline(cin, criminal.dis.identfication_mark);
	cout << "\t Enter the eye color of the criminal  \n";
	getline(cin, criminal.dis.eye_color);
	cout << "\t Enter the hieght of the criminal  \n";
	while (true) {
		cin >> criminal.dis.hight;
		stringstream height_to_int(criminal.dis.hight);
		height_to_int >> criminal_height_int;
		if (criminal_height_int >= 100 && criminal_height_int <= 200)
		{
			break;
		}
		else {
			cout << "\t InValid height ,Please enter a Vaild height" << endl;
			continue;
		}
	}
	system("CLS");
	cin.ignore();
	cout << "\t\t\t\t\t\tPolice Station Information\n" << "\t\t\t\t\t\t--------------------------\n";
	cout << "\t Enter the name of The police station\n";
	getline(cin, criminal.station.policename);
	cout << "\t Enter the fir of The case:\n";
	getline(cin, criminal.station.fir);
	cout << "\t\t\t\t\t\tEnter The Date Of Arrest :\n" << "\t\t\t\t\t\t------------------------\n";
	cout << "\t Enter The Day : \n";
	while (true) {
		int criminal_day_int;
		cin >> criminal.doa.day;
		stringstream day_to_int(criminal.doa.day);
		day_to_int >> criminal_day_int;
		if (criminal_day_int >= 1 && criminal_day_int <= 31)
		{
			break;
		}

		else {
			cout << "\t InValid Day ,Please enter a Vaild day" << endl;
			continue;
		}
	}
	cout << "\t Enter The Month\n";

	do
	{
		int criminal_month_int;
		cin >> criminal.doa.month;
		stringstream month_to_int(criminal.doa.month);
		month_to_int >> criminal_month_int;
		if (criminal_month_int >= 1 && criminal_month_int <= 12)
		{
			break;
		}
		else
		{
			cout << "\t INVALID ANSWER !\n";
			cout << "\t Enter in the Month again\n";
			continue;
		}
	} while (true);
	cout << "\t Enter The Year[4nums]\n";

	do
	{
		int criminal_year_int;
		cin >> criminal.doa.year;
		stringstream year_to_int(criminal.doa.year);
		year_to_int >> criminal_year_int;
		if (criminal_year_int >= 1970 && criminal_year_int <= 2022)
		{
			break;
		}
		else
		{
			cout << "\t INVALID ANSWER !\n";
			cout << "\t Enter in the year again\n";
			continue;
		}
	} while (true);
	/*ave2();
   count1++;*/
	cout << "\t\t\t\tThe Data Is Saved Succeffuly" << endl << "\t\t\t\t" << endl << "\t\t\t\t\tThankYou :)" << endl;
	for (int i = 0; i < maxrow; i++) {
		if (ID[i] == '\0') {
			stringstream streamm(criminal.id);// change the string value to its int value
			streamm >> criminal_id_int;
			ID[i] = criminal_id_int;
			Name[i] = criminal.name;
			Crime[i] = criminal.cou.crime;
			data1[i].gender = criminal.gender;
			data1[i].age = criminal.age;
			data1[i].address = criminal.address;
			data1[i].station.policename = criminal.station.policename;
			data1[i].station.fir[2] = criminal.station.fir[2];
			data1[i].cou.court_name = criminal.cou.court_name;
			data1[i].cou.state = criminal.cou.state;
			data1[i].cou.crime = criminal.cou.crime;
			data1[i].cou.act = criminal.cou.act;
			data1[i].dis.skin = criminal.dis.skin;
			data1[i].dis.face_disc = criminal.dis.face_disc;
			data1[i].dis.identfication_mark = criminal.dis.identfication_mark;
			data1[i].dis.eye_color = criminal.dis.eye_color;
			data1[i].doa.day = criminal.doa.day;
			stringstream height_to_int(criminal.dis.hight);
			height_to_int >> criminal_height_int;
			data1[i].dis.hight = criminal_height_int;
			data1[i].doa.day = criminal.doa.day;
			data1[i].doa.month = criminal.doa.month;
			data1[i].doa.year = criminal.doa.year;

			break;
		}
	}
	std::system("pause");
	system("CLS");

}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Search()
{

	string criminal_id;
	int criminal_id_int;
	//system("pause");
	system("CLS"); system("CLS");
	cout << "\t\t\t\t\tCriminal Search" << endl;
	cout << "==============================================================================" << endl;

	while (true)
	{
		cout << "\t Enter criminal id" << endl;
		cin >> criminal_id;
		stringstream id_to_int(criminal_id);
		id_to_int >> criminal_id_int;
		if (criminal_id_int == 0)
		{
			cout << "\t Enter a vaild ID" << endl;
			continue;
		}
		else
		{
			bool is_exist = false;
			char choice;
			for (int i = 0; i < maxrow; i++) {
				if (criminal_id_int == ID[i])
				{
					is_exist = true;
				}
			}
			if (!is_exist)
			{
				cout << "\t The criminal id doesn't exist" << endl;
				char ans;
				cout << "\t Would you like to enter another criminal ID ?  enter(Y/N)" << endl;
				cin >> ans;
				if (ans == 'y' || ans == 'Y')
					continue;
				else if (ans == 'n' || ans == 'N')
				{
					cout << "\t\t\t\t\t Thank You :)";
					break;
				}
				else
				{
					char ans;

					cout << "\t Please Enter A Valid Choice";
					cin >> ans;
					if (ans == 'y' || ans == 'Y')
						continue;
					else if (ans == 'n' || ans == 'N')
					{
						cout << "\t\t\t\t\t Thank You :) ";
						break;
					}
					else
					{

						cout << "\t Please Enter A Valid Choice";
						cin >> ans;
						if (ans == 'y' || ans == 'Y')
							continue;
						else if (ans == 'n' || ans == 'N')
						{
							cout << "\t\t\t\t\t Thank You :) ";
							break;
						}
						else {
							while (ans != 'n' && ans != 'N' && ans != 'Y' && ans != 'y') {
								cout << "Please Enter A Valid Choice";
								cin >> ans;
							}
							if (ans == 'y' || ans == 'Y')
								continue;
							else if (ans == 'n' || ans == 'N')
							{
								cout << "\t\t\t\t\t Thank You :) ";
								break;
							}
						}
					}

				}
			}
			cout << "\t Enter 1 to display info about criminal and 2 to display info about crime" << endl;
			cin >> choice;
			if (choice == '1')
			{
				for (int i = 0; i < maxrow; i++)
				{
					if (criminal_id_int == ID[i])
					{
						cout << "The criminal ID: " << ID[i] << endl;
						cout << "The criminal name: " << Name[i] << endl;
						cout << "The criminal gender: " << data1[i].gender << endl;
						cout << "The criminal age: " << data1[i].age << endl;
						cout << "The criminal address: " << data1[i].address << endl;
						cout << "The criminal action: " << data1[i].cou.act << endl;
						cout << "The criminal skin: " << data1[i].dis.skin << endl;
						cout << "The criminal face discription: " << data1[i].dis.face_disc << endl;
						cout << "The criminal face identification mark: " << data1[i].dis.identfication_mark << endl;
						cout << "The criminal  height: " << data1[i].dis.hight << endl;

						is_exist = true;
					}
				}
				char ans;
				cout << "\t Would you like to enter another criminal ID ?  enter(Y/N)" << endl;
				cin >> ans;
				if (ans == 'y' || ans == 'Y')
					continue;
				else if (ans == 'N' || ans == 'n')
				{
					cout << "\t\t\t\t\t Thank You :)" << endl;
					break;
				}
				else
				{
					cout << "\t Please Enter A Valid Choice";
					cin >> ans;
					if (ans == 'y' || ans == 'Y')
						continue;
					else if (ans == 'n' || ans == 'N')
					{
						cout << "\t\t\t\t\t Thank You :) ";
						break;
					}
					else
					{
						while (ans != 'n' && ans != 'N' && ans != 'Y' && ans != 'y') {
							cout << "\t Please Enter A Valid Choice";
							cin >> ans;
						}
						if (ans == 'y' || ans == 'Y')
							continue;
						else if (ans == 'n' || ans == 'N')
						{
							cout << "\t\t\t\t\t Thank You :) ";
							break;
						}
					}
				}

			}


			else if (choice == '2')
			{
				for (int i = 0; i < maxrow; i++)
				{
					if (criminal_id_int == ID[i])
					{
						cout << "\t The crime name is " << Crime[i] << endl;
						cout << "\t The crime station is " << data1[i].station.policename << endl;
						cout << "\t The fir is " << data1[i].station.fir << endl;
						cout << "\t The court name which releated to the crime  is " << data1[i].cou.court_name << endl;
						cout << "\t The date of the crime  is : " << data1[i].doa.day << "/" << data1[i].doa.month << "/" << data1[i].doa.year << endl;
						is_exist = true;
					}
				}


				char ans;
				cout << "\t Would you like to enter another criminal ID ? enter(Y/N)" << endl;
				cin >> ans;
				if (ans == 'y' || ans == 'Y')
					continue;
				else if (ans == 'N' || ans == 'n')
				{
					break;
				}
				else
				{
					char ans;
					cout << "\t Please Enter A Valid Choice";
					cin >> ans;
					if (ans == 'y' || ans == 'Y')
						continue;
					else if (ans == 'n' || ans == 'N')
					{
						cout << "\t\t\t\t\t Thank You :) ";
						break;
					}
					else
					{
						while (ans != 'n' && ans != 'N' && ans != 'Y' && ans != 'y') {
							cout << "\t Please Enter A Valid Choice";
							cin >> ans;
						}
						if (ans == 'y' || ans == 'Y')
							continue;
						else if (ans == 'n' || ans == 'N')
						{
							cout << "\t\t\t\t\t Thank You :) ";
							break;
						}
					}
				}
			}
			else {
				char choice;
				cout << "\t Please Enter 1 OR 2 !";
				cin >> choice;
				if (choice == '1') {
					for (int i = 0; i < maxrow; i++)
					{
						if (criminal_id_int == ID[i])
						{
							cout << "The criminal ID: " << ID[i] << endl;
							cout << "The criminal name: " << Name[i] << endl;
							cout << "The criminal gender: " << data1[i].gender << endl;
							cout << "The criminal age: " << data1[i].age << endl;
							cout << "The criminal address: " << data1[i].address << endl;
							cout << "The criminal action: " << data1[i].cou.act << endl;
							cout << "The criminal skin: " << data1[i].dis.skin << endl;
							cout << "The criminal face discription: " << data1[i].dis.face_disc << endl;
							cout << "The criminal face identification mark: " << data1[i].dis.identfication_mark << endl;
							cout << "The criminal  height: " << data1[i].dis.hight << endl;

							is_exist = true;
						}
					}
					char ans;
					cout << "\t Would you like to enter another criminal ID ?  enter(Y/N)" << endl;
					cin >> ans;
					if (ans == 'y' || ans == 'Y')
						continue;
					else if (ans == 'N' || ans == 'n')
					{
						cout << "\t\t\t\t\t Thank You :)" << endl;
						break;
					}
					else
					{
						cout << "\t Please Enter A Valid Choice";
						cin >> ans;
						if (ans == 'y' || ans == 'Y')
							continue;
						else if (ans == 'n' || ans == 'N')
						{
							cout << "\t\t\t\t\t Thank You :) ";
							break;
						}
						else
						{
							while (ans != 'n' && ans != 'N' && ans != 'Y' && ans != 'y') {
								cout << "\t Please Enter A Valid Choice";
								cin >> ans;
							}
							if (ans == 'y' || ans == 'Y')
								continue;
							else if (ans == 'n' || ans == 'N')
							{
								cout << "\t\t\t\t\t Thank You :) ";
								break;
							}
						}
					}
				}
				else if (choice == '2')
				{
					for (int i = 0; i < maxrow; i++)
					{
						if (criminal_id_int == ID[i])
						{
							cout << "\t The crime name is " << Crime[i] << endl;
							cout << "\t The crime station is " << data1[i].station.policename << endl;
							cout << "\t The fir is " << data1[i].station.fir << endl;
							cout << "\t The court name which releated to the crime  is " << data1[i].cou.court_name << endl;
							cout << "\t The date of the crime  is : " << data1[i].doa.day << "/" << data1[i].doa.month << "/" << data1[i].doa.year << endl;
							is_exist = true;
						}
					}


					char ans;
					cout << "\t Would you like to enter another criminal ID , enter(Y/N)?" << endl;
					cin >> ans;
					if (ans == 'y' || ans == 'Y')
						continue;
					else if (ans == 'N' || ans == 'n')
					{
						break;
					}
					else
					{
						char ans;
						cout << "\t Please Enter A Valid Choice";
						cin >> ans;
						if (ans == 'y' || ans == 'Y')
							continue;
						else if (ans == 'n' || ans == 'N')
						{
							cout << "\t\t\t\t\t Thank You :) ";
							break;
						}
						else
						{
							while (ans != 'n' && ans != 'N' && ans != 'Y' && ans != 'y') {
								cout << "\t Please Enter A Valid Choice";
								cin >> ans;
							}
							if (ans == 'y' || ans == 'Y')
								continue;
							else if (ans == 'n' || ans == 'N')
							{
								cout << "\t\t\t\t\t Thank You :) ";
								break;
							}
						}
					}
				}
				else
				{
					while (true) {
						cout << "\t Please Enter 1 OR 2 !" << endl;
						cin >> choice;
						if (choice != '1' && choice != '2') {
							continue;
						}
						else break;
					}
					if (choice == '1')
					{
						for (int i = 0; i < maxrow; i++)
						{
							if (criminal_id_int == ID[i])
							{
								cout << "\t The criminal ID: " << ID[i] << endl;
								cout << "\t The criminal name: " << Name[i] << endl;
								cout << "\t The criminal gender: " << data1[i].gender << endl;
								cout << "\t The criminal age: " << data1[i].age << endl;
								cout << "\t The criminal address: " << data1[i].address << endl;
								cout << "\t The criminal action: " << data1[i].cou.act << endl;
								cout << "\t The criminal skin: " << data1[i].dis.skin << endl;
								cout << "\t The criminal face discription: " << data1[i].dis.face_disc << endl;
								cout << "\t The criminal face identification mark: " << data1[i].dis.identfication_mark << endl;
								cout << "\t The criminal  height: " << data1[i].dis.hight << endl;

								is_exist = true;
							}
						}
						char ans;
						cout << "\t Would you like to enter another criminal ID ?  enter(Y/N)" << endl;
						cin >> ans;
						if (ans == 'y' || ans == 'Y')
							continue;
						else if (ans == 'N' || ans == 'n')
						{
							cout << "\t\t\t\t\t Thank You :)" << endl;
							break;
						}
						else
						{
							cout << "\t Please Enter A Valid Choice";
							cin >> ans;
							if (ans == 'y' || ans == 'Y')
								continue;
							else if (ans == 'n' || ans == 'N')
							{
								cout << "\t\t\t\t\t Thank You :) ";
								break;
							}
							else
							{
								while (ans != 'n' && ans != 'N' && ans != 'Y' && ans != 'y') {
									cout << "\t Please Enter A Valid Choice";
									cin >> ans;
								}
								if (ans == 'y' || ans == 'Y')
									continue;
								else if (ans == 'n' || ans == 'N')
								{
									cout << "\t\t\t\t\t Thank You :) ";
									break;
								}
							}
						}
					}
					else if (choice == '2')
					{
						for (int i = 0; i < maxrow; i++)
						{
							if (criminal_id_int == ID[i])
							{
								cout << "\t The crime name is " << Crime[i] << endl;
								cout << "\t The crime station is " << data1[i].station.policename << endl;
								cout << "\t The fir is " << data1[i].station.fir << endl;
								cout << "\t The court name which releated to the crime  is " << data1[i].cou.court_name << endl;
								cout << "\t The date of the crime  is : " << data1[i].doa.day << "/" << data1[i].doa.month << "/" << data1[i].doa.year << endl;
								is_exist = true;
							}
						}


						char ans;
						cout << "\t Would you like to enter another criminal ID  enter(Y/N)?" << endl;
						cin >> ans;
						if (ans == 'y' || ans == 'Y')
							continue;
						else if (ans == 'N' || ans == 'n')
						{
							break;
						}
						else
						{
							char ans;
							cout << "\t Please Enter A Valid Choice";
							cin >> ans;
							if (ans == 'y' || ans == 'Y')
								continue;
							else if (ans == 'n' || ans == 'N')
							{
								cout << "\t\t\t\t\t Thank You :) ";
								break;
							}
							else
							{
								while (ans != 'n' && ans != 'N' && ans != 'Y' && ans != 'y') {
									cout << "\t Please Enter A Valid Choice";
									cin >> ans;
								}
								if (ans == 'y' || ans == 'Y')
									continue;
								else if (ans == 'n' || ans == 'N')
								{
									cout << "\t\t\t\t\t Thank You :) ";
									break;
								}
							}
						}
					}


				}
			}

		}
	}
}


void ListDisplay() {
	system("CLS");
	cout << "\t\t\t\t\tCriminal Data" << endl;
	cout << "==============================================================================" << endl;
	int count = 0;
	cout << "  ID             |             NAME         |         crime          " << endl << "----------------------------------------------------------------------------\n";
	for (int i = 0; i < maxrow; i++) {

		if (ID[i] != '\0') {
			count++;
			cout << "    " << ID[i] << "                       " << Name[i] << "                     " << Crime[i] << "                     " << endl << "------------------------------------------------------------------------------" << endl;
		}
	}
	if (count == 0) {
		cout << "Not data found " << endl;
	}
	cout << "==================================" << endl;
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Delet() {
	string criminal_id;
	int criminal_id_int;
	//system("pause");
	system("CLS");
	cout << "=======================================================================================================================" << endl;
	while (true)
	{
		char ans3;
		cout << "\t\t\t\tEnter Criminal ID Which You Want To Delet His/Her Data  : " << endl;
		cin >> criminal_id;
		stringstream id_to_int(criminal_id);
		id_to_int >> criminal_id_int;
		if (criminal_id_int == 0)
		{
			cout << "\t Enter A Vaild ID" << endl;

		}
		else
		{
			bool is_exist2 = false;
			int choice;
			for (int i = 0; i < maxrow; i++) {
				if (criminal_id_int == ID[i])
				{
					is_exist2 = true;
				}
			}
			if (!is_exist2)
			{
				cout << "\t The criminal id doesn't exist" << endl;
				char ans;
				cout << "\t Would you like to enter another criminal ID ?  enter(Y/N)" << endl;
				cin >> ans;
				if (ans == 'y' || ans == 'Y')
					continue;
				else if (ans == 'n' || ans == 'N')
				{
					cout << "\t\t\t\t\t Thank You :)" << endl;
					break;
				}
				else
				{
					char ans;

					cout << "Please Enter A Valid Choice" << endl;
					cin >> ans;
					if (ans == 'y' || ans == 'Y')
						continue;
					else if (ans == 'n' || ans == 'N')
					{
						cout << "\t\t\t\t\t Thank You :)" << endl;
						break;
					}
					else
					{

						cout << "Please Enter A Valid Choice" << endl;
						cin >> ans;
						if (ans == 'y' || ans == 'Y')
							continue;
						else if (ans == 'n' || ans == 'N')
						{
							cout << "\t\t\t\t\t Thank You :) " << endl;
							break;
						}
						else {
							while (ans != 'n' && ans != 'N' && ans != 'Y' && ans != 'y') {
								cout << "Please Enter A Valid Choice" << endl;
								cin >> ans;
							}
							if (ans == 'y' || ans == 'Y')
								continue;
							else if (ans == 'n' || ans == 'N')
							{
								cout << "\t\t\t\t\t Thank You :) " << endl;
								break;
							}
						}
					}

				}
			}
			for (int i = 0; i < maxrow; i++)
			{
				if (criminal_id_int == ID[i])
				{
					ID[i] = '\0';
					Name[i] = '\0';
					Crime[i] = '\0';
					data1[i].gender = '\0';
					data1[i].age = '\0';
					data1[i].address = '\0';
					data1[i].station.policename = '\0';
					data1[i].station.fir[2] = '\0';
					data1[i].cou.court_name = '\0';
					data1[i].cou.state = '\0';
					data1[i].cou.crime = '\0';
					data1[i].cou.act = '\0';
					data1[i].dis.skin = '\0';
					data1[i].dis.face_disc = '\0';
					data1[i].dis.identfication_mark = '\0';
					data1[i].dis.eye_color = '\0';
					data1[i].doa.day = '\0';
					data1[i].dis.hight = '\0';
					data1[i].doa.day = '\0';
					data1[i].doa.month = '\0';
					data1[i].doa.year = '\0';
				}
			}
			cout << endl << endl << endl << "\t\t\t\t\t The ID Selected iIs Already Deleted !" << endl << "\t\t\t\t\t\tThank You :)" << endl;
			char ans;
			cout << "Would you like to enter another criminal ID ?  enter(Y/N)" << endl;
			cin >> ans;
			if (ans == 'y' || ans == 'Y')
				continue;
			else if (ans == 'n' || ans == 'N')
			{
				cout << "\t\t\t\t\t Thank You :)" << endl;
				break;
				system("pause");
			}
			else
			{
				char ans;

				cout << "Please Enter A Valid Choice" << endl;
				cin >> ans;
				if (ans == 'y' || ans == 'Y')
					continue;
				else if (ans == 'n' || ans == 'N')
				{
					cout << "\t\t\t\t\t Thank You :)" << endl;
					break;
					system("pause");
				}
				else
				{

					cout << "Please Enter A Valid Choice" << endl;
					cin >> ans;
					if (ans == 'y' || ans == 'Y')
						continue;
					else if (ans == 'n' || ans == 'N')
					{
						cout << "\t\t\t\t\t Thank You :) " << endl;
						break;
						system("pause");
					}
					else {
						while (ans != 'n' && ans != 'N' && ans != 'Y' && ans != 'y') {
							cout << "Please Enter A Valid Choice" << endl;
							cin >> ans;
						}
						if (ans == 'y' || ans == 'Y')
							continue;
						else if (ans == 'n' || ans == 'N')
						{
							cout << "\t\t\t\t\t Thank You :) " << endl;
							break;
							system("pause");
						}
					}
				}
				system("pause");
			}



		}
	}
	std::system("pause");
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void update()
{
	string criminal_id;
	int criminal_id_int;
	//system("pause");
	system("CLS");
	cout << "=======================================================================================================================" << endl;
	while (true)
	{
		char ans3;
		cout << "\t\t\t\tEnter Criminal ID Which You Want To update His/Her Data  : " << endl;
		cin >> criminal_id;
		stringstream id_to_int(criminal_id);
		id_to_int >> criminal_id_int;
		if (criminal_id_int == 0)
		{
			cout << "Enter A Vaild ID" << endl;

		}
		else
		{
			bool is_exist2 = false;
			int choice;
			for (int i = 0; i < maxrow; i++) {
				if (criminal_id_int == ID[i])
				{
					is_exist2 = true;
				}
			}
			if (!is_exist2)
			{
				cout << "The Criminal ID Doesn't Exist" << endl;
				cout << "Would You Like To Enter Another Criminal ID ?  enter(Y \ N)" << endl;
				cin >> ans3;
				if (ans3 == 'y' || ans3 == 'Y')
					continue;
				else
				{
					cout << "\t\t\t\t\t\t\t" << "Thank You :)";
					break;
				}

			}
			for (int i = 0; i < maxrow; i++)
			{
				if (criminal_id_int == ID[i])
				{
					cin.ignore();
					cout << "Enter The New ID :" << endl;
					cin >> criminal.id;
					stringstream streamm(criminal.id);//explained in line 95
					streamm >> criminal_id_int;
					ID[i] = criminal_id_int;
					cin.ignore();
					cout << "Enter The New  Name : " << endl;
					getline(cin, criminal.name);
					Name[i] = criminal.name;
					cout << "Enter The New Crime : " << endl;
					getline(cin, criminal.cou.crime);
					Crime[i] = criminal.cou.crime;
					cout << "Enter The New  Gender : (F/M) " << endl;
					do
					{
						cin >> criminal.gender;
						cin.ignore();
						if (criminal.gender == "f" || criminal.gender == "m" || criminal.gender == "M" || criminal.gender == "F")
						{
							data1[i].gender = criminal.gender;
							break;
						}
						else
						{
							cout << "Please Enter the  RIGHT Criminal Gender :\n";
							continue;

						}
					} while (true);

					cout << "Enter The New  Age : " << endl;
					while (true) {
						int criminal_age_int;
						cin >> criminal.age;
						stringstream age_to_int(criminal.age);
						age_to_int >> criminal_age_int;
						cin.ignore();
						if (criminal_age_int >= 5 && criminal_age_int <= 100) {
							data1[i].age = criminal.age;
							break;
						}
						else {
							cout << "Please Enter an Valid Age ! \n";
							continue;
						}
					}
					system("CLS");

					cout << "Enter The New  Address : " << endl;
					getline(cin, criminal.address);
					data1[i].address = criminal.address;
					cout << "Enter The New  Policename : " << endl;
					getline(cin, criminal.station.policename);
					data1[i].station.policename = criminal.station.policename;
					cout << "Enter The New  Fir :" << endl;
					getline(cin, criminal.station.fir);
					cout << "Enter The New  Court Name :" << endl;
					getline(cin, criminal.cou.court_name);
					data1[i].cou.court_name = criminal.cou.court_name;
					cout << "Enter The New  State :" << endl;
					getline(cin, criminal.cou.state);
					data1[i].cou.state = criminal.cou.state;
					cout << "Enter The New  Act :" << endl;
					getline(cin, criminal.cou.act);
					data1[i].cou.act = criminal.cou.act;
					cout << "\t\t\t\t\tEnter The New Discription Details :" << endl << "\t\t\t\t\t-----------------------------------" << endl << "Enter the Skin :" << endl;

					getline(cin, criminal.dis.skin);
					data1[i].dis.skin = criminal.dis.skin;
					cout << "Enter The Face discription :" << endl;
					getline(cin, criminal.dis.face_disc);
					data1[i].dis.face_disc = criminal.dis.face_disc;
					cout << "Enter The Identfication Mark :" << endl;
					getline(cin, criminal.dis.identfication_mark);
					data1[i].dis.identfication_mark = criminal.dis.identfication_mark;
					cout << "Enter The Eye Color :" << endl;
					getline(cin, criminal.dis.eye_color);
					data1[i].dis.eye_color = criminal.dis.eye_color;
					cout << "Enter The Height :" << endl;
					while (true) {
						cin >> criminal.dis.hight;
						stringstream height_to_int(criminal.dis.hight);
						height_to_int >> criminal_height_int;
						if (criminal_height_int >= 100 && criminal_height_int <= 200)
						{
							data1[i].dis.hight = criminal_height_int;
							break;
						}
						else {
							cout << "InValid height ,Please enter a Vaild height" << endl;
							continue;
						}
					}
					cout << "Enter The new date of crime :" << endl;
					while (true) {
						int criminal_day_int;
						cin >> criminal.doa.day;
						stringstream day_to_int(criminal.doa.day);
						day_to_int >> criminal_day_int;
						if (criminal_day_int >= 1 && criminal_day_int <= 31)
						{
							data1[i].doa.day = criminal.doa.day;
							break;
						}

						else {
							cout << "InValid Day ,Please enter a Vaild day" << endl;
							continue;
						}
					}

					cout << "/";

					do
					{
						int criminal_month_int;
						cin >> criminal.doa.month;
						stringstream month_to_int(criminal.doa.month);
						month_to_int >> criminal_month_int;

						if (criminal_month_int >= 1 && criminal_month_int <= 12)
						{
							data1[i].doa.month = criminal.doa.month;
							break;

						}
						else
						{
							cout << "INVALID ANSWER !\n";
							cout << "Enter in the Month again\n";
							continue;
						}
					} while (true);

					cout << "/";

					do
					{
						int criminal_year_int;
						cin >> criminal.doa.year;
						stringstream year_to_int(criminal.doa.year);
						year_to_int >> criminal_year_int;

						if (criminal_year_int >= 1970 && criminal_year_int <= 2022)
						{
							data1[i].doa.year = criminal.doa.year;
							break;
						}
						else
						{
							cout << "INVALID ANSWER !\n";
							cout << "Enter in the year again\n";
							continue;
						}
					} while (true);

					cout << "/";




				}
			}
			cout << "\t\t\t\tThe New Data Has Been Saved Succeffuly" << endl << "\t\t\t\t" << endl << "\t\t\t\t\tThankYou :)" << endl;

			char ans;
			cout << "Would You like to Update Another Criminal Data ?  enter(Y/N)" << endl;
			cin >> ans;
			if (ans == 'y' || ans == 'Y')
				continue;
			else if (ans == 'n' || ans == 'N')
			{
				cout << "\t\t\t\t\t Thank You :)" << endl;
				break;
				system("pause");
			}
			else
			{
				char ans;

				cout << "Please Enter A Valid Choice" << endl;
				cin >> ans;
				if (ans == 'y' || ans == 'Y')
					continue;
				else if (ans == 'n' || ans == 'N')
				{
					cout << "\t\t\t\t\t Thank You :)" << endl;
					break;
					system("pause");
				}
				else
				{

					cout << "Please Enter A Valid Choice" << endl;
					cin >> ans;
					if (ans == 'y' || ans == 'Y')
						continue;
					else if (ans == 'n' || ans == 'N')
					{
						cout << "\t\t\t\t\t Thank You :) " << endl;
						break;
						system("pause");
					}
					else {
						while (ans != 'n' && ans != 'N' && ans != 'Y' && ans != 'y') {
							cout << "Please Enter A Valid Choice" << endl;
							cin >> ans;
						}
						if (ans == 'y' || ans == 'Y')
							continue;
						else if (ans == 'n' || ans == 'N')
						{
							cout << "\t\t\t\t\t Thank You :) " << endl;
							break;

						}
					}
				}

			}

		}


	}
	system("pause");
}


int login()
{
	char username[30];
	char password[30];

	int true1 = 1;
	int try1 = 0;
	int i = 0;
	do
	{
		system("cls");
		cout << "\n\n\n\n\n\n";
		cout << "\t\t\t\t    ---------------------------------------\n";
		cout << "\t\t\t\t    |Crime Investigation MANAGEMENT SYSTEM|\n";
		cout << "\t\t\t\t    ---------------------------------------\n";
		cout << "\n\n";
		cout << "\t\t\t\t\t";
		cout << "Username : ";
		cin >> username;
		cout << "\t\t\t\t\t";
		cout << "\n";
		cout << "\t\t\t\t\t";
		cout << "Password : ";
		cin >> password;
		if (strcmp(username, "admin") == 0 && strcmp(password, "pass") == 0)
		{
			cout << "\n\n";
			cout << "\t\t\t\t";
			cout << "You are accessed to the system!\n\n";
			cout << "\t\t\t\t";
			system("pause");
			system("cls");
			true1 = 0;
			return 1;
		}
		else if (strcmp(username, "officer") == 0 && strcmp(password, "password") == 0) {

			cout << "\n\n";
			cout << "\t\t\t\t";
			cout << "You are accessed to the system!\n\n";
			cout << "\t\t\t\t";
			system("pause");
			system("cls");
			true1 = 0;
			return 2;
		}
		else
		{
			system("cls");
			try1 = try1 + 1;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\t\t\t\t\t";
			cout << "No. of attempts remain: " << 3 - try1;
			cout << "\n\n";
			cout << "\t\t\t\t";
			system("pause");
			if (try1 >= 3)
			{

				cout << "\t\t\t\t\t\t";
				cout << "\n";
				cout << "\t\t\t\t";
				cout << "No permission to enter the system!\n\n";
				cout << "\t\t\t\t";
				system("pause");
				callExit();
			}
		} //END OF ELSE
	}

	while (try1 < 3);
}


void callExit()
{
	int process = 0;
	system("cls");
	cout << "\n\n\n\n\n";
	cout << "\n\tTaking You Out of The System";
	for (process = 0; process < 25; process++)
	{
		delay(150);
		cout << ".";
	}
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t";
	cout << "You are out of the System.\n";
	cout << "\t\t\t\t\t\t";
	cout << "Thank You !";
	cout << "\n\n";
	cout << "\t\t\t\t\t";
	system("pause");
	exit(0);
}


void mainpage()
{
	int process = 0;
	system("cls");
	date1();
	cout << "\n";
	cout << "\t\t\t\t    ---------------------------------------\n";
	cout << "\t\t\t\t    |Crime Investigation MANAGEMENT SYSTEM|\n";
	cout << "\t\t\t\t    ---------------------------------------\n";
	cout << "\n\n";
	cout << "\t\t\t\t";
	cout << "Prepared By    ";
	cout << ":";
	cout << "   TITANS";
	cout << "\n\n";
	cout << "\t\t\t\t";
	cout << "Mini Project   ";
	cout << ":";
	cout << "   CRIME INVESTIGATION SYSTEM       ";
	cout << "\n\n";
	cout << "\t\t\t\t";
	cout << "\n\n";
	cout << "\n\n";
	cout << "\t\t\t\t";
	system("pause");
	cout << "\n\t\t\t\tLoading";

	for (process = 0; process < 25; process++)
	{
		delay(150);
		cout << ".";
	}
}


void menu()
{
	int input;
	while (true)
	{
		system("cls");
		cout << "\n\n\n";
		cout << "\t\t\t\t\t";
		cout << "\n";
		cout << "\t\t\t\t    ---------------------------------------\n";
		cout << "\t\t\t\t    |Crime Investigation MANAGEMENT SYSTEM|\n";
		cout << "\t\t\t\t    ---------------------------------------\n";
		cout << "\n\n\n\n";
		cout << "\t\t\t\t";
		cout << " 1. ADD RECORD\n\n";
		cout << "\t\t\t\t";
		cout << " 2. MODIFY RECORD\n\n";
		cout << "\t\t\t\t";
		cout << " 3. Search RECORD\n\n";
		cout << "\t\t\t\t";
		cout << " 4. DELETE RECORD\n\n";
		cout << "\t\t\t\t";
		cout << " 5. LIST ALL RECORDS\n\n";
		cout << "\t\t\t\t";
		cout << " 6. EXIT\n\n";
		cout << "\t\t\t\t";
		cout << "Choose Option:[1/2/3/4/5/6] : ";
		fflush(stdin);
		cin >> input;
		switch (input)
		{
		case 1:
		{
			Add();
			break;
		}
		case 2:
		{
			update();
			break;
		}
		case 3:
		{
			Search();
			break;
		}
		case 4:
		{
			cout << "Enter The ID You Want To Be Deleted : " << endl << endl;
			Delet();

			system("CLS");
			break;
		}
		case 5: ListDisplay();
			system("pause");
			break;
		case 6:
		{
			callExit();
		}
		break;

		default:
		{
			cout << "\n\n\n";
			cout << "\t\t\t\t";
			cout << "      Invalid input!";
			cout << "\n\n";
			cout << "\t\t\t\t";
			fflush(stdin);
			cin >> input;
			menu();
			break;
		}
		}
	}
}

void menu1()
{
	int input;
	while (true)
	{
		system("cls");
		cout << "\n\n\n";
		cout << "\t\t\t\t\t";
		cout << "\n";
		cout << "\t\t\t\t    ---------------------------------------\n";
		cout << "\t\t\t\t    |Crime Investigation MANAGEMENT SYSTEM|\n";
		cout << "\t\t\t\t    ---------------------------------------\n";
		cout << "\n\n\n\n";
		cout << "\t\t\t\t";
		cout << " 1. Search RECORD\n\n";
		cout << "\t\t\t\t";
		cout << " 2. LIST ALL RECORDS\n\n";
		cout << "\t\t\t\t";
		cout << " 3. EXIT\n\n";
		cout << "\t\t\t\t";
		cout << "Choose Option:[1/2/3] : ";
		fflush(stdin);
		cin >> input;
		switch (input)
		{


		case 1:
		{
			Search();
			break;
		}

		case 2: ListDisplay();
			system("pause");
			break;
		case 3:
		{
			callExit();
		}
		break;

		default:
		{
			cout << "\n\n\n";
			cout << "\t\t\t\t";
			cout << "      Invalid input!";
			cout << "\n\n";
			cout << "\t\t\t\t";
			fflush(stdin);
			cin >> input;
			menu();
			break;
		}
		}
	}
}
int main()
{
	system("cls");
	mainpage();

	int x, res = 1;
	res = login();

	if (res == 1)
	{
		menu();
	}
	else if (res == 2) {
		menu1();
	}
}
