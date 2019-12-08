#include <iostream>
#include <vector>
#include <string>	
#include "simlib.h"

using namespace std;

// default values
double members = 2.6;
double duration = 1.0;
double plastic = 20.3;
double paper = 30.9;
double glass = 37.5;
double metal = 50.8;
double fabric = 2.5;
double mineral = 21.6;
double dangerous = 20.8;
double electro = 72.3;
double bio = 48.3;
double burnable = 18.4;


void printHelp(){
	cout << endl;
	cout << "This program outputs the overall carboon footprint of waste made by a household based on the percentage of individual types of waste recycled." << endl;
	cout << endl;
	cout << "OPTIONS:" << endl;
	cout << endl;
	cout << "-h | -help     display this help and exit" << endl << endl;
	cout << "-m <double>     set the number of members in a household" << endl;
	cout << "               default: " << members << endl << endl;
	cout << "-t <double>     set the duration of the simulation in days" << endl;
	cout << "               default: " << duration << " day(s)" << endl << endl;
	cout << "-pl <double>    set the percentafe of plastic waste recycled by the household" << endl;
	cout << "               default: " << plastic << " %" << endl << endl;
	cout << "-pa <double>    set the percentafe of paper waste recycled by the household" << endl;
	cout << "               default: " << paper << " %" << endl << endl;
	cout << "-g <double>     set the percentafe of glass waste recycled by the household" << endl;
	cout << "               default: " << glass << " %" << endl << endl;
	cout << "me <double>     set the percentafe of metal waste recycled by the household" << endl;
	cout << "               default: " << metal << " %" << endl << endl;
	cout << "-f <double>     set the percentafe of fabric waste recycled by the household" << endl;
	cout << "               default: " << fabric << " %" << endl << endl;
	cout << "-mi <double>    set the percentafe of mineral waste recycled by the household" << endl;
	cout << "               default: " << mineral << " %" << endl << endl;
	cout << "-d <double>     set the percentafe of dangerous waste recycled by the household" << endl;
	cout << "               default: " << dangerous << " %" << endl << endl;
	cout << "-e <double>     set the percentafe of electronic waste recycled by the household" << endl;
	cout << "               default: " << electro << " %" << endl << endl;
	cout << "-bi <double>    set the percentafe of biological waste recycled by the household" << endl;
	cout << "               default: " << bio << " %" << endl << endl;
	cout << "-bu <double>    set the percentafe of burnable waste recycled by the household" << endl;
	cout << "               default: " << burnable << " %" << endl << endl;
}

