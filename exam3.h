#pragma once 
#include<iostream>
#include<vector>

using namespace std;

class classList{
    private:
        string name;
        string className;
        int id;
    public: 
        vector<string> classes;
        classList(){
            name = "User";
            className = "None";
        }

        classList(string n, int i){
            name = n;
            id = i;
        }

        string setName(){
            return name;
        }

        int getID(){
            return id;
        }

        void setID(int i){
            id = i;
        }

        void getName(string n){
            name = n;
        }

        void addClass(string className){
            classes.push_back(className);
            cout << "Added " << className << endl;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Classes: "; 
            for (auto X : classes) {
                 cout << X << ", ";
            }
        }

};
