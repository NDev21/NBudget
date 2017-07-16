#ifndef BUDGET_MENU_H
#define BUDGET_MENU_H

#include <iostream>

class Budget_Menu
{
	public:
		//-----CONSTRUCTORS/DESTRUCTOR-----//		

		//Default Constructor
		Budget_Menu();
		
		//Primary Constructor
		//---> NOT YET DEFINED, DEFAULT CONSTRUCTOR SUFFICIENT FOR NOW
		
		//Copy Constructor
		Budget_Menu(const Budget_Menu& rhsBudgetMenu);

		//Move Constructor
		Budget_Menu(Budget_Menu&& rhsBudgetMenu);		
	
		//Destructor
		~Budget_Menu();
		
		//-----FUNCTIONS-----//
		void	OpenBudgetMenu		(void);

	private:
	
		//-----FUNCTIONS-----//
		
	

		//-----MEMBERS-----//

};
#endif
