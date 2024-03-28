#include <iostream>
#include <string>
#include <cstring>
#include <array>

void exercise_1(void){
    struct student{
	char cf_name[30];
	char cl_name[30];
	char grade;
	int age;
    };
    struct student* pstudent = new student;

    std::cout << "What is your first name? ";
    std::cin.getline(pstudent->cf_name,30);
    std::cout << "What is your last name? ";
    std::cin.getline(pstudent->cl_name,30);
    std::cout << "What letter grade do you deserve? ";
    std::cin >> pstudent->grade;
    std::cout << "What is your age? ";
    std::cin >> pstudent->age;
    std::cout << "================================>\n"
	      << "Name: " << pstudent->cl_name << ", "
	      << pstudent->cf_name << "\n"
	      << "Grade: " << char (pstudent->grade + 1) << "\n"
	      << "Age: " << pstudent->age << "\n";
}

void exercise_2(void){
    struct student{
	std::string sf_name;
	std::string sl_name;
	char grade;
	int age;
    };
    struct student* pstudent = new student;

    std::cout << "What is your first name? ";
    std::getline(std::cin,pstudent->sf_name);
    std::cout << "What is your last name? ";
    std::getline(std::cin,pstudent->sl_name);
    std::cout << "What letter grade do you deserve? ";
    std::cin >> pstudent->grade;
    std::cout << "What is your age? ";
    std::cin >> pstudent->age;
    std::cout << "================================>\n"
	      << "Name: " << pstudent->sl_name << ", "
	      << pstudent->sf_name << "\n"
	      << "Grade: " << char (pstudent->grade + 1) << "\n"
	      << "Age: " << pstudent->age << "\n";
}

void exercise_3(void){
    char cf_name[30],cl_name[30], strname[60];

    std::cout << "Enter your first name: ";
    std::cin.getline(cf_name, 30);
    std::cout << "Enter your last name: ";
    std::cin.getline(cl_name, 30);

    strcpy(strname, cl_name);
    strcat(strname, ", ");
    strcat(strname, cf_name);
    
    std::cout << "Here's the information in a single string: "
	      << strname << ".\n";
}

void exercise_4(void){
    std::string sf_name, sl_name, sfullname;
    std::cout << "Enter your first name: ";
    std::getline(std::cin, sf_name);
    std::cout << "Enter your first name: ";
    std::getline(std::cin, sl_name);

    sfullname = sl_name + ", " + sf_name;
    std::cout << "Here's the information in a single string: "
	      << sfullname << ".\n";
}

void exercise_5(void){
    struct CandyBar{
	std::string brand;
	float weight;
	int calory;
    };

    struct CandyBar snack = {"Mocha Munch", 2.3, 350};

    std::cout << "snack has:\n"
	      << "Brand: " << snack.brand
	      << "\nWeight: " << snack.weight
	      << "\nCalory: " << snack.calory
	      << std::endl;
}

void exercise_6(void){
    struct CandyBar{
	std::string brand;
	float weight;
	int calory;
    };

    struct CandyBar snack[3] =
	{{"Mocha Munch 1", 2.3, 350},
	 {"Mocha Munch 2", 2.3, 350},
	 {"Mocha Munch 3", 2.3, 350}};
    for (int i = 0; i < 3; ++i) {
	std::cout << "snack[" << i + 1 << "] has:\n"
	      << "Brand: " << snack[i].brand
	      << "\nWeight: " << snack[i].weight
	      << "\nCalory: " << snack[i].calory
	      << std::endl;
    }
}

void exercise_7(void){
    struct piza{
	std::string brand;
	float caliber;
	float weight;
    };

    struct piza data;
    std::cout << "Please enter the piza brand: ";
    std::getline(std::cin, data.brand);
    std::cout << "Please enter the caliber of piza: ";
    std::cin >> data.caliber;
    std::cout << "Please enter the weight of piza: ";
    std::cin >> data.weight;

    std::cout << "Here's the information:\n"
	      << "Brand: " << data.brand
	      << "\nCaliber: " << data.caliber
	      << "\nWeight: " << data.weight
	      << std::endl;
}

void exercise_8(void){
    struct piza{
	std::string brand;
	float caliber;
	float weight;
    };

    struct piza* pdata = new piza;
    std::cout << "Please enter the piza brand: ";
    std::getline(std::cin, pdata->brand);
    std::cout << "Please enter the weight of piza: ";
    std::cin >> pdata->weight;
    std::cout << "Please enter the caliber of piza: ";
    std::cin >> pdata->caliber;

    std::cout << "Here's the information:\n"
	      << "Brand: " << pdata->brand
	      << "\nCaliber: " << pdata->caliber
	      << "\nWeight: " << pdata->weight
	      << std::endl;

}

void exercise_9(void){
    struct CandyBar{
	std::string brand;
	float weight;
	int calory;
    };

    struct CandyBar* psnack = new CandyBar[3];
    *psnack = {"Mocha Munch 1", 2.3, 350};
    *(psnack + 1) = {"Mocha Munch 2", 2.3, 350};
    *(psnack + 2) = {"Mocha Munch 3", 2.3, 350};
    for (int i = 0; i < 3; ++i) {
	std::cout << "snack[" << i + 1 << "] has:\n"
		  << "Brand: " << (psnack + i)->brand
		  << "\nWeight: " << (psnack + i)->weight
		  << "\nCalory: " << (psnack + i)->calory
	      << std::endl;
    }
    delete [] psnack;
}

void exercise_10(void){
    std::array<float, 3> artime;

    std::cout << "Please enter your first result in 40m: ";
    std::cin >> artime[0];
    std::cout << "Please enter your second result in 40m: ";
    std::cin >> artime[1];
    std::cout << "Please enter your third result in 40m: ";
    std::cin >> artime[2];

    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n"
	      << "Your result: " << artime[0] << ", "
	      << artime[1] << ", " << artime[2] << ". "
	      << "average time: "
	      << (artime[0] + artime[1] + artime[2]) / 3
	      << ".\n";
}

int main(void){
    exercise_10();
    return 0;
}
