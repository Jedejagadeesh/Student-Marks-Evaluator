#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    string name, hallticket, subject;
    int marks;
    vector<pair<string, int>> details;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << name << " Please enter hallticket number: ";
    getline(cin, hallticket);

    for (int i = 0; i < 6; i++) {
        cout << "Enter subject name: ";
        getline(cin, subject); // Now supports subject names with spaces

        cout << "Enter " << subject << " marks: ";
        cin >> marks;
        cin.ignore(); // Clear leftover newline before next getline

        details.push_back({subject, marks});
    }

    cout << "\nName of the student is: " << name << endl;
    cout << "Student hallticket is: " << hallticket << endl;
    cout << "Subject   \t\t\t      Marks     pass/fail" << endl;
int Total=0;int No_of_subjects=0;
int a=0;
int b=0;
    for (const auto& j : details) {
    	Total+=j.second;
    	No_of_subjects+=1;
        cout << j.first;
		cout<<"\t\t\t\t\t"<<j.second<<"\t";
	   if(j.second>=35 and j.second<=100){
	     cout<<"pass";
	     a++;
	   }
	   else{
	   	cout<<"fail";
	   	b++;
	   }
	   cout<<endl;
}
cout<<endl;
double result=Total/No_of_subjects;

if(result>=75.00 and a==No_of_subjects){
	cout<<"congurlations "<<name<<" you passed at distinction reey"<<endl;
	cout<<"This is your CGPA=>"<<result<<endl;
	cout<<"your Total Marks is=>"<<Total;
}
else if(result>=65.00 and a==No_of_subjects){
cout<<"congurlations "<<name<<" you passed at distinction reey"<<endl;
	cout<<"This is your CGPA:=>"<<result<<endl;
	cout<<"your Total Marks is=>"<<Total;
}
else if(result>=50.00 and a==No_of_subjects){
		cout<<"congurlations "<<name<<" you passed at distinction reey"<<endl;
	cout<<"This is your CGPA:=>"<<result<<endl;
	cout<<"your Total Marks is=>"<<Total;
}
else if(result>45.00 and a==No_of_subjects){
		cout<<"congurlations "<<name<<" you passed at distinction reey"<<endl;
	cout<<"This is your CGPA:=>"<<result<<endl;
	cout<<"your Total Marks is=>"<<Total;
}
else{
    cout<<"sorry "<<name<<" you  failed..!better luck next time..."<<endl;
	cout<<"Result is Not found:=>"<<"Null"<<endl;
	cout<<"your Total Marks is=>"<<Total;
}
    return 0;
}
