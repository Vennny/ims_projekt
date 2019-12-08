#include <iostream>
#include <vector>
#include <string>	
#include "simlib.h"

using namespace std;

// default values
int households = 1;
double members = 2.6;
double durationInDays = 1.0;
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
	cout << "This program outputs the average carboon footprint of waste made by the selected amount of households based on the percentage of individual types of waste recycled." << endl;
	cout << endl;
	cout << "OPTIONS:" << endl;
	cout << endl;
	cout << "-h | -help     display this help and exit" << endl << endl;
	cout << "-h <int>        set the number of households in the simulation" << endl;
	cout << "                default: " << households << endl << endl;
	cout << "-m <double>     set the number of members in a household" << endl;
	cout << "                default: " << members << endl << endl;
	cout << "-t <double>     set the duration of the simulation in days" << endl;
	cout << "                default: " << durationInDays << " day(s)" << endl << endl;
	cout << "-pl <double>    set the percentafe of plastic waste recycled by the household" << endl;
	cout << "                default: " << plastic << " %" << endl << endl;
	cout << "-pa <double>    set the percentafe of paper waste recycled by the household" << endl;
	cout << "                default: " << paper << " %" << endl << endl;
	cout << "-g <double>     set the percentafe of glass waste recycled by the household" << endl;
	cout << "                default: " << glass << " %" << endl << endl;
	cout << "me <double>     set the percentafe of metal waste recycled by the household" << endl;
	cout << "                default: " << metal << " %" << endl << endl;
	cout << "-f <double>     set the percentafe of fabric waste recycled by the household" << endl;
	cout << "                default: " << fabric << " %" << endl << endl;
	cout << "-mi <double>    set the percentafe of mineral waste recycled by the household" << endl;
	cout << "                default: " << mineral << " %" << endl << endl;
	cout << "-d <double>     set the percentafe of dangerous waste recycled by the household" << endl;
	cout << "                default: " << dangerous << " %" << endl << endl;
	cout << "-e <double>     set the percentafe of electronic waste recycled by the household" << endl;
	cout << "                default: " << electro << " %" << endl << endl;
	cout << "-bi <double>    set the percentafe of biological waste recycled by the household" << endl;
	cout << "                default: " << bio << " %" << endl << endl;
	cout << "-bu <double>    set the percentafe of burnable waste recycled by the household" << endl;
	cout << "                default: " << burnable << " %" << endl << endl;
}

