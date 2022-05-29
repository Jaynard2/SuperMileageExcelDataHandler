#include <iostream>
#include <xlnt/xlnt.hpp>

int main(int argc, char** args)
{
	try
	{
		xlnt::workbook wb(xlnt::path("./2022 Simulation.xlsx"));
		xlnt::worksheet ws = wb.sheet_by_index(0);

		std::cout << ws.cell("A4").value<float>() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
