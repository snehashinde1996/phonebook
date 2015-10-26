
typedef struct phonebook {
	char fname[35];
	char mname[35];
	char lname[30];
	double mobile_no;
	char address[50];
	char sex[8];
	char mail[100];
	char dob[20];
}phonebook;
void menu(phonebook *p);
void menuchoice();
int addrecord(phonebook *p);
int listrecord(phonebook *p);
int modifyrecord(phonebook *p);
int deleterecord(phonebook *p);
int searchrecord(phonebook *p);
int save(char *data);
int backup(phonebook *p);
void exitapp();
void login();
phonebook *isavailable(phonebook *p, double mobile_no);


