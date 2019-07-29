
/*  Created on: Mar 5, 2010
 *      Author: mori
 */
 
#ifndef CUSTOMER_H_
#define CUSTOMER_H_
 
#include <string>
#include <iostream>
using namespace std;
 
class Customer {
public:
    Customer(){}
    Customer(string x, char y, int z);
    string getName() const;
    char getInitial() const;
    int getAccount() const;
    void setName(string name);
    void setInitial(char initial);
    void setAccount(int account);
    bool operator<(const Customer& c1) const;
    bool operator<=(const Customer& c1) const;
    bool operator>(const Customer& c1) const;
    bool operator>=(const Customer& c1) const;
    bool operator==(const Customer& c1) const;
    bool operator!=(const Customer& c1) const;
 
private:
    friend ostream& operator<<(ostream & os,  Customer & c);
    string name;
    char initial;
    int account;
};
 
#endif /* CUSTOMER_H_ */