#include <iostream>
#include <vector>
#include <string>	

using namespace std;

int main (int argc, char *argv[])
{

	float members = 2.6;
	float duration = 1.0;
	float plastic = 20.3;
	float paper = 30.9;
	float glass = 37.5;
	float metal = 50.8;
	float fabric = 2.5;
	float mineral = 21.6;
	float dangerous = 20.8;
	float electro = 72.3;
	float bio = 48.3;
	float burnable = 18.4;

  	vector<string> args(argv, argv+argc);
  	for (size_t i = 1; i < args.size(); ++i){

	    if (args[i] == "-h" || args[i] == "-help") {
	    	cout << endl;
	    	cout << "This program outputs the overall carboon footprint of waste made by a household based on the percentage of individual types of waste recycled." << endl;
	    	cout << endl;
	    	cout << "OPTIONS:" << endl;
	    	cout << endl;
	    	cout << "-h | -help     display this help and exit" << endl << endl;
	    	cout << "-m <float>     set the number of members in a household" << endl;
	    	cout << "               default: " << members << endl << endl;
	    	cout << "-t <float>     set the duration of the simulation in days" << endl;
	    	cout << "               default: " << duration << " day(s)" << endl << endl;
	    	cout << "-pl <float>    set the percentafe of plastic waste recycled by the household" << endl;
	    	cout << "               default: " << plastic << " %" << endl << endl;
	    	cout << "-pa <float>    set the percentafe of paper waste recycled by the household" << endl;
	    	cout << "               default: " << paper << " %" << endl << endl;
	    	cout << "-g <float>     set the percentafe of glass waste recycled by the household" << endl;
	    	cout << "               default: " << glass << " %" << endl << endl;
	    	cout << "me <float>     set the percentafe of metal waste recycled by the household" << endl;
	    	cout << "               default: " << metal << " %" << endl << endl;
	    	cout << "-f <float>     set the percentafe of fabric waste recycled by the household" << endl;
	    	cout << "               default: " << fabric << " %" << endl << endl;
	    	cout << "-mi <float>    set the percentafe of mineral waste recycled by the household" << endl;
	    	cout << "               default: " << mineral << " %" << endl << endl;
	    	cout << "-d <float>     set the percentafe of dangerous waste recycled by the household" << endl;
	    	cout << "               default: " << dangerous << " %" << endl << endl;
	    	cout << "-e <float>     set the percentafe of electronic waste recycled by the household" << endl;
	    	cout << "               default: " << electro << " %" << endl << endl;
	    	cout << "-bi <float>    set the percentafe of biological waste recycled by the household" << endl;
	    	cout << "               default: " << bio << " %" << endl << endl;
	    	cout << "-bu <float>    set the percentafe of burnable waste recycled by the household" << endl;
	    	cout << "               default: " << burnable << " %" << endl << endl;
	    	return EXIT_SUCCESS;
	    } 
	    // members
	    else if (args[i] == "-m") {
	    	try {
	    		members = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'-m\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (members <= 0){
	    		cout << "ERROR: The amount of members in the household has to be bigger than 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }
	    // duration
	    else if (args[i] == "-t") {
	    	try {
	    		duration = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'-t\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (duration <= 0){
	    		cout << "ERROR: The duration of the simulation has to be bigger than 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }
	    // plastic
	    else if(args[i] == "-pl") {
	    	try {
	    		plastic = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'-pl\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (plastic < 0){
	    		cout << "ERROR: The percentage of recycled plastic waste cannot be less 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }	
	    // paper
	    else if(args[i] == "-pa") {
	    	try {
	    		paper = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'-pa\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (paper < 0){
	    		cout << "ERROR: The percentage of recycled paper waste cannot be less 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }
	    // glass
	    else if(args[i] == "-g") {
	    	try {
	    		glass = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'-g\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (glass < 0){
	    		cout << "ERROR: The percentage of recycled glass waste cannot be less 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }
	    // metal
	    else if(args[i] == "-me") {
	    	try {
	    		metal = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'me\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (metal < 0){
	    		cout << "ERROR: The percentage of recycled metal waste cannot be less 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }
	    // fabric
	    else if(args[i] == "-f") {
	    	try {
	    		fabric = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'-f\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (fabric < 0){
	    		cout << "ERROR: The percentage of recycled fabric waste cannot be less 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }
	    // minerals
	    else if(args[i] == "-mi") {
	    	try {
	    		mineral = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'-mi\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (mineral < 0){
	    		cout << "ERROR: The percentage of recycled mineral waste cannot be less 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }
	    // dangerous waste
	    else if(args[i] == "-d") {
	    	try {
	    		dangerous = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'-d\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (dangerous < 0){
	    		cout << "ERROR: The percentage of recycled dangerous waste cannot be less 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }
	    // electronic waste
	    else if(args[i] == "-e") {
	    	try {
	    		electro = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'-e\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (electro < 0){
	    		cout << "ERROR: The percentage of recycled electronic waste cannot be less 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }
	    // biological waste
	    else if(args[i] == "-bi") {
	    	try {
	    		bio = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'-bi\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (bio < 0){
	    		cout << "ERROR: The percentage of recycled biological waste cannot be less 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }
	    // burnable waste
	    else if(args[i] == "-bu") {
	    	try {
	    		burnable = stof(args[++i]);
	    	}
	    	catch (...) 
	    	{
	    		cout << "ERROR: Invalid float \'" << args[i] << "\' provided for option \'-bu\'. Exiting program." << endl;
	    		return EXIT_FAILURE;
	    	}

	    	if (burnable < 0){
	    		cout << "ERROR: The percentage of recycled burnable waste cannot be less 0." << endl;
	    		return EXIT_FAILURE;
	    	}
	    }
	    else{
	    	cout << "WARNING: Option \'" << args[i] << "\' not recognized. It will be ignored." << endl;
	    }
  	}

  	cout << endl << "Options:" << endl;
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

	return 0;
}