#include <iostream>
#include <cmath>

int main()
{
	int menu_selection = 0;
	int side_count = 0;
	int solve_for = 0;
	double leg_a = 0;
	double leg_b = 0;
	double hyp_c = 0;
	double angle_a = 0;
	double angle_b = 0;
	double angle_c = 0;
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

		if (menu_selection == 1) // This block solves a side using two sides.
		{
			std::cout << "\n\nName\t\tValue\t\t(enter '0' if unknown)\n\nLeg 'a'\t\t>";
			std::cin >> leg_a;
			std::cout << "\nLeg 'b'\t\t>";
			std::cin >> leg_b;
			std::cout << "\nHypnotenuse\t>";
			std::cin >> hyp_c;

			((leg_a == 0) ? solve_for = 1 : side_count++);
			((leg_b == 0) ? solve_for = 2 : side_count++);
			((hyp_c == 0) ? solve_for = 3 : side_count++);

			if (side_count == 3)
			{
				std::cout << "\nThere are no unknown sides. Try again.\n";
			}
			else if (side_count == 1)
			{
				std::cout << "\nThere are too many unknown sides. Try a different solving method.";
			}
			else // We do the math to solve the side here.
			{
				if (solve_for == 1)
				{
					leg_a = sqrt((hyp_c * hyp_c) - (leg_b * leg_b));
					std::cout << "\n\nThe length of leg 'a' is " << leg_a << ".\n\n";
				}
				else if (solve_for == 2)
				{
					leg_b = sqrt((hyp_c * hyp_c) - (leg_a * leg_a));
					std::cout << "\n\nThe length of leg 'b' is " << leg_b << ".\n\n";
				}
				else if (solve_for == 3)
				{
					hyp_c = sqrt((leg_a * leg_a) + (leg_b * leg_b));
					std::cout << "\n\nThe length of the hypotenuse is " << hyp_c << ".\n\n";
				}
			}	
		}	
		else if (menu_selection == 2) // This block solves a side using an angle and a another side.
		{
			std::cout << "\n\nRatio:\n\n[1] Sine Ratio\t\t\t(we know an angle, the opposite side, and the hypotenuse)\n\n[2] Cosine Ratio\t\t(we know an angle, the adjacent side, and the hypotenuse)\n\n[3] Tangent Ratio\t\t(we know an angle, the adjacent side, and the opposite)\n\n>";
			std::cin >> menu_selection;

			if (menu_selection == 1) // We solve with sine here.
			{
				std::cout << "\n\nName\t\tValue\t\t(enter '0' if unknown)\n\nAngle\t\t>";
				std::cin >>angle_a;
				std::cout << "\nOpposite\t\t>";
				std::cin >> leg_b;
				std::cout << "\nHypnotenuse\t>";
				std::cin >> hyp_c;

			}

		}
	}
	
	return 0;
}