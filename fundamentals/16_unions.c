
// Largest type is allocated in memory
// So 8 bytes is allocated for this structure
union personalInfo {
    char* lastName;
    char* firstName;
    double age;
};

int main() {
    return 0;
}