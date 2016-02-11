// implementaion file

//Dana Mills
//nov. 18,2013

#include "stdafx.h"
//#include "Inventory.h"// comment out ??


Inventory* FirstRecordPointer;


// constructors
// sets all varaibles to zero/ initializes HERE
Inventory :: Inventory ()
{

ProductIdNum = 0;
ProductDescript [36] = '\0';// sets last cell to zero 0-36, equals 37 elements
ManuIdNum =0;
WholesalePrice=0.0;
Mark_upPercent=0.0;
QuantityInStock=0;

NextRecordPointer = NULL;
}

// sets all values from X = init X format
// to keep original values safe from user interferance
/*Inventory :: Inventory ( int InitProductIdNum, char InitProductDescript  [], int InitManuIdNum,
				  double InitWholesalePrice , double InitMark_upPercent, int InitQuantityInStock)
{
	ProductIdNum = InitProductIdNum;
	strcpy_s ( ProductDescript, InitProductDescript);
	ManuIdNum = InitManuIdNum;
	WholesalePrice= InitWholesalePrice;
	Mark_upPercent= InitMark_upPercent;
	QuantityInStock = InitQuantityInStock;



} */



/*********************************************************************************************************/

// writes linked list to an outputfile

void Inventory:: ListRecords(char* ReportName)
{
    ofstream OutputFile;
    Inventory* CurrentRecordPointer;
	char Separator [110]
	="____________________________________________________________________________________________________________";

    OutputFile.open ((char*)(void*)Marshal::StringToHGlobalAnsi
            (String::Concat(Directory::GetCurrentDirectory (),
            "\\FileForOutput.txt")));

    if(!OutputFile)
	{
        Application::Exit();
		return;
	}//end of check


	OutputFile << endl << Separator << endl << endl;
	OutputFile << setw(38) << setfill(' ') << ReportName << endl;
	OutputFile << Separator ;
	OutputFile << endl << endl 
		 
	     << setw(15) <<setfill(' ')<<" Product ID"
		 << setw(30) <<setfill(' ')<<" Product"
		 << setw (10) << setfill (' ')<< " "
		 << setw(17) <<setfill(' ')<<"Manufacturer"
		 << setw(13) <<setfill(' ')<<"Retail"
		 
         << setw(15) <<setfill(' ')<<" Quantity in" << endl;
	// line 2 of headings
	OutputFile
		 << setw(15) <<setfill(' ')<<" Number"
		 << setw(30) <<setfill(' ')<<" Description"
		 << setw (10) << setfill (' ')<< " "
		 << setw(15) <<setfill(' ')<<"ID number"
		  << setw(17) <<setfill(' ')<<"Price"
		 << setw(15) <<setfill(' ')<<" Stock" << endl;
	OutputFile << Separator << endl<< endl;

	CurrentRecordPointer = FirstRecordPointer;
	while( CurrentRecordPointer != NULL)
	{
		
	OutputFile << endl;
	OutputFile << right;

	OutputFile << endl << setw(10) <<setfill(' ')<<CurrentRecordPointer->GetProductIdNum ();
	OutputFile <<setw(35) <<setfill(' ')<< CurrentRecordPointer->GetProductDescript ();
	OutputFile <<"    "<<left;
	OutputFile <<setw(8) << setfill(' ')<<CurrentRecordPointer->GetManuIdNum ();
	OutputFile <<fixed << showpoint << setprecision (2);
	OutputFile <<"$"<<right;
	OutputFile	<<setw(7) << setfill(' ')<< CurrentRecordPointer->CalcRetailPrice ();
	OutputFile <<setw(8) << setfill(' ')<<CurrentRecordPointer->GetQuantityInStock ();
			
	CurrentRecordPointer= CurrentRecordPointer->GetLink();
}//end of while loop
OutputFile << endl << Separator <<endl;
OutputFile.close();
return;
}// end of listrecords method

/**************************************************************************************************************/
// adds items to list

void Inventory::InsertItem (int InitProductIdNum, char InitProductDescript [], int InitManuIdNum,
							double InitWholesalePrice, double InitMark_upPercent, int InitQuantityInStock,
							Inventory * CurrentRecordPointer)
{
	Inventory * CurrentPointer;// pointer to tranverse link list
	Inventory * Previous;// previous record
	bool Found;

	ProductIdNum=InitProductIdNum;
	strcpy_s (ProductDescript, InitProductDescript);
	ManuIdNum = InitManuIdNum;
	WholesalePrice= InitWholesalePrice;
	Mark_upPercent= InitMark_upPercent;
	QuantityInStock = InitQuantityInStock;
// list is empty condition

	if(FirstRecordPointer ==NULL)
	{
		FirstRecordPointer =CurrentRecordPointer;
	}
	else{
		CurrentPointer = FirstRecordPointer;
		Found = false;
		// search linked list for placement

		while (CurrentPointer !=NULL && !Found)
		{
			if (CurrentPointer->ProductIdNum >= InitProductIdNum)
			{
				Found = true;
			}
			else
			{
				Previous=CurrentPointer;
				CurrentPointer = CurrentPointer->GetLink();
			}

		}// end of while loop

		                              // new first item in list

		if( CurrentPointer == FirstRecordPointer)
		{
			NextRecordPointer = FirstRecordPointer;
			FirstRecordPointer= CurrentRecordPointer;
		}

		                    // insert in the middle of list

		else
		{
			Previous->NextRecordPointer= CurrentRecordPointer;
			NextRecordPointer =CurrentPointer;
		}
	}
}//end of list fx
/***************************************************************************************************/

