#include <iostream>
#include <string>

//the case of repetitions is not taken into account

int hashing(const std::string& name)
{
    int i = 0;
    int sum = 0;
    while(name[i] != '\0')
    {
        sum += name[i];
        i++;
    }
    return sum;
}

int main(){
    int num;
    const int N = 10000;
    double arr[N] = {};
    std::cout << "How many students do you have?\n";
    std::cin >> num;
    std::string name;
    double gpa;
    while(num--){
        std::cout << "Name: ";
        std::cin.ignore();
        getline(std::cin, name);
        std::cout << "GPA: ";
        std::cin >> gpa;
        int hash = hashing(name);
        arr[hash] = gpa;
        std::cout << hash << " " << arr[hash] << std::endl;
    }
    return 0;
}