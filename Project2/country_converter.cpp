#include <iostream>
#include <iomanip>
#include <string>
#include <array>
using namespace std;

//Country list for referencing against trait table
string country_list[20] = { "Brazil", "Canada", "China", "Colombia", "Croatia",
						"Finland", "Greece", "Israel", "Italy", "Japan", "Liberia",
						"Madagascar", "Mexico", "Myanmar", "Russia", "Spain",
						"Thailand", "United Kingdom", "United States", "Vietnam" };
//Defining country traits
//Legend: |Value|Temperature Unit|Distance Unit|Weight Unit|Road Side Driven On|Drivers Seat Side|
//		  |  1  |	Fareinheit	 |	   Miles   |   Pounds  |		Right	   |	  Right		 |
//		  |  2  |	Celsius		 |  Kilometers | Kilograms |		Left	   |	  Left		 |
int country_traits[20][5] ={{2, 2, 2, 1, 2},
							{2, 2, 2, 1, 2},
							{2, 2, 2, 1, 2},
							{2, 2, 2, 1, 2},
							{2, 2, 2, 1, 1},
							{2, 2, 2, 1, 2},
							{2, 2, 2, 1, 2},
							{2, 2, 2, 1, 2},
							{2, 2, 2, 1, 2},
							{2, 2, 2, 2, 1},
							{1, 1, 1, 1, 2},
							{2, 2, 2, 1, 2},
							{2, 2, 2, 1, 2},
							{1, 1, 1, 1, 2},
							{2, 2, 2, 1, 2},
							{2, 2, 2, 1, 2},
							{2, 2, 2, 2, 1},
							{2, 2, 2, 2, 1},
							{1, 1, 1, 1, 2},
							{2, 2, 2, 1, 2}};

//Home country name and traits
string home_country;
int home_temp;
int home_dist;
int home_weight;
int home_road_side;
int home_driving_side;

//Destination country name and traits
string dest_country;
int dest_temp;
int dest_dist;
int dest_weight;
int dest_road_side;
int dest_driving_side;

//Converts temperature value input by user from home country's units to desitnation country's units
void temp_conversion()
{

}

//Converts distance value input by user from home country's units to destination country's units
void dist_conversion()
{

}

//Converts weight value input by user from home country's units to desitnation country's units
void weight_conversion()
{

}

//Displays both countries' driving info
void driving_info()
{

}

//Swaps the home and destination countries
void country_swap()
{

}

//Allows the user to choose a new home country
void replace_home()
{

}

//Allows the user to choose a new desitination country
void replace_destination()
{

}

//Randomly chooses two new countries for the user
void randomize_countries()
{

}

int main()
{
	cout << "Welcome prospective traveler! Lets take a look at your upcoming trip!" << endl;
	cout << "Please enter the name of your home country! Press Enter to see the list of countries in my system." << endl;
	cin.get();
	for (string print_country : country_list) 
	{
		cout << print_country << endl;
	}
	return 0;
}