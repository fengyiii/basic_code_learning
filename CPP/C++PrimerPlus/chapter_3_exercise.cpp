#include <iostream>
#include <cmath>

/**
 * 1.编写一个小程序，要求用户使用一个整数指出自己的身高（单
 * 位为英寸），然后将身高转换为英尺和英寸。该程序使用下划线字符来
 * 指示输入位置。另外，使用一个const符号常量来表示转换因子。
*/
void height_convert(void){
    const float meter2foot = 6.5617;
    const float meter2inch = 78.7402 ;
    float height;
    std::cout << "Please enter your height : ______(m)\b\b\b\b\b\b\b\b";
    std::cin >> height;
    std::putchar('\n');
    std::cout << "Your height is " << height << " m";
    std::cout << " = " << height * meter2foot << " foot";
    std::cout << " = " << height * meter2inch << " inch.\n";

}

/**
 * 2．编写一个小程序，要求以几英尺几英寸的方式输入其身高，并
 * 以磅为单位输入其体重。（使用3个变量来存储这些信息。）该程序报
 * 告其BMI（Body Mass Index，体重指数）。为了计算BMI，该程序以英
 * 寸的方式指出用户的身高（1英尺为12英寸），并将以英寸为单位的身
 * 高转换为以米为单位的身高（1英寸=0.0254米）。然后，将以磅为单位
 * 的体重转换为以千克为单位的体重（1千克=2.2磅）。最后，计算相应
 * 的BMI—体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。
*/
void bmi_calculate(void){
    const float foot2inch = 12;
    const float inch2meter = 0.0254;
    const float lb2kg = 0.453592;
    float foot, inch, pound, height, weight, bmi;

    std::cout << "Please enter your height:\n___(foot)\b\b\b\b\b\b\b\b";
    std::cin >> foot;
    std::cout << "\n___(inch)\b\b\b\b\b\b\b\b";
    std::cin >> inch;
    std::cout << "\nPlease enter your weight:_____(lb)\b\b\b\b\b\b\b\b";
    std::cin >> pound;
    height = inch + foot * foot2inch;
    std::cout << "\nYour height is " << height << " inch";
    height *= inch2meter;
    std::cout << " = " << height << " m\n";
    weight = pound * lb2kg;
    std::cout << "Your weight is " << weight << " kg\n";
    bmi = weight / height / height;
    std::cout << "Your BMI is " << bmi << std::endl;
}

/**
 * 3．编写一个程序，要求用户以度、分、秒的方式输入一个纬度，
 * 然后以度为单位显示该纬度。1度为60分，1分等于60秒，请以符号常量
 * 的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。
 * 下面是该程序运行时的情况：
 * Enter a latitude in degree, minutes,  and seconds:
 * First, enter the degrees: 37
 * Next, enter the minutes of arc: 51
 * Finally, enter the seconds of arc: 19
 * 37 degrees, 51 minutes, 19seconds = 37.8553 degrees
*/
void degree_cal(void){
    const int d2m = 60;
    const int m2s = 60;
    int degrees, minutes, seconds;
    float result;

    std::cout << "Enter a latitude in degree, minutes,  and seconds:\n";
    std::cout << "First, enter the degrees: ";
    std::cin >> degrees;
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> minutes;
    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> seconds;
    std::cout << degrees << "degrees. " << minutes << " minutes, ";
    std::cout << seconds << " seconds = ";
    result = degrees + (float)minutes/m2s + (float)seconds/m2s/d2m;
    std::cout << result << " degrees\n";
}

/**
 * 4．编写一个程序，要求用户以整数方式输入秒数（使用long或long
 * long变量存储），然后以天、小时、分钟和秒的方式显示这段时间。使
 * 用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多
 * 少秒。该程序的输出应与下面类似：
 * Enter the number of seconds: 31600000
 * 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/
void time_cal(void){
    long long llseconds;
    int idays, ihours, iminutes, iseconds;

    std::cout << "Enter the number of seconds: ";
    std::cin >> llseconds;
    std::cout << llseconds << "seconds = ";
    iseconds = llseconds % 60;
    llseconds /= 60;
    iminutes = llseconds % 60;
    llseconds /= 60;
    ihours = llseconds % 60;
    llseconds /= 24;
    idays = llseconds;
    std::cout << idays << " days, " << ihours << " hours, ";
    std::cout << iminutes << " minutes, " << iseconds << " seconds\n";
}

/**
 * 5．编写一个程序，要求用户输入全球当前的人口和美国当前的人
 * 口（或其他国家的人口）。将这些信息存储在long long变量中，并让程
 * 序显示美国（或其他国家）的人口占全球人口的百分比。该程序的输出应与下面类似：
 * Enter the world's population: 6898758899
 * Enter the population of the US: 310783781
 * The population of the US is 4.50492% of the world population.
*/
void population_cal(void){
    long long llworld_popu, llus_popu;
    float frate;

    std::cout << "Enter the world's population: ";
    std::cin >> llworld_popu;
    std::cout << "Enter the population of the US:";
    std::cin >> llus_popu;
    frate = (double)llus_popu / llworld_popu * 100;
    std::cout << "The population of the US is " << frate << "% of the world population.\n";
}

/**
 * 6．编写一个程序，要求用户输入驱车里程（英里）和使用汽油量
 * （加仑），然后指出汽车耗油量为一加仑的里程。如果愿意，也可以让
 * 程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，然后
 * 指出欧洲风格的结果—即每100公里的耗油量（升）。
*/
void gasoline_cal(void){
    short choice;
    float fmileage, fgas_cons, frate;
    std::string smile, sgas;

    std::cout << "1. miles & gallon 2. liter & kilometer.\nPlease select your style : ";
    std::cin >> choice;
    switch (choice){
    case 1:
        smile = "miles";
        sgas = "gallon";
        break;
    case 2:
        smile = "kilometer";
        sgas = "liter";
        break;
    default:
        std::cout << "Wrong Input.Default choice is 1. miles & gallon.\n";
        smile = "miles";
        sgas = "gallon";
        break;
    }

    std::cout << "Enter your automobile gas mileage in " << smile << ", " << sgas << '\n';
    std::cout << "Enter your mileage:";
    std::cin >> fmileage;
    std::cout << "Enter your fuel consumption:";
    std::cin >> fgas_cons;
    frate = fmileage / fgas_cons;
    std::cout << "You can drive " << frate << " " << smile << " per " << sgas << '\n';
}

/**
 * 7．编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100
 * 公里消耗的汽油量（升）），然后将其转换为美国风格的耗油量—每加
 * 仑多少英里。注意，除了使用不同的单位计量外，美国方法（距离/燃
 * 料）与欧洲方法（燃料/距离）相反。100公里等于62.14英里，1加仑等
 * 于3.875升。因此，19mpg大约合12.4l/100km，l27mpg大约合8.71/100km。
*/
void fuel_consumption_style_convert(){
    double flp100km, fmpg;

    std::cout << "Please enter your fuel consumption in european style (liters/100km): ";
    std::cin >> flp100km;
    fmpg = flp100km * 3.875 * 62.14 ;
    std::cout << "In US style(miles/gallon), your fuel consumption is " << fmpg;
    std::putchar('\n');
}

int main(void){

    return 0;
}