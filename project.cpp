#include <iostream>
#include <string>
using namespace std;
struct patientsInfo
{
string name;
string National_id;
string Age ;
string mobile_num;
string file_num;
string Gender;
};
patientsInfo patientsList[100];
struct doctorsInfo
{
string name;
string National_id;
string Age ;
string mobile_num;
string doctorID;
string Gender;
};
doctorsInfo doctorsList[100];
void addPatient(int patientNum)
{
cout << "\nEnter Patient Details\n";
cout << "Gender : ";
getline(cin,patientsList[patientNum].Gender);
cout << "Name of the patient: ";
getline(cin,patientsList[patientNum].name);
cout << "National ID: ";
cin >> patientsList[patientNum].National_id;
cout << "Age  : ";
cin>> patientsList[patientNum].Age ;
cout << "File Number: ";
cin >> patientsList[patientNum].file_num;
cout << "Mobile Number: ";
cin >> patientsList[patientNum].mobile_num;

}
void addDoctor(int doctorNum)
{
cout << "\nEnter doctor Details\n";
cout << "Gender : ";
getline(cin,doctorsList[doctorNum].Gender);
cout << "Name of the doctor: ";
getline(cin,doctorsList[doctorNum].name);
cout << "National ID: ";
getline(cin,doctorsList[doctorNum].National_id);
cout << "Age  : ";
cin>> doctorsList[doctorNum].Age ;
cout << "doctor ID : ";
cin >> doctorsList[doctorNum].doctorID;
cout << "Mobile Number: ";
cin >> doctorsList[doctorNum].mobile_num;
}
void viewPatient(int patientCount)
{
cout << "Patients List\n";
for(int ctr = 0; ctr < patientCount; ctr++)
{
cout <<"----------------------------------------------------\n";
cout << "Gender : "<<patientsList[ctr].Gender<<endl;
cout << "Name Of The Patient: " << patientsList[ctr].name << endl;
cout << "Nationa lD: " << patientsList[ctr].National_id << " \n";
cout << "Age : " << patientsList[ctr].Age  << endl;
cout << "File Number: " << patientsList[ctr].file_num << endl;
cout << "Mobile Number: " << patientsList[ctr].mobile_num << " \n";
cout <<"----------------------------------------------------\n";
}
}
void viewdoctors(int doctorCount)
{
cout << "Doctors List\n";
for(int ctr = 0; ctr < doctorCount; ctr++)
{
cout <<"----------------------------------------------------\n";
cout << "Gender : "<<doctorsList[ctr].Gender<<endl;
cout << "Name Of The doctors: " << doctorsList[ctr].name << endl;
cout << "Nationa lD: " << doctorsList[ctr].National_id << " \n";
cout << "Age : " << doctorsList[ctr].Age  << endl;
cout << "Doctor ID: " << doctorsList[ctr].doctorID << endl;
cout << "Mobile Number: " << doctorsList[ctr].mobile_num << " \n";
cout <<"----------------------------------------------------\n";
}
}
void searchByFile(string file_num, int index)
{
for(int ctr = 0; ctr < index ; ctr++)
{
	if(patientsList[ctr].file_num.compare(file_num) == 0)
{
cout << "\nPatient Found\n";
cout <<"----------------------------------------------------\n";
cout << "Gender : "<<patientsList[ctr].Gender<<endl;
cout << "Name of the patient: " << patientsList[ctr].name << endl;
cout << "Nationa lD: " << patientsList[ctr].National_id << " \n";
cout << "Age : " << patientsList[ctr].Age  << endl;
cout << "File Number: " << patientsList[ctr].file_num << endl;
cout << "Mobile Number: " << patientsList[ctr].mobile_num << " \n";
cout <<"----------------------------------------------------\n";
return;
}
}
cout << "\nPatient is not available!\n\n";
}
void searchByID(string doctorID, int index2)
{
for(int ctr = 0; ctr < index2 ; ctr++)
{
	if(doctorsList[ctr].doctorID.compare(doctorID) == 0)
{
cout << "\nDoctor Found\n";
cout <<"----------------------------------------------------\n";
cout << "Gender : "<<doctorsList[ctr].Gender<<endl;
cout << "Name of the doctor: " << doctorsList[ctr].name << endl;
cout << "Nationa ID: " << doctorsList[ctr].National_id << " \n";
cout << "Age : " << doctorsList[ctr].Age  << endl;
cout << "Doctor ID: " << doctorsList[ctr].doctorID << endl;
cout << "Mobile Number: " << doctorsList[ctr].mobile_num << " \n";
cout <<"----------------------------------------------------\n";
return;
}
}
cout << "\nDoctor is not available!\n\n";
}
void delete_doctor(string doctorID, int index2)
{
for(int ctr = 0; ctr < index2 ; ctr++)
{
    if(doctorsList[ctr].doctorID.compare(doctorID) == 0)
{
         doctorsList[ctr].Gender.clear();
         doctorsList[ctr].name.clear();
         doctorsList[ctr].National_id.clear();
         doctorsList[ctr].Age.clear();
         doctorsList[ctr].doctorID.clear();
         doctorsList[ctr].mobile_num.clear();
         return;
         }
     }
    cout<<"\n\n\n";
 }
