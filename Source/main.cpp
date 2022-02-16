#include<iostream>
#include<cctype>
#include<random>
#include<bitset>


int main(){
    //random number generation setup
    std::random_device os_seed;
    const uint_least32_t seed = os_seed();

    std::mt19937 generator(seed);
    std::uniform_int_distribution<uint_least32_t> distribute(0,256);

//variables for trainer
int Anwser = 0, AskedNumber = 0;
std::cout << "Binary to decimal trainer for one unsigned byte. Input 257 to exit\n";
//loop
while(Anwser != 257){
AskedNumber = distribute(generator);
std::cout << "Give the decimal for: " << std::bitset<8>(AskedNumber) << std::endl;;
std::cin >> Anwser;
if(Anwser != 257){
if(Anwser == AskedNumber){
    std::cout << "Correct\n";
}
else{std::cout << "Incorrect it was " << AskedNumber << std::endl;}
}
}
    return 0;
}