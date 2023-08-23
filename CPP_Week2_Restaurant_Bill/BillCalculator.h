#pragma once


class BillCalculator {




	//3 functions for abstractions sake 
	//1: calculate Total Bill: calculates the entire bills total and handles calling tax and tip calculations 
	//2: Tax Calculator: calulates tax based of a given value 
	//3: tip calculator: Calculates tip based off a given value 

private: 

	double taxCalculator(double amount);

	double tipCalculator(double amount);


public: 
	void calculateTotalBill();








};