#include <iostream>
#include <filesystem>
#include <fstream>

int main()
{
	std::system("taskkill /im \"Among Us.exe\" /t /f 2>NUL");

	try {
		std::ofstream file(std::filesystem::temp_directory_path().parent_path().parent_path().parent_path() / "LocalLow/Innersloth/Among Us/regionInfo.json");
		file << R"({"CurrentRegionIdx":3,"Regions":[{"$type":"DnsRegionInfo, Assembly-CSharp","Fqdn":"na.mm.among.us","DefaultIp":"50.116.1.42","Port":22023,"Name":"North America","TranslateName":289},{"$type":"DnsRegionInfo, Assembly-CSharp","Fqdn":"eu.mm.among.us","DefaultIp":"172.105.251.170","Port":22023,"Name":"Europe","TranslateName":290},{"$type":"DnsRegionInfo, Assembly-CSharp","Fqdn":"as.mm.among.us","DefaultIp":"139.162.111.196","Port":22023,"Name":"Asia","TranslateName":291}]})";
		file.close();
	} catch (const std::ios_base::failure& fail) {
		std::cerr << "Nie udało się usunąć regionu Reverse.Community." << std::endl;
        std::cerr << fail.what() << std::endl;
		std::cout << "Naciśnij Enter, aby wyjść z programu." << std::endl;
		std::cin.get();
		std::exit(1);
    }

	std::cout << "Region Reverse.Community został pomyślnie usunięty." << std::endl;
	std::cout << "Naciśnij Enter, aby wyjść z programu." << std::endl;
	std::cin.get();
}