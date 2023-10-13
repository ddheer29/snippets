#include <bits/stdc++.h>
using namespace std;

class Contact{
public:
    string phno;
    string name;
    Contact(string a, string b) : name(a), phno(b) {}
};


int main(){
    vector<Contact>contacts;
    
    // inerting new contacts
    contacts.push_back(Contact("aditya", "83648"));
    contacts.push_back(Contact("rajat", "74389"));
    contacts.push_back(Contact("ikshit", "32423"));
    contacts.push_back(Contact("mohit", "65732"));
    
    // printing all contacts
    cout<<"\nPrinting all contacts"<<endl<<endl;
    for(auto &person: contacts){
        cout<<"Name: "<<person.name<<"\n"<<"Phone No: "<<person.phno<<endl;
    }
    
    // deleting recently added contact
    contacts.pop_back();
    
    // printing all contacts after removing recently addded contact
    cout<<"\nprinting all contacts after removing recently addded contact"<<endl<<endl;
    for(auto &person: contacts){
        cout<<"Name: "<<person.name<<"\n"<<"Phone No: "<<person.phno<<endl;
    }
    
    // Adding new contacts
    cout<<"\nAdding new contacts"<<endl;
    
    contacts.push_back(Contact("harshil", "67656"));
    contacts.push_back(Contact("kartik", "543643"));
    contacts.push_back(Contact("pradyumn", "436534"));
    contacts.push_back(Contact("rachit", "453342"));
    
    // printing all contacts after removing recently addded contact
    cout<<"\nprinting all contacts after removing recently addded contact"<<endl<<endl;
    for(auto &person: contacts){
        cout<<"Name: "<<person.name<<"\n"<<"Phone No: "<<person.phno<<endl;
    }
    
    return 0;
}
