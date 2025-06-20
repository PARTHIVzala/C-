#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Student {
public:
    int id;
    std::string name;

    Student() = default;

    Student(int id, std::string name) {
        this->id = id;
        this->name = name;
    }
};

class MemoryCalculate {
private:
    std::vector<Student> students;

public:
    void addStudent(int id, std::string name) {
        students.push_back(Student(id, name));
        std::cout << "Student added successfully.\n";
    }

    void displayAll() const {
        if (students.empty()) {
            std::cout << "No students available.\n";
            return;
        }

        std::cout << "Student List:\n";
        for (const auto& student : students) {
            std::cout << "ID: " << student.id << ", Name: " << student.name << std::endl;
        }
    }

    void searchById(int id) const {
        for (const auto& student : students) {
            if (student.id == id) {
                std::cout << "Student Found: ID: " << student.id << ", Name: " << student.name << std::endl;
                return;
            }
        }
        std::cout << "Student with ID " << id << " not found.\n";
    }

    void removeById(int id) {
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->id == id) {
                students.erase(it);
                std::cout << "Student with ID " << id << " removed successfully.\n";
                return;
            }
        }
        std::cout << "Student with ID " << id << " not found.\n";
    }
};

int main() {
    MemoryCalculate memory;

    memory.addStudent(1, "KHUSHI");
    memory.addStudent(2, "NISHA");
    memory.addStudent(3, "HEMALI");

    memory.displayAll();

    std::cout << "\nSearching for student with ID 2:\n";
    memory.searchById(2);

    std::cout << "\nRemoving student with ID 1:\n";
    memory.removeById(1);

    std::cout << "\nUpdated student list:\n";
    memory.displayAll();

    return 0;
}