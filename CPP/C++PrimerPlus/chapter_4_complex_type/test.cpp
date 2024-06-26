#include <iostream>
#include <cmath>
#include <cstring> //strlen
#include <string> // string class
#include <vector> // vector class
#include <array> // array class

void arry_test(void){
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    int yamcosts[3] = {20, 30, 5};

    std::cout << "Total yams = ";
    std::cout << yams[0] + yams[1] + yams[2] << std::endl;
    std::cout << "The package with " << yams[1] << " yams costs ";
    std::cout << yamcosts[1] << " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total += yams[2] * yamcosts[2];
    std::cout << "The total yam expense is " << total << " cents.\n";

    std::cout << "\nSize of yams arry = " << sizeof yams << " bytes.\n";
    std::cout << "Size of one element = " << sizeof yams[0] << " bytes.\n";
}

void string_test(void){
    const int Size = 15;
    char name1[Size];              // empty array
    char name2[Size] = "C++owboy"; // initialized array

    std::cout << "Howdy! I'm " << name2;
    std::cout << "! What's your name?\n";
    std::cin >> name1;
    std::cout << "Well, " << name1 << ", your name has ";
    std::cout << strlen(name1) << " letters and is stored\n";
    std::cout << "in an array of " << sizeof(name1) << " bytes.\n";
    std::cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    std::cout << "Here are the first 3 letters of my name: ";
    std::cout << name2 << std::endl;
}

void instr1(void){
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];

    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your favourite dessert: ";
    std::cin >> dessert;
    std::cout << "I have delicious " << dessert;
    std::cout << " for you " << name << ".\n";
}

void instr2(void){
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];

    std::cout << "Enter your name: ";
    std::cin.getline(name, Arsize);
    std::cout << "Enter your favourite dessert: ";
    std::cin.getline(dessert, Arsize);
    std::cout << "I have delicious " << dessert;
    std::cout << " for you " << name << ".\n";
}

void instr3(void){
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];

    std::cout << "Enter your name: ";
    std::cin.get(name, Arsize).get();
    std::cout << "Enter your favourite dessert: ";
    std::cin.get(dessert, Arsize).get();
    std::cout << "I have delicious " << dessert;
    std::cout << " for you " << name << ".\n";
}

void numstr(void){
    std::cout << "What year was your house built?\n";
    int year;
    (std::cin >> year).get();
    std::cout << "What's it street address?\n";
    char address[80];
    std::cin.getline(address, 90);
    std::cout << "Year built: " << year << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Done.\n";
}

void strtype1(void){
    // char[] and string almost same in usage
    char charr1[20];
    char charr2[20] = "jaguar";
    std::string str1;
    std::string str2 = "panther";

    std::cout << "Enter  a kind of feline: ";
    std::cin >> charr1;
    std::cout << "Enter another kind of feline: ";
    std::cin >> str1;
    std::cout << "Here are some felines:\n";
    std::cout << charr1 << " " << charr2 << " "
	      << str1 << " " << str2 << ".\n";
    std::cout << "The third letter in " << charr2 << " is "
	      << charr2[2] << ".\n";
    std::cout << "The third letter in " << str2 << " is "
	      << str2[2] << ".\n";
}

void strtype2(void){
    std::string s1 = "penguin";
    std::string s2, s3;

    std::cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    std::cout << "s1: " << s1 << ", s2: " << s2 << ".\n";
    std::cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    std::cout << "s2: " << s2 << ",\n";
    std::cout << "You can concatenate strings: s3 = s1 + s2.\n";
    s3 = s1 + s2;
    std::cout << "s3: " << s3 << ".\n";
    std::cout << "You can append strings: s1 += s2\n";
    s1 += s2;
    std::cout << "s1: " << s1 << ".\n";
    s2 += " for a day";
    std::cout << "s2 +=  \" for a day\" yields s2 = " << s2 << ".\n";
}

void strtype3(void){
    // string has easier ops
    char charr1[20];
    char charr2[20] = "jaguar";
    std::string str1;
    std::string str2 = "panther";

    str1 = str2;
    strcpy(charr1, charr2);

    str1 += " paste";
    strcat(charr1, " juice");

    int len1 = str1.size();
    int len2 = strlen(charr1);

    std::cout << "The string " << str1 << "contains "
	      << len1 << " characters.\n";
    std::cout << "The string " << charr1 << "contains "
	      << len2 << " characters.\n";
}

void strtype4(void){
    char charr[20];
    std::string str;

    std::cout << "Length of string in charr before input: "
	      << strlen(charr) << std::endl;
    std::cout << "Length of string in str before input: "
	      << str.size() << std::endl;
    std::cout << "Enter a line of text:\n";
    std::cin.getline(charr,20);
    std::cout << "You entered: " << charr << std::endl;
    std::cout << "Enter another line of text:\n";
    std::getline(std::cin,str); // This is different
    std::cout << "You entered: " << str << std::endl;
    std::cout << "Length of string in charr after input: "
	      << strlen(charr) << ".\n";
    std::cout << "Length of string in str after input: "
	      << str.size() << ".\n";
}

// chapter 4.4 struct
void structure(void){
    struct inflatable
    {
	char name[20];
	float volume;
	double price;
    };
    inflatable guest ={"Glorious Gloria", 1.88, 29.99};
    inflatable pal = {"Audacious Arthur", 3.12, 32.99};

    std::cout << "Expand your guest list with " << guest.name
	      << " and " << pal.name << ".\n";
    std::cout << "You can have both for $"
	      << guest.price + pal.price << "!\n";
}

