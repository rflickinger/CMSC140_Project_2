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

//Convert string to normal pronoun case
string return_reg_case(string my_str)
{
	string output_str;
	bool first_char_in_word = true;

	for (int i = 0; i < my_str.length(); i++)
	{
		if (first_char_in_word)
		{
			if (my_str[i] == 32)
			{
				first_char_in_word = true;
			}
			else
			{
				output_str += toupper(my_str[i]);
				first_char_in_word = false;
			}
		}
		else if (my_str[i] == 32)
		{
			output_str += my_str[i];
			first_char_in_word = true;
		}
		else
		{
			output_str += tolower(my_str[i]);
		}
	}
	return output_str;
}

//Converts temperature value input by user from home country's units to desitnation country's units
void temp_conversion()
{
	bool loop_run = true;
	int user_input;
	int converted_temp;
	if (home_temp == 1)
	{
		cout << "Please enter an integer value for degrees Farenheit:" << endl;
		cin >> user_input;
		while (loop_run)
		{
			if ((user_input >= -126) && (user_input <= 136))
			{
				cout << "You have entered: " << user_input << " degrees f." << endl;
				loop_run = false;
			}
			else
			{
				cout << "Invalid input. Please try again." << endl;
				cin >> user_input;
			}
		}
		if (dest_temp == 1)
		{
			cout << "In " << dest_country << " this is also represented as " << user_input << " degrees f." << endl;
		}
		else if (dest_temp == 2)
		{
			converted_temp = (5.0 * (static_cast<float>(user_input) - 32.0)) / 9.0;
			cout << "In " << dest_country << " " << user_input << " degrees f is represented as " << converted_temp << " degrees c." << endl;
		}
		else
		{
			cout << "Error with dest_temp value. Value is :" << dest_temp << endl;
		}
	}
	else if (home_temp == 2)
	{
		cout << "Please enter an integer value for degrees Celsius:" << endl;
		cin >> user_input;
		while (loop_run)
		{
			if ((user_input >= -88) && (user_input <= 58))
			{
				cout << "You have entered: " << user_input << " degrees c." << endl;
				loop_run = false;
			}
			else
			{
				cout << "Invalid input. Please try again." << endl;
				cin >> user_input;
			}
		}
		if (dest_temp == 1)
		{
			converted_temp = 1.8 * static_cast<float>(user_input) + 32.0;
			cout << "In " << dest_country << " " << user_input << " degrees c is represented as " << converted_temp << " degrees f." << endl;
			
		}
		else if (dest_temp == 2)
		{
			cout << "In " << dest_country << " this is also represented as " << user_input << " degrees c." << endl;
		}
		else
		{
			cout << "Error with dest_temp value. Value is :" << dest_temp << endl;
		}
	}
	else
	{
		cout << "Error with home_temp value. Value is :" << home_temp << endl;
	}
	cout << "Press Enter to continue.";
	cin.ignore();
	cin.get();
	return;
}

//Converts distance value input by user from home country's units to destination country's units
void dist_conversion()
{
	if (home_dist == 1)
	{
		if (dest_dist == 1)
		{

		}
		else if (dest_dist == 2)
		{

		}
		else
		{
			cout << "Error with dest_dist value. Value is :" << dest_dist << endl;
		}
	}
	else if (home_dist == 2)
	{
		if (dest_dist == 1)
		{

		}
		else if (dest_dist == 2)
		{

		}
		else
		{
			cout << "Error with dest_dist value. Value is :" << dest_dist << endl;
		}
	}
	else
	{
		cout << "Error with home_dist value. Value is :" << home_dist << endl;
	}
	return;
}

//Converts weight value input by user from home country's units to desitnation country's units
void weight_conversion()
{
	if (home_weight == 1)
	{
		if (dest_weight == 1)
		{

		}
		else if (dest_weight == 2)
		{

		}
		else
		{
			cout << "Error with dest_weight value. Value is :" << dest_weight << endl;
		}
	}
	else if (home_weight == 2)
	{
		if (dest_weight == 1)
		{

		}
		else if (dest_weight == 2)
		{

		}
		else
		{
			cout << "Error with dest_weight value. Value is :" << dest_weight << endl;
		}
	}
	else
	{
		cout << "Error with home_weight value. Value is :" << home_weight << endl;
	}
	return;
}

//Displays both countries' driving info
void driving_info()
{

}

