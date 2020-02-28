//File: Menu.cpp
//Author: Jairun Diemert
//Class: COP3530
//Project: Class work
//Description: This is the member function file for Menu.

#include <iostream>
using namespace std;

#include "Menu.h"
#include "Sorts.h"

void Menu::sortMenu(int A[], int SIZE, int low, int high) {
  bool go = true;
  char option;
  Sorts start;
	do {
		cout << "Choose an option below." << endl 
         << "(D)one" << endl 
         << "(S)election Sort" << endl
         << "(I)nsertion Sort" << endl
         << "(M)erge Sort" << endl
         << "Q(U)ick Sort" << endl
         << "S(H)ell Sort" << endl
			   << ": ";
		cin >> option;
		cout << endl;
		switch (option) {
		case 'D':
		case 'd':
			go = false;
			break;
		case 'S':
		case 's':
      cout << "List before sort: ";
      start.printArray(A, high);
      start.selectionSort(A, high);
      cout << "\n\nList after sort: ";
      start.printArray(A, high);
      cout << "\n\n";
      go = false;
			break;
    case 'I':
		case 'i':
      cout << "List before sort: ";
      start.printArray(A, high);
      start.insertionSort(A, high);
      cout << "\n\nList after sort: ";
      start.printArray(A, high);
      cout << "\n\n";
      go = false;
			break;
    case 'M':
		case 'm':
      cout << "List before sort: ";
      start.printArray(A, high);
      start.mergeSort(A, low, high);
      cout << "\n\nList after sort: ";
      start.printArray(A, high);
      cout << "\n\n";
      go = false;
			break;
    case 'U':
		case 'u':
      cout << "List before sort: ";
      start.printArray(A, high);
      start.quickSort(A, low, high);
      cout << "\n\nList after sort: ";
      start.printArray(A, high);
      cout << "\n\n";
      go = false;
			break;
    case 'H':
		case 'h':
      cout << "List before sort: ";
      start.printArray(A, high);
      start.shellSort(A, high);
      cout << "\n\nList after sort: ";
      start.printArray(A, high);
      cout << "\n\n";
      go = false;
			break;     
		default:
			cout << "Your entry was invalid please try again." << endl;
			break;
		}	
  } while (go);
}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void Menu::buildArray(){
  int const SIZE = 20;
  int A[SIZE];
  int low = 0;
  int high = 0;
  int i = -1;
  bool go = true;
  char option;
  int element;
	do {
    ++i;
		cout << "Choose an option below." << endl 
         << "(D)one" << endl 
         << "(A)dd to list." << endl
			   << ": ";
		cin >> option;
		cout << endl;
		switch (option) {
		case 'D':
		case 'd':
			go = false;
			break;
		case 'A':
		case 'a':
      cout << "\n\nEnter integer: ";
      cin >> element;
      A[i] = element;
      ++high;
			break;   
		default:
			cout << "Your entry was invalid please try again." << endl;
			break;
		}	
  } while (go && i < SIZE);
  sortMenu(A, SIZE, low, high);
}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void Menu::mainMenu() {
  bool go = true;
  char option;
  do {
		cout << "Choose an option below." << endl 
         << "(Q)uit" << endl 
         << "(S)orts" << endl
			   << ": ";
		cin >> option;
		cout << endl;
		switch (option) {
		case 'Q':
		case 'q':
			go = false;
			break;
		case 'S':
		case 's':
      buildArray();
			break;
		default:
			cout << "Your entry was invalid please try again." << endl;
			break;
		}
	} while (go);
}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
