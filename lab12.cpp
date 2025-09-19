// COMSC-210 | Lab 12 (STD::array) | Chevin Jeon 
// IDE used: C++11 VS Code
//
// Real-world simulation: Daily step counts for a 30-day fitness tracker.
// - Reads 30 integers from an external file (one per line) into std::array<int, 30>.
// - Demonstrates std::array member functions and iterator-based operations.
// - Validates file open and data length, prints specific error messages, and shows results.


#include <iostream>     // cout, cin
#include <fstream>      // ifstream
#include <array>        // std::array
#include <algorithm>    // min_element, max_element, sort, copy
#include <numeric>      // accumulate
#include <iomanip>      // setw
#include <string>       // string
using namespace std;
