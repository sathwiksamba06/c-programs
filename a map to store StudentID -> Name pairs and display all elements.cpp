#include<iostream>
#include<map>
 using namespace std;
int main(){
    map<int,string>students;
    students[50]="ramu";
    students[51]="aryan";
    students[52]="rohith";
    students[53]="mani";
    map<int,string>::iterator i;
    cout<<"students list:"<<endl;
    for(i=students.begin();i!=students.end();i++){
        cout << "Student ID: " << i->first 
             << ", Name: " << i->second << endl;
    }

    
}
//output:
students list:
Student ID: 50, Name: ramu
Student ID: 51, Name: aryan
Student ID: 52, Name: rohith
Student ID: 53, Name: mani
