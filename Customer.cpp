/*
 * Customer.cpp
 *
 *  Created on: Mar 5, 2010
 *      Author: mori
 */
#include <iostream>

#include "Customer.h"


Customer::Customer(string x, char y, int z) {
    name = x;
   	initial = y;
    account = z;
}
string Customer::getName() const{
    return name;
}
char Customer::getInitial() const{
    return initial;
}
int Customer::getAccount() const{
    return account;
}
void Customer::setName(string name){
	this->name = name;
}
void Customer::setInitial(char initial){
	this->initial = initial;
}
void Customer::setAccount(int account){
	this->account = account;
}

int strLength(const string& s){
    int count = 0,i = 0;
    while(s[i] != NULL)
    {
        count++;
        i++;
    }
    return count;
}

/*bool Customer::operator<(const Customer& c1) const {
	for (int i = 0; i < strLength(c1.getName()); i++){
		if (c1.name[i] < name[i]){
			return true;
		}
		else {
			continue;
		}
	}
	if (c1.getInitial() < getInitial()){
		return true;
	}
	else {
		return false;
	}
}
bool Customer::operator>(const Customer& c1) const {
	for (int i = 0; i < strLength(c1.getName()); i++){
		if (c1.name[i] > name[i]){
			return true;
		}
		else {
			continue;
		}
	}
	if (c1.getInitial() < getInitial()){
		return true;
	}
	else {
		return false;
	}
}
bool Customer::operator<=(const Customer& c1) const {
	for (int i = 0; i < strLength(c1.getName()); i++){
		if (c1.name[i] <= name[i]){
			return true;
		}
		else {
			continue;
		}
	}
	if (c1.getInitial() < getInitial()){
		return true;
	}
	else {
		return false;
	}
}
bool Customer::operator>=(const Customer& c1) const {
	for (int i = 0; i < strLength(c1.getName()); i++){
		if (c1.name[i] >= name[i]){
			return true;
		}
		else {
			continue;
		}
	}
	if (c1.getInitial() < getInitial()){
		return true;
	}
	else {
		return false;
	}
}
bool Customer::operator==(const Customer& c1) const{
	for (int i = 0; i < strLength(c1.getName()); i++){
		if (c1.name[i] == name[i]){
			return true;
		}
		else {
			continue;
		}
	}
	if (c1.getInitial() < getInitial()){
		return true;
	}
	else {
		return false;
	}
}
bool Customer::operator!=(const Customer& c1) const {
	for (int i = 0; i < strLength(c1.getName()); i++){
		if (c1.name[i] != name[i]){
			return true;
		}
		else {
			continue;
		}
	}
	if (c1.getInitial() < getInitial()){
		return true;
	}
	else {
		return false;
	}
}

*/
ostream& operator<<(ostream & os,  Customer & c) {

    os << c.name << ", " << c.initial << ". (" << c.account << ")";
    return os;
}