// count fx

int Inventory::CountItems()
{
	Inventory* CurrentRecordPointer;
	int ItemCounter =0;

	for(CurrentRecordPointer =FirstRecordPointer;
		CurrentRecordPointer !=NULL;
		CurrentRecordPointer = CurrentRecordPointer->GetLink() ) // ;; here?
	{
		ItemCounter++;
	} // end of for loop
	return (ItemCounter);


}// end of countitems fx

/****************************************************************************************************************/

// return the value of the private class members
// GET function is called 
//  for ALL data input

int Inventory :: GetProductIdNum () const
{
	return (ProductIdNum);

}

char* Inventory:: GetProductDescript () const
{
	return (ProductDescript);
}


int Inventory :: GetManuIdNum () const
{
	return (ManuIdNum);
}


double Inventory:: GetWholesalePrice () const
{
	return (WholesalePrice);
}
	
	
double Inventory :: GetMark_upPercent () const
{
	return (Mark_upPercent);
}
int Inventory :: GetQuantityInStock () const
{
	return (QuantityInStock);

}

double Inventory:: CalcRetailPrice () const
{
	return ( WholesalePrice + (WholesalePrice * Mark_upPercent));
	
}


Inventory * Inventory::GetLink () const
{
	return NextRecordPointer;

}

/********************************************************************************************************************/
// sets fx here
void Inventory::SetProductIdNum (int InitProductIdNum)
{
	ProductIdNum=InitProductIdNum;
}

void Inventory::SetProductDescript( char InitProductDescript[])
{
	strcpy_s(ProductDescript, InitProductDescript);
}

void Inventory::SetManuIdNum ( int InitManuIdNum)
{
	ManuIdNum=InitManuIdNum;
}

void Inventory::SetWholesalePrice (double InitWholesalePrice)
{
	WholesalePrice=InitWholesalePrice;
}

void Inventory::SetMark_upPercent (double InitMark_upPercent)
{
	Mark_upPercent=InitMark_upPercent;
}

void Inventory::SetQuantityInStock (int InitQuantityInStock)
{
	QuantityInStock=InitQuantityInStock;
}

void Inventory::SetLink( Inventory* InitLink)
{
	NextRecordPointer=InitLink;
}


/********************************************************************************************************************/


// display from program 1
// this displays a nice screenshot, formatted, etc
//
/*
void Inventory :: Display () const
{
	cout << "______________________________________________________________________________________________"<<endl;
	cout << "                           Inventory COMPANY         "  <<endl;
	cout << "______________________________________________________________________________________________"<<endl;

	// line 1 of headings
	cout << setw(15) <<setfill(' ')<<" Product ID"
		 << setw(15) <<setfill(' ')<<" Product"
		 << setw(15) <<setfill(' ')<<" Manufacturer"
		 << setw(15) <<setfill(' ')<<" Wholesale"
		 << setw(15) <<setfill(' ')<<" Mark-up"
         << setw(15) <<setfill(' ')<<" Quantity in" << endl;
	// line 2 of headings
	cout << setw(15) <<setfill(' ')<<" Number"
		 << setw(15) <<setfill(' ')<<" Discription"
		 << setw(15) <<setfill(' ')<<" ID number"
		 << setw(15) <<setfill(' ')<<" Price"
		 << setw(15) <<setfill(' ')<<" Percentage"
		 << setw(15) <<setfill(' ')<<" Stock" << endl;
	cout << "______________________________________________________________________________________________"<<endl<<endl;


	// display actual data entered
	//
	cout << right;
	cout << setw(15) <<setfill(' ')<< GetProductIdNum ();// ignores leading zeros, want to keep?
	cout << setw(15) <<setfill(' ')<< GetProductDescript ();
	cout << setw(15) <<setfill(' ')<< GetManuIdNum ();// ignores leading zeros, want printed out
	cout << fixed<< showpoint << setprecision(2);
	cout << setw(13) << setfill(' ')<< "$"<< CalcRetailPrice ();// would like to add a "$" here
	cout << setw(15) << setfill(' ')<< GetQuantityInStock ();
	 cout<< endl;
}    */