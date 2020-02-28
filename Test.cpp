//File: Test
//Author: Jairun Diemert
//Class: COP3530
//Project: Class work
//Description: This is to store test functions .

//Quick sort Tests
/*cout << "\n\nRUNNING TEST\n\n";

  int A[] = {23, 35, 67,1, 17, 12, 99, 45,13,16,3, 4, 87, 50, 60};
  int size = sizeof(A) / sizeof(A[0]);
  cout << "\nOriginal array order: ";
  printArray(A, size);
  int low = 0;
  int high = size -1;
  bool pass = true;

  swap(A[0], A[1]);
  if (A[0] != 35 || A[1] != 23)
    cout << "swap() FAILED\n\n"; 

  for(int i = 0; i < positionPivot(A, low, high); i++)
    if (A[positionPivot(A, low, high)] < A[i])
      cout << "positionPivot() FAILED\n\n";
  for(int i = size - 1; i > positionPivot(A, low, high); i--)
    if (A[positionPivot(A, low, high)] < A[i])
      cout << "positionPivot() FAILED\n\n";  

  quickSort(A, low, high);
  for (int i = 0; i < size - 1; i++)
    if (A[i + 1] <= A[i])
      pass = false;
    if (!pass)  
      cout << "quickSort() FAILED\n\n";

  cout << "\nSorted array order: ";
  printArray(A, size);

  cout << "\n\nTEST RESULTS ABOVE\n\n";
  //Quic sort Tests
  */