void assgn_st(void){
    struct inflatable{
	char name[20];
	float volume;
	double price;
    };

    inflatable bouquet = {"sunflowers", 0.20, 12.49};
    inflatable choice;
    std::cout << "bouquet: " << bouquet.name << " for $"
	      << bouquet.price << ".\n";
    choice = bouquet;
    std::cout << "choice: " << choice.name << " for $"
	      << choice.price << ".\n";
}

void arrstruc(void){
    struct inflatable{
	char name[20];
	float volume;
	double price;
    };

    inflatable guests[2] = {
	{"Bambi", 0.5, 21.99},
	{"Godzilla", 2000, 565.99}};
    std::cout << "The guests " << guests[0].name << " and "
	      << guests[1].name << "\nhave a combined volume of "
	      << guests[0].volume + guests[1].volume
	      << " cubic feet.\n";
}

void address_test(void){
    int donuts = 6;
    double cups = 4.5;

    std::cout << "donuts value = " << donuts
	      << " and donuts address = " << &donuts << std::endl;
    std::cout << "cups value = " << cups
	      << " and cups address = " << &cups << std::endl;
}

void pointer_test(void){
    int updates = 6;
    int* p_updates;
    p_updates = &updates;

    std::cout << "Values: updates = " << updates
	      << ", *p_updates = " << *p_updates << std::endl;
    std::cout << "Address: &updates = " << &updates
	      << ", p_updates = " << p_updates
	      << ", &p_updates = " << &p_updates << std::endl;
    *p_updates += 1;
    std::cout << "*p_updates += 1, now update = " << updates << std::endl;
}

void init_ptr(void){
    int higgens = 5;
    int* pt = &higgens;

    std::cout << "Value of higgens = " << higgens
	      << "; Address of higgens = " << &higgens << ".\n";
    std::cout << "Value of *pt = " << *pt
	      << "; Value of pt = " << pt << ".\n";
}

void use_new(void){
    int nights = 1001;
    int* pt = new int;
    *pt = 1001;

    std::cout << "nights value = " << nights << " : location = "
	      << &nights << ".\n";
    std::cout << "int value = " << *pt << " : location = "
	      << pt << ".\n";

    double* pd = new double;
    *pd = 10000001.0;

    std::cout << "double value = " << *pd << " :location = "
	      << pd << ".\n";
    std::cout << "location of pointer pd = " << &pd << ".\n";
    std::cout << "size of pt = " << sizeof(pt)
	      << "; size of *pt = " << sizeof(*pt) << ".\n";
    std::cout << "size of pd = " << sizeof(pd)
	      << "; size of *pd = " << sizeof(*pd)<< ".\n";
}

void arraynew(void){
    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    std::cout << "p3[1] = " << p3[1] << ".\n";
    p3 += 1;
    std::cout << "p3 += 1; now p3[0] = " << p3[0] << " and "
	 << "p3[1] = " << p3[1] << ".\n";
    p3 -= 1;
    delete [] p3;
}

void addpntrs(void){
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    double* pw = wages;
    short* ps = &stacks[0]; // &stacks[0] == stacks

    std::cout << "pw = " << pw << ", *pw = " << *pw << ".\n";
    pw += 1;
    std::cout << "pw += 1; now pw = " << pw << ", *pw = " << *pw << ".\n\n";

    std::cout << "ps = " << ps << ", *ps = " << *ps << ".\n";
    ps += 1;
    std::cout << "ps += 1; now ps = " << ps << ", *ps = " << *ps << ".\n\n";

    std::cout << "access two elements with array notation\n"
	      << "stacks[0] = " << stacks[0]
	      << ", stacks[1] = " << stacks[1] << ".\n";
    std::cout << "access two elements with array notation\n"
	      << "*stacks = " << *stacks
	      << ", *(stacks + 1) = " << *(stacks + 1) << ".\n";

    std::cout << sizeof(wages) << " = size of wages array\n"
	      << sizeof(pw) << " = size of pw pointer\n";
}

void mixtypes(void){
    struct antarctica_years_end{
	int year;
	// other data
    };

    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end* pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3];
    trio[0].year = 2003;

    std::cout << "trio->year = " << trio->year << ".\n";
    const antarctica_years_end* arp[3] = {&s01, &s02, &s03};
    std::cout << "arp[1]->year = " << arp[1]->year << ".\n";
    const antarctica_years_end** ppa = arp;
    auto ppb = arp; // equal to last
    std::cout << "(*ppa)->year = " << (*ppa)->year << ".\n"
	      << "(*(ppb+1))->year = " << (*(ppb+1))->year << ".\n";
}

void choices(void){
    // C style
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
    // C++98 STL vector
    std::vector<double> a2(4);
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
    // C++11 array
    std::array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    std::array<double, 4> a4;
    a4 = a3; // valid if same size

    std::cout << "a1[2] = " << a1[2] << " at " << &a1[2] << ".\n"
	      << "a2[2] = " << a2[2] << " at " << &a2[2] << ".\n"
	      << "a3[2] = " << a3[2] << " at " << &a3[2] << ".\n"
	      << "a4[2] = " << a4[2] << " at " << &a4[2] << ".\n";

    std::cout << "\nset a1[-2] = 20.2\n";
    a1[-2] = 20.2; // over array scale
    std::cout << "a1[-2] = " << a1[-2] << " at " << &a1[-2] << ".\n"
	      << "a3[2] = " << a3[2] << " at " << &a3[2] << ".\n"
	      << "a4[2] = " << a4[2] << " at " << &a4[2] << ".\n";
}

int main(void)
{
    choices();
    return 0;
}
