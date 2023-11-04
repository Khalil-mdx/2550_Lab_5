#include <iostream>
#include <iomanip>

int main() {
    const int MAX_GRADES = 100;
    int grades[MAX_GRADES];
    int grade, count = 0, sum = 0;

    // Repeatedly ask for grades until -1 is entered or the array is full
    while (true) {
        std::cout << "Enter grade (or -1 to end): ";
        std::cin >> grade;

        // Check if the entered grade is -1 (to stop) or valid
        if (grade == -1) {
            break;
        } else if (grade >= 0 && grade <= 100) {
            // Store the grade in the array
            grades[count] = grade;
            sum += grade;
            count++;

            // Check if the maximum number of grades is reached
            if (count >= MAX_GRADES) {
                std::cout << "Maximum number of grades reached. Ending input." << std::endl;
                break;
            }
        } else {
            std::cout << "Invalid grade. Please enter a grade between 0 and 100." << std::endl;
        }
    }

    // Calculate and output the average if at least one grade is entered
    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        std::cout << "Average: " << std::fixed << std::setprecision(0) << average << std::endl;
    } else {
        std::cout << "No valid grades entered." << std::endl;
    }

    return 0;
}
