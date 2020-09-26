// sortdata getnext getsize handlemissingdata definitions

//sorts vector inplace based on mySortOrder (inplace means the vector is modified)
//returns nothing
#include<vector>
#include"../includes/constants.h"
#include"../includes/utils.h"

void utils::sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses){

}

//gets the next process from the vector, then removes it from the vector
//returns removed process
process utils::getNext(std::vector<process> &myProcesses){
	process p;
	return p;
}

//returns the number of entries in the vector
int utils::getSize(std::vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//attempt to correct missing data
//if cannot correct, then drop row
//return number of rows in myProcesses
int utils::handleMissingData(std::vector<process> &myProcesses){
	return NO_DATA_TO_WORK_ON;
}
