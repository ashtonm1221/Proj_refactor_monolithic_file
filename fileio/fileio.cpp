//load and save definitions
#include<vector>
#include <iostream>
#include <string>

#include"../includes/constants.h"
#include"../includes/fileio.h"
//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int fileio::loadData(const std::string filename, std::vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int fileio::saveData(const std::string filename, std::vector<process> &myProcesses){
	return UNIMPLEMENTED;
}
