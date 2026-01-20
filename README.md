# C++ OOP Utility Library

A comprehensive C++ utility library demonstrating object-oriented programming principles with practical date manipulation and general-purpose utility functions.

## Overview

This project consists of three main components:

- **clsDate**: A robust date handling class with extensive date manipulation capabilities
- **clsUtil**: A utility class providing random generation, encryption, and array manipulation functions
- **clsString**: A string manipulation class (referenced but not included)

## Features

### Date Management (clsDate)

The `clsDate` class provides comprehensive date handling functionality:

- Multiple constructors (default, from string, from day/month/year, from day order)
- Date validation and formatting
- Leap year detection
- Calendar printing (monthly and yearly)
- Date arithmetic (add/subtract days, weeks, months, years, decades, centuries, millennia)
- Date comparison operations
- Business day calculations
- Vacation day calculations
- Day of week calculations
- Date range operations

### Utility Functions (clsUtil)

The `clsUtil` class offers various helper functions:

**Random Generation:**
- Random numbers within a range
- Random characters (small/capital letters, digits, special characters, mixed)
- Random words of specified length
- Random keys in format XXXX-XXXX-XXXX-XXXX
- Batch key generation

**Data Manipulation:**
- Generic swap functions for multiple data types (int, double, bool, char, string, clsDate)
- Array shuffling
- Array filling with random data
- Array operations (sum, average, min, max, search, copy)

**Text Processing:**
- Simple encryption/decryption using character shifting
- Tab generation for formatting

## Usage Examples

### Working with Dates

```cpp
#include "clsDate.h"

// Create dates
clsDate today;                              // Current system date
clsDate specificDate(15, 3, 2024);         // March 15, 2024
clsDate fromString("15/03/2024");          // From string format

// Date operations
specificDate.AddOneDay();
specificDate.IncreaseDateByXMonths(6);
specificDate.Print();

// Date comparisons
if (today.isDate1BeforeDate2(specificDate)) {
    std::cout << "Today is before the specific date" << std::endl;
}

// Print calendar
specificDate.PrintMonthCalendar();
```

### Using Utilities

```cpp
#include "clsUtil.h"

// Initialize random seed
clsUtil::Srand();

// Generate random data
int randomNum = clsUtil::RandomNumber(1, 100);
std::string randomWord = clsUtil::GenerateWord(clsUtil::MixChars, 8);
std::string key = clsUtil::GenerateKey(clsUtil::CapitalLetter);

// Array operations
int arr[5];
clsUtil::FillArrayWithRandomNumbers(arr, 5, 1, 100);
clsUtil::ShuffleArray(arr, 5);

// Encryption
std::string text = "Secret Message";
std::string encrypted = clsUtil::EncryptText(text, 5);
std::string decrypted = clsUtil::DecryptText(encrypted, 5);
```

### Swapping Values

```cpp
// Swap integers
int x = 10, y = 20;
clsUtil::Swap(x, y);

// Swap dates
clsDate d1(1, 1, 2024), d2(31, 12, 2024);
clsUtil::Swap(d1, d2);
```

## Character Type Options

The `clsUtil::enCharType` enum provides:

- `SmallLetter`: Lowercase letters (a-z)
- `CapitalLetter`: Uppercase letters (A-Z)
- `SpecialCharacter`: Special characters
- `Digit`: Numbers (0-9)
- `MixChars`: All printable characters

## Date Comparison Results

The `clsDate::enDateCompare` enum returns:

- `Before`: -1
- `Equal`: 0
- `After`: 1

## Key Methods

### clsDate Static Methods

- `GetSystemDate()`: Returns current system date
- `IsValideDate()`: Validates a date
- `isLeapYear()`: Checks if a year is a leap year
- `NumberOfDaysInMonth()`: Returns days in a specific month
- `GetDifferenceInDays()`: Calculates days between two dates
- `CalculateBusinessDays()`: Counts business days between dates

### clsDate Instance Methods

- `Print()`: Displays date in DD/MM/YYYY format
- `DateToString()`: Converts date to string
- `AddOneDay()`: Increments date by one day
- `IncreaseDateByXDays/Weeks/Months/Years()`: Date arithmetic
- `DecreaseDateByXDays/Weeks/Months/Years()`: Reverse date arithmetic
- `isBusinessDay()`: Checks if date is a business day
- `isWeekEnd()`: Checks if date is a weekend

## Building and Running

```bash
# Compile
g++ -o main "10-OOP as it should be.cpp" -I.

# Run
./main
```

## Dependencies

- C++ Standard Library
- clsString.h (for string splitting functionality)

## Notes

- The project uses `#pragma warning(disable : 4996)` to suppress warnings for deprecated functions
- Array functions use fixed size arrays (100 elements max)
- The encryption method is simple character shifting and should not be used for secure applications
- Date validation ensures dates are within valid ranges
