// sortdata getnext getsize handlemissingdata declarations

//sorts vector inplace based on mySortOrder (inplace means the vector is modified)
//returns nothing
#ifndef UTILS_H
#define UTILS_H_

#include <vector>
#include "constants.h"
namespace utils{


void sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);

//gets the next process from the vector, then removes it from the vector
//returns removed process
process getNext(std::vector<process> &myProcesses);

//returns the number of entries in the vector
int getSize(std::vector<process> &myProcesses);

//attempt to correct missing data
//if cannot correct, then drop row
//return number of rows in myProcesses
int handleMissingData(std::vector<process> &myProcesses);
}
#endif
