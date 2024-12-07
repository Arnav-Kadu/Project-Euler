#include <iostream>
#include <string>

class NumberToWords {
public:
    static std::string convertToWords(int n) {
        // Word arrays
        const std::string ones[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        const std::string tens[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
        const std::string teens[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        
        if (1 <= n && n <= 9) 
            return ones[n];
        
        if (10 <= n && n <= 19) 
            return teens[n - 10];
        
        if (20 <= n && n <= 99) {
            if (n % 10 == 0)
                return tens[n / 10];
            return tens[n / 10] + ones[n % 10];
        }
        
        if (100 <= n && n <= 999) {
            if (n % 100 == 0)
                return ones[n / 100] + "hundred";
            return ones[n / 100] + "hundredand" + convertToWords(n % 100);
        }
        
        if (n == 1000)
            return "onethousand";
        
        return "";
    }
    
    static int countLetters(const std::string& word) {
        int count = 0;
        for (char c : word) {
            if (std::isalpha(c)) 
                count++;
        }
        return count;
    }
    
    static int calculateTotalLetters() {
        int totalLetters = 0;
        for (int i = 1; i <= 1000; ++i) {
            totalLetters += countLetters(convertToWords(i));
        }
        return totalLetters;
    }
};

int main() {
    std::cout << "Total letters: " << NumberToWords::calculateTotalLetters() << std::endl;
    return 0;
}