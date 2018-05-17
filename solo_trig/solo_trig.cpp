#include <iostream>
#include <cmath>

int main()
{
	int menu_selection = 0;
	int side_count = 0;
	int solve_for = 0;
	double side_lega = 0;
	double side_legb = 0;
	double side_hypo = 0;
	double calc_angle1 = 0;
	double calc_angle2 = 0;
	double calc_angle3 = 0;
	double calc_total = 0;
	double calc_sin = 0;
	bool check_triangle1 = true;
	bool check_triangle2 = true;

	std::cout << "TRIG: THE SEQUEL\n\n\nSolve:\n\n[1] Side\n\n[2] Angle\n\n>";
	std::cin >> menu_selection;

	if (menu_selection == 1)
	{
		std::cout << "\n\nSolve Using:\n\n[1] Pythagoras' Theorem\t\t(we know the other two sides)\n\n[2] Trig Ratios\t\t\t(we know an angle and a side)\n\n>";
		std::cin >> menu_selection;
		
		if (menu_selection == 1)
		{
			std::cout << "\n\nSide Wizard:\t\t\t(enter '0' if unknown)\n\nLeg 'a'\t\t>";
			std::cin >> side_lega;
			std::cout << "\nLeg 'b'\t\t>";
			std::cin >> side_legb;
			std::cout << "\nHypnotenuse\t>";
			std::cin >> side_hypo;

			((side_lega == 0) ? solve_for = 1 : side_count++);
			((side_legb == 0) ? solve_for = 2 : side_count++);
			((side_hypo == 0) ? solve_for = 3 : side_count++);

			if (side_count == 3)
			{
				std::cout << "\nThere are no unknown sides. Try again.\n";
			}
			else if (side_count == 1)
			{
				std::cout << "\nThere are too many unknown sides. Try a different solving method.";
			}
			else
			{
				if (solve_for == 1)
				{
					side_lega = sqrt((side_hypo * side_hypo) - (side_legb * side_legb));
					std::cout << "\n\nThe length of the unknown side is " << side_lega << ".\n\n";
				}
			}
		}
		
		menu_selection = 1;
	}

	return 0;
}