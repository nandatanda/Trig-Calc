#include <iostream>

int main()
{
	double calc_side1 = 0;
	double calc_side2 = 0;
	double calc_side3 = 0;
	double calc_angle1 = 0;
	double calc_angle2 = 0;
	double calc_angle3 = 0;
	double calc_total = 0;
	double calc_sin = 0;
	bool func_checktri1 = true;
	bool func_checktri2 = true;

	//take the known dimensions of the triangle
	
	std::cout << "INPUTS\n\nSide 1:\n>";
	std::cin >> calc_side1;
	std::cout << "\nSide 2:\n>";
	std::cin >> calc_side2;
	std::cout << "\nSide 3:\n>";
	std::cin >> calc_side3;
	std::cout << "\nAngle 1:\n>";
	std::cin >> calc_angle1;
	std::cout << "\nAngle 2:\n>";
	std::cin >> calc_angle2;
	std::cout << "\nAngle 3:\n>";
	std::cin >> calc_angle3;
	std::cout << "\n" << calc_side1 << "\n" << calc_side2 << "\n" << calc_side3 << "\n" << calc_angle1 << "\n" << calc_angle2 << "\n" << calc_angle3;
	
	//check if this triangle exists
	
	if (calc_side1 != 0 && calc_side2 != 0 && calc_side3 != 0)
	{
		if ((calc_side1 + calc_side2 <= calc_side3) && (calc_side2 + calc_side3 <= calc_side1) && (calc_side3 + calc_side1 <= calc_side2))
		{
			func_checktri1 = false;
		}
	}
	else if (calc_angle1 != 0 && calc_angle2 !=0 && calc_angle3 != 0)
	{
		calc_total = (calc_angle1 + calc_angle2 + calc_angle3);
		if (calc_total != 180)
		{
			std::cout << "\nNo such triangle exists."
		}
	]
		

		
		
		
	return 0;
}

