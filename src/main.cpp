#include "../headers/restaurants.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string meatOptions() { //displays meat options when "Meat" is selected
  string choice;
  cout << "Meat Options" << endl
       << "1. Beef" << endl
       << "2. Chicken" << endl
       << "3. Pork" << endl
       << "4. Turkey" << endl
       << "5. [Back]" << endl; //"Back" to go back to food preferences 
  
  cin >> choice;
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

string seafoodOptions() { //displays meat options when "Seafood" is selected
  string choice;
  cout << "Seafood Options" << endl
       << "1. Crab" << endl
       << "2. Salmon" << endl
       << "3. Scallops" << endl
       << "4. Shrimp" << endl
       << "5. Tuna" << endl
       << "6. [Back]" << endl; //"Back" to go back to food preferences
  
  cin >> choice;
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

string dishOptions() { //displays meat options when "Dishes" is selected
  string choice;
  cout << "Dishes Options" << endl
       << "1. Burger" << endl
       << "2. Burritos" << endl
       << "3. Fries" << endl
       << "4. Noodles" << endl
       << "5. Rice" << endl
       << "6. Salad" << endl
       << "7. Sandwich" << endl
       << "8. Tacos" << endl
       << "9. [Back]" << endl; //"Back" to go back to food preferences
  
  cin >> choice;
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

string cuisineOptions() { //displays meat options when "Cuisine" is selected
  string choice;
  cout << "Cuisine Options:" << endl
       << "1. American" << endl
       << "2. Chinese" << endl
       << "3. Japanese" << endl
       << "4. Mediterranean" << endl
       << "5. Mexican" << endl
       << "6. [Back]" << endl; //"Back" to go back to food preferences

  cin >> choice;
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

string menu() {
  string choice;
  cout << endl << "Enter food type or cuisines ";
  cout << endl;
  // TODO Put the result into a unsigned int
  //    Then into a hash table that holds all restaurants with that enum
  cout << "Food Preferences:" << endl
       << "1. Meat:" << endl
       << "2. Seafood:" << endl
       << "3. Vegetarian" << endl
       << "4. Vegan" << endl
       << "5. Vegetables" << endl
       << "6. Dishes:" << endl
       << "7. Dessert" << endl
       << "8. Cuisines:" << endl
       << "9. None" << endl // default; will give every and all options; using "None" rather than "No Preference" to avoid using getline 
       << "10. [Quit]" << endl; //quit option

  cin >> choice;

  // fix buffer just in case non-numeric choice entered
  // also gets rid of newline character
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

int main() {
  /* vectorRestaurant vMenus; // class that holds all restaurants */

  string choice;
  
  while(choice != "quit") {
    choice = menu();
    std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); }); //ideally make choice lowercase for input conviences

    if (choice == "quit") {
      cout << "quitting program" << endl;
    } else if (choice == "meat") {
      //show meat options
      choice = meatOptions();
      std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });

      
    } else if (choice == "seafood") {
      choice = seafoodOptions();
      std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });


    } else if (choice == "vegetarian") {
      //add Vegetarian to preferences

    } else if (choice == "vegan") {
      //add Vegan to preferences


    } else if (choice == "vegetables") {
      //add Vegetables to preferences


    } else if (choice == "dishes") {
      choice = dishOptions();
      std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });

      
    } else if (choice == "dessert") {
      //add Dessert to preferences


    } else if (choice == "cuisines") {
      choice = cuisineOptions();
      std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){ return std::tolower(c); });

      
    } else if (choice == "none") {
      //if none, show user all restaurant options, default


    } else { //invalid respones

    }
  }
  
  return 0;
}