//Swaps the home and destination countries
void country_swap()
{
	string temp_country = home_country;
	int temp_temp = home_temp;
	int temp_dist = home_dist;
	int temp_weight = home_weight;
	int temp_road_side = home_road_side;
	int temp_driving_side = home_driving_side;

	home_country = dest_country;
	home_temp = dest_temp;
	home_dist = dest_dist;
	home_weight = dest_weight;
	home_road_side = dest_road_side;
	home_driving_side = dest_driving_side;

	dest_country = temp_country;
	dest_temp = temp_temp;
	dest_dist = temp_dist;
	dest_weight = temp_weight;
	dest_road_side = temp_road_side;
	dest_driving_side = temp_driving_side;

	cout << "Home and destination country have been swapped." << endl;

	return;
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
	bool first_time_in_menu = true;
	bool run_menu = true;

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
	cout << endl << "Please enter a country from the list exactly as it is written above and press Enter." << endl;
	getline(cin, home_country);

	//Normalize case
	home_country = return_reg_case(home_country);

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
			home_country = return_reg_case(home_country);
		}
	}
	loop_bool = true;

	//Assign home country traits
	home_temp = country_traits[home_country_index][0];
	home_dist = country_traits[home_country_index][1];
	home_weight = country_traits[home_country_index][2];
	home_road_side = country_traits[home_country_index][3];
	home_driving_side = country_traits[home_country_index][4];
	cout << "Awesome! You have chosen " << home_country << "!" << endl << endl;

	//Take destination input
	cout << "Please enter a country from the list exactly as it is written above and press Enter." << endl;
	getline(cin, dest_country);

	//Normalize case
	dest_country = return_reg_case(dest_country);

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
			dest_country = return_reg_case(dest_country);
		}
	}
	loop_bool = true;
	
	//Assign destination country traits
	dest_temp = country_traits[dest_country_index][0];
	dest_dist = country_traits[dest_country_index][1];
	dest_weight = country_traits[dest_country_index][2];
	dest_road_side = country_traits[dest_country_index][3];
	dest_driving_side = country_traits[dest_country_index][4];
	cout << "Great job! You have chosen " << dest_country << "!" << endl << endl ;
	
	while (run_menu)
	{
		//Displays the intro line only on the first iteration
		if (first_time_in_menu) 
		{
			cout << "Below are the program options you can choose from." << endl << endl;
		}
		else
		{
			cout << "For a quick refresher, these are the menu options." << endl << endl;
		}

		//Display menu instructions and options
		cout << "1. Convert temperature from your home country's units to your desitination country's units." << endl;
		cout << "2. Convert distance from your home country's units to your desitination country's units." << endl;
		cout << "3. Convert weight from your home country's units to your desitination country's units." << endl;
		cout << "4. Display the side of the road driven on and drivers seat side for both countries." << endl;
		cout << "5. Swap home and destination countries." << endl;
		cout << "6. Choose a new home country." << endl;
		cout << "7. Choose a new destination country." << endl;
		cout << "8. Assign random countries from the list to home and desitnation." << endl;
		cout << "9. Exit program." << endl << endl;

		cout << "Please select the number associated with the option you would like to select." << endl;
		cout << "Please enter only a single digit between 1 and 9." << endl;

		char first_character;
		bool menu_validation = false;
		int func_choice;

		cin.get(first_character);
		cin.ignore();
		cout << endl << "Character immediately after input: " << first_character << endl;

		while (!menu_validation)
		{	
			if ((first_character >= 49) && (first_character <= 57))
			{
				cout << "In if valid" << endl;
				menu_validation = true;
				func_choice = first_character - 48;
				cout << "Func_choice in if valid after being assigned: " << func_choice << endl;
			}
			else
			{
				cout << "Looks like you didn't choose a single digit between 1 and 9, please choose again" << endl;
				
				cout << "The failing char is '" << first_character << "'" << endl;
				cin.get(first_character);
				cin.ignore();
				
				cout << "Character after assignment in else '" << first_character << "'" << endl;
			}
		}

		switch (func_choice)
		{
			case 1:
				temp_conversion();
				break;
			case 2:
				dist_conversion();
				break;
			case 3:
				weight_conversion();
				break;
			case 4:
				driving_info();
				break;
			case 5:
				country_swap();
				break;
			case 6:
				replace_home();
				break;
			case 7:
				replace_destination();
				break;
			case 8:
				randomize_countries();
				break;
			case 9:
				run_menu = false; 
				cout << "Goodbye!" << endl;

		}

	}

	return 0;
}