#include <iostream>
#include <string>

std::string addBinary(std::string a, std::string b) {
    std::string result = "";
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        carry = sum / 2;
        sum %= 2;
        result = std::to_string(sum) + result;
    }

    return result;
}

std::string twosComplement(std::string binary) {
    for (char &bit : binary) {
        bit = (bit == '0') ? '1' : '0';
    }
    return addBinary(binary, "1");
}

std::string boothsAlgorithm(std::string multiplier, std::string multiplicand) {
    int size = multiplier.size();
    std::string result = "0";
    std::string A = multiplier + std::string(size, '0');
    std::string S = twosComplement(multiplicand) + std::string(size, '0');

    for (int i = 0; i < size; ++i) {
        if ((A.substr(size + 1, 2) == "01" || A.substr(size + 1, 2) == "10")) {
            result = addBinary(result, S);
        }
        // Arithmetic right shift
        char signBit = A[0];
        A = signBit + A.substr(0, 2 * size);
        A = A.substr(0, size + 1) + signBit + A.substr(size + 1, size - 1);
    }

    return result;
}

int main() {
    std::string multiplier, multiplicand;

    // Get input from the user
    std::cout << "Enter the multiplier (in binary): ";
    std::cin >> multiplier;
    std::cout << "Enter the multiplicand (in binary): ";
    std::cin >> multiplicand;

    // Perform binary multiplication using Booth's algorithm
    std::string result = boothsAlgorithm(multiplier, multiplicand);

    // Display the result
    std::cout << "Result of multiplication: " << result << std::endl;

    return 0;
}