void parseArguments(int argc, char* argv[]){

	vector<string> args(argv, argv+argc);
  	for (size_t i = 1; i < args.size(); ++i){
	    if (args[i] == "-h" || args[i] == "-help") {
	    	printHelp();
	    	exit(EXIT_SUCCESS);
	    } 
	    // members
	    else if (args[i] == "-m") {
	    	try {
	    		members = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-m\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (members <= 0){
	    		cout << "ERROR: The amount of members in the household has to be bigger than 0." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // duration
	    else if (args[i] == "-t") {
	    	try {
	    		duration = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-t\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (duration <= 0){
	    		cout << "ERROR: The duration of the simulation has to be bigger than 0." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // plastic
	    else if(args[i] == "-pl") {
	    	try {
	    		plastic = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-pl\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (plastic < 0 || plastic > 100){
	    		cout << "ERROR: The percentage of recycled plastic waste cannot be less 0 and more than 100." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }	
	    // paper
	    else if(args[i] == "-pa") {
	    	try {
	    		paper = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-pa\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (paper < 0 || paper > 100){
	    		cout << "ERROR: The percentage of recycled paper waste cannot be less 0 and more than 100." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // glass
	    else if(args[i] == "-g") {
	    	try {
	    		glass = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-g\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (glass < 0 || glass > 100){
	    		cout << "ERROR: The percentage of recycled glass waste cannot be less 0 and more than 100." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // metal
	    else if(args[i] == "-me") {
	    	try {
	    		metal = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'me\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (metal < 0 || metal > 100){
	    		cout << "ERROR: The percentage of recycled metal waste cannot be less 0 and more than 100." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // fabric
	    else if(args[i] == "-f") {
	    	try {
	    		fabric = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-f\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (fabric < 0 || fabric > 100){
	    		cout << "ERROR: The percentage of recycled fabric waste cannot be less 0 and more than 100." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // minerals
	    else if(args[i] == "-mi") {
	    	try {
	    		mineral = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-mi\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (mineral < 0 || mineral > 100){
	    		cout << "ERROR: The percentage of recycled mineral waste cannot be less 0 and more than 100." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // dangerous waste
	    else if(args[i] == "-d") {
	    	try {
	    		dangerous = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-d\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (dangerous < 0 || dangerous > 100){
	    		cout << "ERROR: The percentage of recycled dangerous waste cannot be less 0 and more than 100." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // electronic waste
	    else if(args[i] == "-e") {
	    	try {
	    		electro = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-e\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (electro < 0 || electro > 100){
	    		cout << "ERROR: The percentage of recycled electronic waste cannot be less 0 and more than 100." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // biological waste
	    else if(args[i] == "-bi") {
	    	try {
	    		bio = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-bi\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (bio < 0 || bio > 100){
	    		cout << "ERROR: The percentage of recycled biological waste cannot be less 0 and more than 100." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // burnable waste
	    else if(args[i] == "-bu") {
	    	try {
	    		burnable = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-bu\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (burnable < 0 || burnable > 100){
	    		cout << "ERROR: The percentage of recycled burnable waste cannot be less 0 and more than 100." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    else{
	    	cout << "WARNING: Option \'" << args[i] << "\' not recognized. It will be ignored." << endl;
	    }
  	}
}

void printSetValues(){	
  	cout << endl << "Values set:" << endl;
  	cout << endl;
  	cout << "members: " << members << endl;
  	cout << "duration: " << duration << " day(s)" << endl;
  	cout << "plastics: " << plastic << " %" << endl;
  	cout << "paper: " << paper << " %" << endl;
  	cout << "glass: " << glass << " %" << endl;
  	cout << "metal: " << metal << " %" << endl;
  	cout << "fabric: " << fabric << " %" << endl;
  	cout << "minerals: " << mineral << " %" << endl;
  	cout << "dangerous waste: " << dangerous << " %" << endl;
  	cout << "electro waste: " << electro << " %" << endl;
  	cout << "biological waste: " << bio << " %" << endl;
  	cout << "burnable waste: " << burnable << " %" << endl;
}

// average of grams of waste made every hour by an average person in Czechia
const double averageWastePerTenMinutes = 10.31;

double wastePerTenMinutesInHousehold;
double totalFootprint = 0;
double municipalWaste = 0;

class Waste : public Process {
	void Behavior() {
		float wasteType = Uniform(0,100);
		//plastic waste = 8.7 % chance
		if (wasteType < 8.7) {
			if (Uniform(0,100) < plastic){
				//1g of recycled plastic produces the equivalent of 3.5 grams of CO2
				totalFootprint += averageWastePerTenMinutes * 3.5;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWaste += wastePerTenMinutesInHousehold;
			}
		} 
		//paper waste = 10.1 % chance
		else if (wasteType < 18.8){
			if (Uniform(0,100) < paper){
				//1g of recycled paper produces the equivalent of 0.7 grams of CO2
				totalFootprint += averageWastePerTenMinutes * 0.7;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWaste += wastePerTenMinutesInHousehold;
			}
		}
		//glass waste = 4 % chance
		else if (wasteType < 22.8){
			if (Uniform(0,100) < glass){
				//1g of recycled glass produces the equivalent of 0.54 grams of CO2
				totalFootprint += averageWastePerTenMinutes * 0.54;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWaste += wastePerTenMinutesInHousehold;
			}
		}
		//metal waste = 2.5 % chance
		else if (wasteType < 25.3){
			if (Uniform(0,100) < metal){
				//1g of recycled metal produces the equivalent of 0.4 grams of CO2
				totalFootprint += averageWastePerTenMinutes * 0.4;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWaste += wastePerTenMinutesInHousehold;
			}
		}
		//fabric waste = 2.1 % chance
		else if (wasteType < 27.4){
			if (Uniform(0,100) < fabric){
				//1g of recycled fabric produces the equivalent of 32.5 grams of CO2
				totalFootprint += averageWastePerTenMinutes * 32.5;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWaste += wastePerTenMinutesInHousehold;
			}
		}
		//mineral waste = 1.7 % chance
		else if (wasteType < 29.1){
			if (Uniform(0,100) < mineral){
				//1g of recycled minerals produces the equivalent of 0.0027 grams of CO2
				totalFootprint += averageWastePerTenMinutes * 0.0027;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWaste += wastePerTenMinutesInHousehold;
			}
		}
		//dangerous waste = 0.3 % chance
		else if (wasteType < 29.4){
			if (Uniform(0,100) < dangerous){
				//1g of recycled dangerous waste produces the equivalent of 2.494 grams of CO2
				totalFootprint += averageWastePerTenMinutes * 2.494;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWaste += wastePerTenMinutesInHousehold;
			}
		}
		//electronic waste = 0.6 % chance
		else if (wasteType < 30){
			if (Uniform(0,100) < electro){
				//1g of recycled electronic waste produces the equivalent of 23.567 grams of CO2
				totalFootprint += averageWastePerTenMinutes * 23.567;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWaste += wastePerTenMinutesInHousehold;
			}
		}
		//bio waste = 25.6 % chance
		else if (wasteType < 55.6){
			if (Uniform(0,100) < bio){
				//1g of recycled biological waste produces the equivalent of 0.05 grams of CO2
				totalFootprint += averageWastePerTenMinutes * 0.05;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWaste += wastePerTenMinutesInHousehold;
			}
		}
		//burnable waste = 24.1 % chance
		else if (wasteType < 79.7){
			if (Uniform(0,100) < burnable){
				//1g of recycled burnable waste produces the equivalent of 1.9 grams of CO2
				totalFootprint += averageWastePerTenMinutes * 1.9;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWaste += wastePerTenMinutesInHousehold;
			}
		}
		// non recyclable undersized waste, e.g. dust
		else{
			municipalWaste += wastePerTenMinutesInHousehold;
		}
	}
};

class WasteGenerator : public Event {
	void Behavior() {
		(new Waste)->Activate();
		Activate(Time + Exponential(10));
		wastePerTenMinutesInHousehold = averageWastePerTenMinutes * members;
	}
};

int main (int argc, char *argv[])
{
	parseArguments(argc, argv);

	printSetValues();

  	double minutes = duration * 24 * 60;

	RandomSeed(time(NULL));

	Init(0, minutes); // doba simulace
	(new WasteGenerator)->Activate();
	Run(); // start simulace

	cout << endl << endl << "municipal waste " << municipalWaste / 1000 << " kg" << endl;

	cout << "total footprint before municipal " << totalFootprint / 1000<< " kg of CO2" << endl;

	double exponential = 0;
	while (exponential < 0.7 || exponential > 1.2){
		exponential = Exponential(0.95);
	}
		 
	cout << "exponential " << exponential << endl;
	totalFootprint += municipalWaste * exponential;

	cout << "total footprint " << totalFootprint / 1000<< " kg of CO2" << endl;

	return 0;
}