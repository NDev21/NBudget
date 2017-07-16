#include <iostream>

#include "Budget_Menu.h"


//Default Constructor
Budget_Menu::Budget_Menu()
{
	
}

//Copy Constructor
Budget_Menu::Budget_Menu(const Budget_Menu& rhsBudgetMenu)
{

}

//Move Constructor
Budget_Menu::Budget_Menu(Budget_Menu&& rhsBudgetMenu)
{

}

//Destructor
Budget_Menu::~Budget_Menu()
{

}

//-----FUNCTIONS-----//
void	Budget_Menu::OpenBudgetMenu (void)
{
	std::cout << "Budget Menu" << std::endl;
}
