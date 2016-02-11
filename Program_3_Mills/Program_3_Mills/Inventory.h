// program 3 header file
// dana mills
//nov. 18,2013





#ifndef Inventory_H //opens header
#define Inventory_H // defines header

#include <iostream> // need library for cin/ cout
#include <iomanip> // need library for setw(), setpresion(), setfil(), right align, etc
                    // to use set precision in for the retail price under DISPLAY here
#include <fstream> // for input files

using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

class Inventory
{ 
public:// users can change values 

	// constructors
	//
	Inventory ();// constructor

	//create a report listing the records in link list

	void ListRecords (char*);

	// add an item to liank list
	void InsertItem(int, char[], int, double, double,int, Inventory*);

	//count and display items in link list
	int CountItems();


	//Inventory ( int, char [], int, double, double, int);//

	// const prevents a member in the function from being modified
	//GETS here:
	int GetProductIdNum() const;
	char* GetProductDescript () const;
	int GetManuIdNum () const;
	double GetWholesalePrice () const;
	double GetMark_upPercent () const;
	int GetQuantityInStock () const;
	Inventory * GetLink () const;

	double CalcRetailPrice () const;


	//SETS here:

	void SetProductIdNum ( int);
	void SetProductDescript (char[]);
	void SetManuIdNum (int);
	void SetWholesalePrice (double);
	void SetMark_upPercent (double);
	void SetQuantityInStock (int);
	void SetLink (Inventory*);

	
	// displays information as needed
	//
	//void Display () const;

private:
	// user does NOT have access to change
	int ProductIdNum;
	int ManuIdNum;
	double WholesalePrice;
	double Mark_upPercent;
	int QuantityInStock;
	
	
	// mutable char  helps to change a const
	mutable char ProductDescript [37];
	Inventory* NextRecordPointer;

};

#endif
