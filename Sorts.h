//File: Sorts.h
//Author: Jairun Diemert
//Class: COP3530
//Project: Class work
//Description: This is the header file for the Sorts class
#ifndef SORTS_H
#define SORTS_H

#include <iostream>
using namespace std;

class Sorts {
public:
	
  int positionPivot (int A[], int low, int high);
  void quickSort(int A[], int low, int high);
  void printArray(int A[], int high);
  void merge(int A[], int leftIndex, int middleIndex, int rightIndex);
  void mergeSort(int A[], int leftIndex, int rightIndex);
  void selectionSort(int A[], int high);
  void shellSort(int A[], int high);
  void insertionSort(int A[], int high);

private:

};

#endif 