void parseArguments(int argc, char* argv[]){

	vector<string> args(argv, argv+argc);
  	for (size_t i = 1; i < args.size(); ++i){
	    if (args[i] == "-help") {
	    	printHelp();
	    	exit(EXIT_SUCCESS);
	    } 
	    // households
	    else if (args[i] == "-h") {
	    	try {
	    		households = stoi(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid integer \'" << args[i] << "\' provided for option \'-h\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (households <= 0){
	    		cout << "ERROR: The amount of households has to be bigger than 0." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // members
	    else if (args[i] == "-m") {
	    	try {
	    		members = stod(args[++i]);
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
	    		durationInDays = stod(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid double \'" << args[i] << "\' provided for option \'-t\'. Exiting program." << endl;
	    		exit(EXIT_FAILURE);
	    	}

	    	if (durationInDays <= 0){
	    		cout << "ERROR: The duration of the simulation has to be bigger than 0." << endl;
	    		exit(EXIT_FAILURE);
	    	}
	    }
	    // plastic
	    else if(args[i] == "-pl") {
	    	try {
	    		plastic = stod(args[++i]);
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
	    		paper = stod(args[++i]);
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
	    		glass = stod(args[++i]);
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
	    		metal = stod(args[++i]);
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
	    		fabric = stod(args[++i]);
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
	    		mineral = stod(args[++i]);
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
	    		dangerous = stod(args[++i]);
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
	    		electro = stod(args[++i]);
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
	    		bio = stod(args[++i]);
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
	    		burnable = stod(args[++i]);
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
  	cout << "households: " << households << endl;
  	cout << "members: " << members << endl;
  	cout << "duration: " << durationInDays << " day(s)" << endl;
  	cout << "plastics: " << plastic << " %" << endl;
  	cout << "paper: " << paper << " %" << endl;
  	cout << "glass: " << glass << " %" << endl;
  	cout << "metal: " << metal << " %" << endl;
  	cout << "fabric: " << fabric << " %" << endl;
  	cout << "minerals: " << mineral << " %" << endl;
  	cout << "dangerous waste: " << dangerous << " %" << endl;
  	cout << "electro waste: " << electro << " %" << endl;
  	cout << "biological waste: " << bio << " %" << endl;
  	cout << "burnable waste: " << burnable << " %" << endl << endl;
}

// average of kilograms of waste made every ten minutes by an average person in Czechia
const double averageWastePerTenMinutes = 0.01031;

double wastePerTenMinutesInHousehold;
double totalFootprint = 0;
double municipalWasteInHousehold = 0;

class Waste : public Process {
	void Behavior() {
		float wasteType = Uniform(0,100);
		//plastic waste = 8.7 % chance
		if (wasteType < 8.7) {
			if (Uniform(0,100) < plastic){
				//1g of recycled plastic produces the equivalent of 1.3 grams of CO2
				//only 60 % of seperated plastic are usable for recycling
				totalFootprint += wastePerTenMinutesInHousehold * 0.6 * 1.3;

				//40 % of seperated plastic are actually unusable
				municipalWasteInHousehold += wastePerTenMinutesInHousehold * 0.4;
				//primary production of a gram of plastic is 2.1g
				totalFootprint += wastePerTenMinutesInHousehold * 0.4 * 2.1;	
			} else {
				//put the waste into a trashbin of municipal waste
				municipalWasteInHousehold += wastePerTenMinutesInHousehold;
				//primary production of a gram of plastic is 2.1g
				totalFootprint += wastePerTenMinutesInHousehold * 2.1;
			}
		} 
		//paper waste = 10.1 % chance
		else if (wasteType < 18.8){
			if (Uniform(0,100) < paper){
				//1g of recycled paper produces the equivalent of 0.7 grams of CO2
				totalFootprint += wastePerTenMinutesInHousehold * 0.7;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWasteInHousehold += wastePerTenMinutesInHousehold;
				//primary production of a gram of paper is 1.1g
				totalFootprint += wastePerTenMinutesInHousehold * 1.1;
			}
		}
		//glass waste = 4 % chance
		else if (wasteType < 22.8){
			if (Uniform(0,100) < glass){
				//1g of recycled glass produces the equivalent of 0.54 grams of CO2
				totalFootprint += wastePerTenMinutesInHousehold * 0.54;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWasteInHousehold += wastePerTenMinutesInHousehold;
				//primary production of a gram of glass is 0.9g
				totalFootprint += wastePerTenMinutesInHousehold * 0.9;
			}
		}
		//metal waste = 2.5 % chance
		else if (wasteType < 25.3){
			if (Uniform(0,100) < metal){
				//1g of recycled metal produces the equivalent of 0.4 grams of CO2
				totalFootprint += wastePerTenMinutesInHousehold * 0.4;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWasteInHousehold += wastePerTenMinutesInHousehold;
				//primary production of a gram of metal is 11g
				totalFootprint += wastePerTenMinutesInHousehold * 11;
			}
		}
		//fabric waste = 2.1 % chance
		else if (wasteType < 27.4){
			if (Uniform(0,100) < fabric){
				//1g of recycled fabric produces the equivalent of 32.5 grams of CO2
				totalFootprint += wastePerTenMinutesInHousehold * 32.5;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWasteInHousehold += wastePerTenMinutesInHousehold;
				//primary production of a gram of fabric is 33.8g
				totalFootprint += wastePerTenMinutesInHousehold * 33.8;
			}
		}
		//mineral waste = 1.7 % chance
		else if (wasteType < 29.1){
			if (Uniform(0,100) < mineral){
				//1g of recycled minerals produces the equivalent of 0.0027 grams of CO2
				totalFootprint += wastePerTenMinutesInHousehold * 0.0027;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWasteInHousehold += wastePerTenMinutesInHousehold;
				//primary production of a gram of minerals is 2.58g
				totalFootprint += wastePerTenMinutesInHousehold * 2.58;
			}
		}
		//dangerous waste = 0.3 % chance
		else if (wasteType < 29.4){
			if (Uniform(0,100) < dangerous){
				//1g of recycled dangerous waste produces the equivalent of 2.494 grams of CO2
				totalFootprint += wastePerTenMinutesInHousehold * 2.494;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWasteInHousehold += wastePerTenMinutesInHousehold;
				//primary production of a gram of dangerous waste is 18.07 g
				totalFootprint += wastePerTenMinutesInHousehold * 18.07;
			}
		}
		//electronic waste = 0.6 % chance
		else if (wasteType < 30){
			if (Uniform(0,100) < electro){
				//1g of recycled electronic waste produces the equivalent of 23.567 grams of CO2
				totalFootprint += wastePerTenMinutesInHousehold * 23.567;
				//90 % of seperated eletronical waste is actually recycled
				totalFootprint += wastePerTenMinutesInHousehold * 0.9 * 23.567;

				//40 % of seperated eletronical waste is actually unusable
				municipalWasteInHousehold += wastePerTenMinutesInHousehold * 0.1;
				//primary production of a gram of eletronical waste is 296.814 g
				totalFootprint += wastePerTenMinutesInHousehold * 0.1 * 296.814;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWasteInHousehold += wastePerTenMinutesInHousehold;
				//primary production of a gram of eletronical waste is 296.814 g
				totalFootprint += wastePerTenMinutesInHousehold * 296.814;
			}
		}
		//bio waste = 25.6 % chance
		else if (wasteType < 55.6){
			if (Uniform(0,100) < bio){
				//1g of recycled biological waste produces the equivalent of 0.05 grams of CO2
				totalFootprint += wastePerTenMinutesInHousehold * 0.05;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWasteInHousehold += wastePerTenMinutesInHousehold;
				//primary production of a gram of biological waste is 0.07g
				totalFootprint += wastePerTenMinutesInHousehold * 0.07;
			}
		}
		//burnable waste = 24.1 % chance
		else if (wasteType < 79.7){
			if (Uniform(0,100) < burnable){
				//1g of recycled burnable waste produces the equivalent of 1.9 grams of CO2
				totalFootprint += wastePerTenMinutesInHousehold * 1.9;

			} else {
				//put the waste into a trashbin of municipal waste
				municipalWasteInHousehold += wastePerTenMinutesInHousehold;
				//primary production of a gram of burnable waste is 1.127g
				totalFootprint += wastePerTenMinutesInHousehold * 1.127;
			}
		}
		// non recyclable undersized waste, e.g. dust
		else{
			municipalWasteInHousehold += wastePerTenMinutesInHousehold;
		}
	}
};

class WasteGenerator : public Event {
	void Behavior() {
		(new Waste)->Activate();
		Activate(Time + Exponential(10));
	}
};

int main (int argc, char *argv[])
{
	parseArguments(argc, argv);

	printSetValues();

  	double minutes = durationInDays * 24 * 60;

	RandomSeed(time(NULL));

	wastePerTenMinutesInHousehold = averageWastePerTenMinutes * members;

	double exponential = 0;
	for (int i = 0; i < households; i++){
		Init(0, minutes);
		municipalWasteInHousehold = 0;
		(new WasteGenerator)->Activate();
		Run();

		//the CO2 equivalent emission of municipal waste is between 0.7g and 1.2g CO2 per gram of waste
		while (exponential < 0.7 || exponential > 1.2){
			exponential = Exponential(0.95);
		}

		totalFootprint += municipalWasteInHousehold * exponential;
	}
	
	double averageTotalFootprint = totalFootprint / households;

	cout << "Average total carboon footprint is:" << endl << averageTotalFootprint << " kg of CO2" << endl;

	return 0;
}