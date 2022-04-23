#include <iostream> 
using namespace std; 
struct CandyBar
{
    string brand; float weight; int cal;
};

int main()
{
    CandyBar snack { "Mocha Munch", 2.3, 350 };
    cout << "Struct snack\n Brand name: " << snack.brand << "\n Weight: "
    
    << snack.weight << "\n Calories: " << snack.cal << std::endl;
    return 0;
}
