#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{
bool sick = true;
bool hungry = false;

//Binary AND : & 
if(sick&hungry){
    std::cout << "Drink some soup and rest. You're sick and hungry." << std::endl;
}
std::cout << std::endl;
std::cout << "----------------------------------" << std::endl;

//Binary OR : |
if(sick|hungry){
    std::cout << "Eat and have some rest, you're sick or hungry." << std::endl;
}
std::cout << std::endl;
std::cout << "----------------------------------" << std::endl;

//Binary XOR : ^ 
if(hungry^!sick){
    std::cout << "Go out and play since you're well." << std::endl;
}
std::cout << std::endl;
std::cout << "----------------------------------" << std::endl;

//Binary One's complement : ~  //Problem here in the if statement
if(~(sick|hungry)){
    std::cout << std::bitset<3>(~(sick|hungry)) << std::endl;
    std::cout << "You're sick. But I don't care." << std::endl;
}
std::cout << std::endl;
std::cout << "----------------------------------" << std::endl;

//Binary left shift : << 
//moves the number one space to the left in binary
//5<<3 == one, 5*2 then two, 10*2 then finally three, 20*2 == 40
//Basically doubles the number by the amount of shifts
int num {5};
std::cout << num << std::endl;
std::cout << (num << 3) << std::endl;
std::cout << std::endl;

//Binary right shift : >>
//moves the number one space to the right in binary
//40>>3 == one, 40/2 then two, 20/2 then finally three, 10/2 == 5
//Basically halves the number by the amount of shifts
num = 40;
std::cout << num << std::endl;
std::cout << (num >> 3) << std::endl;
std::cout << std::endl;
std::cout << "----------------------------------" << std::endl;

//Compound bitwise operators
const int COLUMN_WIDTH {20};
std::cout << std::endl;

std::cout << "Compound bitwise assignment operators" << std::endl;

unsigned char sandbox_var {0b00110100};     //8 bits : positive numbers only
std::cout << std::endl;

//Print out initial value
std::cout << "Initial value : " << std::endl;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;

//Compound left shift
std::cout << "Shift left 2 bit positions in place : " << std::endl;
sandbox_var <<= 2;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;

//Compound right shift
std::cout << "Shift right 2 bit positions in place : " << std::endl;
sandbox_var >>= 2;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;

//Compound OR with 0000 1111 to have all lower 4 bits turned on
std::cout << "Compound OR with 0000 1111 : " << std::endl;
sandbox_var |= 0b00001111;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;

//Compound AND with 0000 1100 to turn off the 2 lowest  bits
std::cout << "Compound AND with 0000 1100 : " << std::endl;
sandbox_var &= 0b00000000;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;

////Compound XOR with 0000 0011 to turn on the 4 lowest  bits again
std::cout << "Compound XOR with 0000 0011 : " << std::endl;
sandbox_var ^= 0b00000011;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;


return 0;
}