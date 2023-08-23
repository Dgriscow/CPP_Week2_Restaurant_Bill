#include "BillCalculator.h"
#include <iostream>
using namespace std;




double BillCalculator::taxCalculator(double toTaxAmount)
{
	double newTaxedAmount = toTaxAmount * .0675;


	return newTaxedAmount;
}

double BillCalculator::tipCalculator(double toTipAmount)
{

	double newTipAmount = toTipAmount * .15;

	return newTipAmount;
}

void BillCalculator::calculateTotalBill()
{
	//first ask User for a Bills current Total: 

	double unCalculatedBillAmount;

	cout << "How Much Is the Bills Current Amount?: $";

	cin >> unCalculatedBillAmount;

	double finalBillAmount;
	//with the current bill amount, FIRST call and calculate the taxes
	double taxAmount;

	taxAmount = taxCalculator(unCalculatedBillAmount);

	//with the new taxed amount, calculate the final amount bill with just the taxes,
	
	finalBillAmount = unCalculatedBillAmount + taxAmount;
	
	// Now calculate the tips amount based on the current final Bill amount 
	double tipAmount;

	tipAmount = tipCalculator(finalBillAmount);

	//with the tip amount calculated, simply add it to the bill
	finalBillAmount += tipAmount;


	cout << "Your Bills Original Total: $" << unCalculatedBillAmount << "\n\n" << "Tax: $" << taxAmount << "\n\n" << "Tip: $" << tipAmount << "\n\n" << "Your Bills Final Total: $" << finalBillAmount;
	




}