void delete_patient(string file_num , int index)
{
for(int ctr = 0; ctr < index ; ctr++)
{
    if(patientsList[ctr].file_num.compare(file_num) == 0)
	{
         patientsList[ctr].Gender.clear();
         patientsList[ctr].name.clear();
         patientsList[ctr].National_id.clear();
         patientsList[ctr].Age.clear();
         patientsList[ctr].file_num.clear();
         patientsList[ctr].mobile_num.clear();
         return;
    }
    }
    cout<<"\n\n\n";
 }
 void updatePatient (string file_num, int index)
{
string New_name;
string New_National_id;
string New_Age ;
string New_mobile_num;
string New_file_num;
		for(int ctr = 0; ctr < index ; ctr++)
	{
		if(patientsList[ctr].file_num.compare(file_num)==0)
		{
			cout<< " -------------updata patient information-------------\n";
			cout<< "	Enter new name : ";
			cin>> New_name ;
			cout<< "	Enter new file number : ";
			cin>>  New_file_num ;
			cout<< "	Enter new national ID : ";
			cin>> New_National_id; 
			cout<< "	Enter new mobile number : ";
			cin>> New_mobile_num;
			patientsList[ctr].file_num = New_file_num;
			patientsList[ctr].name = New_name;
			patientsList[ctr].National_id = New_National_id;
			patientsList[ctr].Age = New_Age;
			patientsList[ctr].mobile_num = New_mobile_num;
			cout<< " \n\n\t updata successfull \n\n";		
		}
	}
}
void updateDoctor (string doctorID, int index2)
{
	
string New_name;
string New_National_id;
string New_Age ;
string New_mobile_num;
string New_ID;
		for(int ctr = 0; ctr < index2 ; ctr++)
	{
		if(doctorsList[ctr].doctorID.compare(doctorID)==0)
		{
			cout<< " -------------updata doctor's information-------------\n";
			cout<< "	Enter new name : ";
			cin>> New_name ;
			cout<< "	Enter new ID number : ";
			cin>>  New_ID ;
			cout<< "	Enter new national ID : ";
			cin>> New_National_id; 
			cout<< "	Enter new mobile number : ";
			cin>> New_mobile_num;
			doctorsList[ctr].doctorID = New_ID;
			doctorsList[ctr].name = New_name;
			doctorsList[ctr].National_id = New_National_id;
			doctorsList[ctr].Age = New_Age;
			doctorsList[ctr].mobile_num = New_mobile_num;
			cout<< " \n\n\t updata successfull \n\n";		
		}
	}
}

