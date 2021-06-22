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
int home_country_index;
int home_temp;
int home_dist;
int home_weight;
int home_road_side;
int home_driving_side;

//Destination country name and traits
string dest_country;
int dest_country_index;
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
	bool loop_bool = true;
	//Introduction of program to user
	cout << "Welcome prospective traveler! Lets take a look at your upcoming trip!" << endl;
	cout << "Get ready to enter the name of your home country! Press Enter to see the list of countries in my system." << endl;
	cin.get();

	//Prints out list of countries in a column
	for (string print_country : country_list) 
	{
		cout << print_country << endl;
	}

	//Take user input for home country
	cout << "Please enter a country from the list exactly as it is written above" << endl;
	getline(cin, home_country);

	//Validate that user has input a country on the list and store its index
	while (loop_bool)
	{
		bool is_valid = false;
		for (int i = 0; i < sizeof(country_list)/sizeof(country_list[0]); i++)
		{
			if (home_country == country_list[i])
			{
				home_country_index = i;
				i = sizeof(country_list) / sizeof(country_list[0]);
				loop_bool = false;
				is_valid = true;
			}
		}
		if (!is_valid)
		{
			cout << "Oops! Looks like you chose an invalid option, please try again!" << endl;
			getline(cin, home_country);
		}
	}
	loop_bool = true;

	//Assign home country traits
	home_temp = country_traits[home_country_index][0];
	home_dist = country_traits[home_country_index][1];
	home_weight = country_traits[home_country_index][2];
	home_road_side = country_traits[home_country_index][3];
	home_driving_side = country_traits[home_country_index][4];
	cout << "Awesome! You have chosen " << home_country << "!" << endl;

	//Take destination input
	cout << "Please enter a country from the list exactly as it is written above." << endl;
	getline(cin, dest_country);

	//Validate that user has input a country on the list and store its index
	while (loop_bool)
	{
		bool is_valid = false;
		for (int i = 0; i < sizeof(country_list) / sizeof(country_list[0]); i++)
		{
			if (dest_country == country_list[i])
			{
				dest_country_index = i;
				i = sizeof(country_list) / sizeof(country_list[0]);
				loop_bool = false;
				is_valid = true;
			}
		}
		if (!is_valid)
		{
			cout << "Oops! Looks like you chose an invalid option, please try again!" << endl;
			getline(cin, dest_country);
		}
	}
	loop_bool = true;
	
	//Assign destination country traits
	dest_temp = country_traits[dest_country_index][0];
	dest_dist = country_traits[dest_country_index][1];
	dest_weight = country_traits[dest_country_index][2];
	dest_road_side = country_traits[dest_country_index][3];
	dest_driving_side = country_traits[dest_country_index][4];
	cout << "Great job! You have chosen " << dest_country << "!" << endl;


	return 0;
}