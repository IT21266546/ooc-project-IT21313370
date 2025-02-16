#include "Feedback.h"
#include "GuestUser.h"
#include "Item.h"
#include "MusicTeacher.h"
#include "Order.h"
#include "Payment.h"
#include "RegisteredUser.h"
#include "Report.h"
#include "Student.h"


#include <iostream>

using namespace std;

int main()
{
  
  
	GuestUser* guser = new GuestUser();   //Object - GuestUser Class

	GuestUser* student = new Student(); //Object - Student Class

	GuestUser* musicteacher = new MusicTeacher(); // Object - MusicTeacher Class

	GuestUser* registereduser = new RegisteredUser(); // Object - RegisteredUser Class

	Payment* payment = new Payment(); // Object - Payment Class

	Order* order = new Order(); // Object - Order Class

	Report* report = new Report(); // Object - Report Class

	Item* item = new Item(); // Object - Item class

	//Method Calling

	student->displayUserDetails();
	student->displayOrderDetails();

	musicteacher->displayUserDetails();
	
	registereduser->displayUserDetails();

	payment->displayStatus();
	payment->confirmDetails();
	payment->checkDetails();

	order->displayorder();

	report->generateReport();

	item->addItem();
	item->removeItem();
	item->displayItemDetails();

	//******Deleting Dynamic objects***

	delete student;
	delete musicteacher;
	delete registereduser;
	delete payment;
	delete order;
	delete report;
	delete order;

	return 0;
}