int main()
{
	
int index = 0;
int index2 =0;
int choice;
string file_num;
string doctorID;
	cout<< "\n\n----------------------------\n";
    cout<<  "HOSPITAL MANAGEMENT SYSTEM\n";
	cout<< "---------------------------\n\n\n";
	cout<< "1.  Dental Clinic\n";
	cout<< "2.  General Clinic\n";
	cout<< "3.  Heart Clinic\n";
	cout<< "4.  Kids Clinic\n";
	cout<< "5.  Cosmetic Clinic\n\n";
	cout<< "Enter your clinic number : ";
	cin>> choice;
	cout<< "\n\n";
	switch(choice)
	{
case 1:
do {
cout <<" 1. Add Patient\n";
cout <<" 2. Add Doctor\n";
cout <<" 3. View Patient List\n";
cout <<" 4. View Doctor List\n";
cout <<" 5. Delete Patient\n";
cout <<" 6. Delete Doctor\n";
cout <<" 7. Search Patient\n";
cout <<" 8. Search Doctor\n";
cout<<" 9. Update Patient\n";
cout<<"10. Update doctor\n";
cout <<"11. Exit\n";
cout <<" Enter Your Choice: ";
cin >> choice;
cin.ignore();
switch(choice)
{
case 1: addPatient(index);
index++;
cout << "\n";
break;
case 2: addDoctor(index2);
index2++;
cout << "\n";
break;
case 3: viewPatient(index);
cout << "\n";
break;
case 4: viewdoctors(index2);
cout << "\n";
break;
case 5: cout << "Enter the patient's file number : ";
cin >> file_num;
delete_patient(file_num ,  index);
index--;
cout << "\n";
break;
case 6: cout << "Enter the ID of the doctor : ";
cin >> doctorID;
delete_doctor(doctorID ,  index2);
index2--;
cout << "\n";
break;
case 7: cout << "Enter File Number: ";
cin >> file_num;
searchByFile(file_num , index );
cout<< "\n";
break;
case 8: cout << "Enter the id of the doctor : ";
cin >> doctorID;
searchByID( doctorID ,  index2);
break;
case 9: cout << "Enter File Number: ";
cin >> file_num;
updatePatient(file_num,  index);
cout<< "\n";
break;
case 10:  cout << "Enter the id of the doctor : ";
cin >> doctorID;
updateDoctor (doctorID, index2);
cout << "\n";
break;
case 11: 
cout << "Exit ... \n";
break;
default: cout << "Incorrect input!\n";
 break;
}
}
while(choice!=11);
break;
case 2:
do {
cout <<" 1. Add Patient\n";
cout <<" 2. Add Doctor\n";
cout <<" 3. View Patient List\n";
cout <<" 4. View Doctor List\n";
cout <<" 5. Delete Patient\n";
cout <<" 6. Delete Doctor\n";
cout <<" 7. Search Patient\n";
cout <<" 8. Search Doctor\n";
cout<<" 9. Update Patient\n";
cout<<"10. Update doctor\n";
cout <<"11. Exit\n";
cout <<" Enter Your Choice: ";
cin >> choice;
cin.ignore();
switch(choice)
{
case 1: addPatient(index);
index++;
cout << "\n";
break;
case 2: addDoctor(index2);
index2++;
cout << "\n";
break;
case 3: viewPatient(index);
cout << "\n";
break;
case 4: viewdoctors(index2);
cout << "\n";
break;
case 5: cout << "Enter the patient's file number : ";
cin >> file_num;
delete_patient(file_num ,  index);
index--;
cout << "\n";
break;
case 6: cout << "Enter the ID of the doctor : ";
cin >> doctorID;
delete_doctor(doctorID ,  index2);
index2--;
cout << "\n";
break;
case 7: cout << "Enter File Number: ";
cin >> file_num;
searchByFile(file_num , index );
cout<< "\n";
break;
case 8: cout << "Enter the id of the doctor : ";
cin >> doctorID;
searchByID( doctorID ,  index2);
break;
case 9: cout << "Enter File Number: ";
cin >> file_num;
updatePatient(file_num,  index);
cout<< "\n";
break;
case 10:  cout << "Enter the id of the doctor : ";
cin >> doctorID;
updateDoctor (doctorID, index2);
cout << "\n";
break;
case 11: 
cout << "Exit ... \n";
break;
default: cout << "Incorrect input!\n";
 break;
}
}
while(choice!=11);
break;
case 3:
do {
cout <<" 1. Add Patient\n";
cout <<" 2. Add Doctor\n";
cout <<" 3. View Patient List\n";
cout <<" 4. View Doctor List\n";
cout <<" 5. Delete Patient\n";
cout <<" 6. Delete Doctor\n";
cout <<" 7. Search Patient\n";
cout <<" 8. Search Doctor\n";
cout<<" 9. Update Patient\n";
cout<<"10. Update doctor\n";
cout <<"11. Exit\n";
cout <<" Enter Your Choice: ";
cin >> choice;
cin.ignore();
switch(choice)
{
case 1: addPatient(index);
index++;
cout << "\n";
break;
case 2: addDoctor(index2);
index2++;
cout << "\n";
break;
case 3: viewPatient(index);
cout << "\n";
break;
case 4: viewdoctors(index2);
cout << "\n";
break;
case 5: cout << "Enter the patient's file number : ";
cin >> file_num;
delete_patient(file_num ,  index);
index--;
cout << "\n";
break;
case 6: cout << "Enter the ID of the doctor : ";
cin >> doctorID;
delete_doctor(doctorID ,  index2);
index2--;
cout << "\n";
break;
case 7: cout << "Enter File Number: ";
cin >> file_num;
searchByFile(file_num , index );
cout<< "\n";
break;
case 8: cout << "Enter the id of the doctor : ";
cin >> doctorID;
searchByID( doctorID ,  index2);
break;
case 9: cout << "Enter File Number: ";
cin >> file_num;
updatePatient(file_num,  index);
cout<< "\n";
break;
case 10:  cout << "Enter the id of the doctor : ";
cin >> doctorID;
updateDoctor (doctorID, index2);
cout << "\n";
break;
case 11: 
cout << "Exit ... \n";
break;
default: cout << "Incorrect input!\n";
 break;
}
}
while(choice!=11);
break;
case 4:
do {
cout <<" 1. Add Patient\n";
cout <<" 2. Add Doctor\n";
cout <<" 3. View Patient List\n";
cout <<" 4. View Doctor List\n";
cout <<" 5. Delete Patient\n";
cout <<" 6. Delete Doctor\n";
cout <<" 7. Search Patient\n";
cout <<" 8. Search Doctor\n";
cout<<" 9. Update Patient\n";
cout<<"10. Update doctor\n";
cout <<"11. Exit\n";
cout <<" Enter Your Choice: ";
cin >> choice;
cin.ignore();
switch(choice)
{
case 1: addPatient(index);
index++;
cout << "\n";
break;
case 2: addDoctor(index2);
index2++;
cout << "\n";
break;
case 3: viewPatient(index);
cout << "\n";
break;
case 4: viewdoctors(index2);
cout << "\n";
break;
case 5: cout << "Enter the patient's file number : ";
cin >> file_num;
delete_patient(file_num ,  index);
index--;
cout << "\n";
break;
case 6: cout << "Enter the ID of the doctor : ";
cin >> doctorID;
delete_doctor(doctorID ,  index2);
index2--;
cout << "\n";
break;
case 7: cout << "Enter File Number: ";
cin >> file_num;
searchByFile(file_num , index );
cout<< "\n";
break;
case 8: cout << "Enter the id of the doctor : ";
cin >> doctorID;
searchByID( doctorID ,  index2);
break;
case 9: cout << "Enter File Number: ";
cin >> file_num;
updatePatient(file_num,  index);
cout<< "\n";
break;
case 10:  cout << "Enter the id of the doctor : ";
cin >> doctorID;
updateDoctor (doctorID, index2);
cout << "\n";
break;
case 11: 
cout << "Exit ... \n";
break;
default: cout << "Incorrect input!\n";
 break;
}
}
while(choice!=11);
break;
case 5:
do {
cout <<" 1. Add Patient\n";
cout <<" 2. Add Doctor\n";
cout <<" 3. View Patient List\n";
cout <<" 4. View Doctor List\n";
cout <<" 5. Delete Patient\n";
cout <<" 6. Delete Doctor\n";
cout <<" 7. Search Patient\n";
cout <<" 8. Search Doctor\n";
cout<<" 9. Update Patient\n";
cout<<"10. Update doctor\n";
cout <<"11. Exit\n";
cout <<" Enter Your Choice: ";
cin >> choice;
cin.ignore();
switch(choice)
{
case 1: addPatient(index);
index++;
cout << "\n";
break;
case 2: addDoctor(index2);
index2++;
cout << "\n";
break;
case 3: viewPatient(index);
cout << "\n";
break;
case 4: viewdoctors(index2);
cout << "\n";
break;
case 5: cout << "Enter the patient's file number : ";
cin >> file_num;
delete_patient(file_num ,  index);
index--;
cout << "\n";
break;
case 6: cout << "Enter the ID of the doctor : ";
cin >> doctorID;
delete_doctor(doctorID ,  index2);
index2--;
cout << "\n";
break;
case 7: cout << "Enter File Number: ";
cin >> file_num;
searchByFile(file_num , index );
cout<< "\n";
break;
case 8: cout << "Enter the id of the doctor : ";
cin >> doctorID;
searchByID( doctorID ,  index2);
break;
case 9: cout << "Enter File Number: ";
cin >> file_num;
updatePatient(file_num,  index);
cout<< "\n";
break;
case 10:  cout << "Enter the id of the doctor : ";
cin >> doctorID;
updateDoctor (doctorID, index2);
cout << "\n";
break;
case 11: 
cout << "Exit ... \n";
break;
default: cout << "Incorrect input!\n";
 break;
}
}
while(choice!=11);
break;
}
}









