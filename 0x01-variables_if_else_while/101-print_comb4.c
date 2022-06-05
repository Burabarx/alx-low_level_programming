// Read 3 numbers and write them all in sorted order 
 
// Read 3 numbers 
Write 'Enter 1st of 3 numbers:' 
Read nNumber1 
Write 'Enter 2nd of 3 numbers:' 
Read nNumber2 
Write 'Enter 3rd of 3 numbers:' 
Read nNumber3 
 
// Determine minimum, middle and maximum number 
 
// Sorted order: 1 2 3 
if ((nNumber1 <= nNumber2) AND (nNumber2 <= nNumber3)) { 
  nMinimum = nNumber1 
  nMiddle  = nNumber2 
  nMaximum = nNumber3 
} 
 
// Sorted order: 1 3 2 
if ((nNumber1 <= nNumber3) AND (nNumber3 <= nNumber2)) { 
  nMinimum = nNumber1 
  nMiddle  = nNumber3 
  nMaximum = nNumber2 
} 
 
// Sorted order: 2 1 3 
if ((nNumber2 <= nNumber1) AND (nNumber1 <= nNumber3)) { 
  nMinimum = nNumber2 
  nMiddle  = nNumber1 
  nMaximum = nNumber3 
} 
   
// Sorted order: 2 3 1 
if ((nNumber2 <= nNumber3) AND (nNumber3 <= nNumber1)) { 
  nMinimum = nNumber2 
  nMiddle  = nNumber3 
  nMaximum = nNumber1 
} 
     
// Sorted order: 3 1 2 
if ((nNumber3 <= nNumber1) AND (nNumber1 <= nNumber2)) { 
  nMinimum = nNumber3 
  nMiddle  = nNumber1 
  nMaximum = nNumber2 
} 
 
// Sorted order: 3 2 1 
if ((nNumber3 <= nNumber2) AND (nNumber2 <= nNumber1)) { 
  nMinimum = nNumber3 
  nMiddle  = nNumber2 
  nMaximum = nNumber1 
} 
 
// Write 3 numbers in sorted order 
Write 'Minimum: ' nMinimum 
Write 'Middle:  ' nMiddle 
Write 'Maximum: ' nMaximum 
 
// End program 
End 
