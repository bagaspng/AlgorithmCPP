# ⚡ Algorithm CPP - C++ Programming & Algorithms Collection

> Koleksi lengkap implementasi algoritma, struktur data, dan program C++ untuk pembelajaran programming dan competitive programming

[![C++](https://img.shields.io/badge/C++-100%25-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)](https://github.com/bagaspng/AlgorithmCPP)
[![Standard](https://img.shields.io/badge/C++%20Standard-11/14/17-blue?style=flat-square&logo=cplusplus&logoColor=white)](https://github.com/bagaspng/AlgorithmCPP)
[![Algorithms](https://img.shields.io/badge/Category-Algorithms-success?style=flat-square&logo=algolia&logoColor=white)](https://github.com/bagaspng/AlgorithmCPP)

## 📋 Deskripsi

AlgorithmCPP adalah repositori pembelajaran dan referensi yang berisi implementasi berbagai algoritma fundamental, struktur data, dan program utilitas dalam bahasa C++.  Repositori ini dirancang untuk membantu pembelajaran programming, persiapan competitive programming, dan sebagai referensi implementasi algoritma klasik.

## ✨ Kategori Program

### 🧮 **Basic Programming Concepts**
- 📁 **File I/O Operations** - Operasi baca/tulis file
- 📊 **Array Processing** - Manipulasi dan pengolahan array
- 🔄 **Loop Constructs** - While loops, For loops
- ⚙️ **Data Operations** - Mathematical calculations & operators

### 🎯 **Algorithm Implementations**

#### 🔢 **Mathematical Algorithms**
- 🌀 **Fibonacci Sequence** - Recursive & iterative implementations
- 🔺 **Prime Number Detection** - Optimized primality testing
- 📈 **Mathematical Series** - Various numerical sequences
- 📊 **Statistical Operations** - Min/Max, Mean, Mode calculations

#### 🎨 **Pattern & Graphics Algorithms**
- 🏔️ **Pyramid Patterns** - ASCII art generation
- 💎 **Diamond Shapes** - Geometric pattern printing
- 🪜 **Staircase Patterns** - Step-by-step pattern generation

#### 📐 **Matrix & Array Algorithms**
- ↗️ **Diagonal Difference** - Matrix diagonal calculations
- 🔢 **Min-Max Sum** - Array element sum optimizations
- 📊 **Array Statistics** - Comprehensive array analysis

### 🧰 **Utility Applications**

#### 🧮 **Calculator Applications**
- 🔢 **Basic Calculator** - Four fundamental operations
- 🔬 **Scientific Calculator** - Advanced mathematical functions
- 💻 **GUI Calculator** - Enhanced user interface

#### 🎮 **Interactive Programs**
- 🎲 **Random Number Generator** - Pseudorandom number generation
- 🕰️ **Time Conversion** - AM/PM time format conversion
- 🎯 **Problem Solving** - Competitive programming challenges

## 🚀 Instalasi & Setup

### 📦 **Prerequisites**

```bash
# C++ Compiler (pilih salah satu)
# GCC (Linux/Windows dengan MinGW)
g++ --version

# Microsoft Visual C++ (Windows)
cl.exe

# Clang (macOS/Linux)
clang++ --version
```


### 📥 **Clone Repository**

```bash
git clone https://github.com/bagaspng/AlgorithmCPP.git
cd AlgorithmCPP
```

## 🎮 Cara Menggunakan

### 📁 **Directory Structure & Usage**

```
AlgorithmCPP/
│
├── 📂 Root Level/              # Basic C++ programs
│   ├── 📄 array. cpp           # Array operations
│   ├── 📄 aksesFile.cpp       # File I/O operations  
│   ├── 📄 dataOperator.cpp    # Mathematical calculations
│   └── 📄 loop*. cpp          # Loop demonstrations
│
├── 📂 Belajar-cpp/            # Advanced algorithms & applications
│   ├── 🧮 Calculator Programs
│   │   ├── 📄 kalkulator-sederhana.cpp
│   │   ├── 📄 kalkulatorgksederhana.cpp
│   │   └── 📄 tampilan kalkulator.cpp
│   │
│   ├── 🔢 Mathematical Algorithms
│   │   ├── 📄 fibonacchi.cpp
│   │   ├── 📄 agak prima.cpp
│   │   └── 📄 ROMAWI.cpp
│   │
│   ├── 📊 Array & Matrix Algorithms
│   │   ├── 📄 diagonaldifference.cpp
│   │   ├── 📄 minimaxsum.cpp
│   │   └── 📄 modus. cpp
│   │
│   ├── 🎨 Pattern Programs
│   │   ├── 📄 piramid.cpp
│   │   ├── 📄 belah ketupat.cpp
│   │   └── 📄 staircase.cpp
│   │
│   └── 📂 strukturData/       # Data structure implementations
│       └── 📂 alpro/          # Algorithm & programming exercises
```

## 🔍 Program Analysis

### 🧮 **Calculator Programs**

**Features:**
- ✅ Four basic operations (+, -, *, /)
- ✅ Division by zero protection
- ✅ Input validation
- ✅ User-friendly interface


### 🔢 **Mathematical Algorithms**

#### **Fibonacci Sequence Implementation**
```cpp
long long fibonacci(int n) {
  ...
```

**Algorithm Complexity:**
- **Time Complexity**: O(n) - Linear time
- **Space Complexity**: O(1) - Constant space  
- **Advantages**: Iterative approach, no recursion overhead

#### **Diagonal Difference Algorithm**
```cpp
int diagonalDifference(int matrix[][n], int n) {
  ...
```

### 🎨 **Pattern Generation Algorithms**

#### **Pyramid Pattern Generator**
```cpp
void generatePyramid(int height) {
  ...
```

**Output Example (n=4):**
```
   /\
  /  \
 /    \
/______\
```

### 📊 **Array Processing Algorithms**

#### **Min-Max Sum Problem**
```cpp
void minMaxSum(vector<long> arr) {
    ...
```

## 🎓 Educational Content

### 📚 **Learning Path**

#### **Beginner Level (Week 1-2)**
1. **Basic Syntax** - Variables, data types, operators
   ```cpp
   // Start with dataOperator. cpp
   double calculateLoanPayment(double principal, double rate, int years);
   ```

2. **Control Structures** - Loops and conditionals
   ```cpp  
   // Practice with loop1(While).cpp and loop2(for).cpp
   for(int i = 0; i < n; i++) { /* loop body */ }
   ```

3. **Arrays & Basic I/O** - Array operations and file handling
   ```cpp
   // Work with array. cpp and aksesFile.cpp
   int surveyResults[12] = {20, 30, 25, 15, 90, 34, 21, 17, 40, 55, 34, 38};
   ```

#### **Intermediate Level (Week 3-4)**  
1. **Algorithm Implementation** - Mathematical algorithms
   ```cpp
   // Implement fibonacci.cpp and agak prima.cpp
   bool isPrime(int n) { /* primality test */ }
   ```

2. **Pattern Programming** - ASCII art and shapes
   ```cpp
   // Master piramid.cpp and belah ketupat.cpp  
   void drawDiamond(int size) { /* pattern logic */ }
   ```

3. **Matrix Operations** - 2D array manipulations
   ```cpp
   // Solve diagonaldifference. cpp
   int matrix[n][n]; // 2D array operations
   ```

#### **Advanced Level (Week 5-6)**
1. **Complex Applications** - Full-featured programs
   ```cpp
   // Build tampilan kalkulator.cpp
   class ScientificCalculator { /* advanced features */ };
   ```

2. **Optimization Techniques** - Performance improvements
   ```cpp
   // Optimize algorithms for competitive programming
   inline int fastPower(int base, int exp) { /* optimized */ }
   ```



## 🐛 Troubleshooting

### ❓ **Common Compilation Issues**

**Q: "fatal error: iostream:  No such file or directory"**
```bash
# Solution:  Install proper C++ compiler
# Ubuntu/Debian
sudo apt install build-essential

# Windows:  Install MinGW or Visual Studio
# macOS: Install Xcode command line tools
xcode-select --install
```

**Q:  Undefined reference errors? **
```bash
# Link necessary libraries
g++ -o program source.cpp -lm     # Math library
g++ -o program source.cpp -lpthread   # Threading

# For Windows-specific functions
g++ -o program source.cpp -static-libgcc -static-libstdc++
```

**Q: Program crashes or gives wrong output?**
```cpp
// Add debugging information
#include <cassert>

int main() {
    // Add assertions for testing
    assert(fibonacci(5) == 5);
    assert(isPrime(17) == true);
    
    // Add debug prints
    #ifdef DEBUG
        cout << "Debug: Variable x = " << x << endl;
    #endif
}

// Compile with debug flag
// g++ -DDEBUG -g -o program source.cpp
```

### 🔍 **Performance Issues**

**Q: Program runs too slowly?**
```bash
# Compile with optimization
g++ -O2 -o fast_program source.cpp

# Profile to find bottlenecks
g++ -pg -o profile_program source.cpp
./profile_program
gprof profile_program gmon.out > analysis.txt
```

**Q: Memory issues? **
```bash
# Check for memory leaks (Linux/macOS)
valgrind --leak-check=full ./program

# Use memory-efficient algorithms
# Avoid unnecessary memory allocations
vector<int> data;
data.reserve(expected_size);  // Pre-allocate memory
```

## 🚀 Extensions & Improvements

### 🔮 **Future Enhancements**

#### **Algorithm Additions**
- [ ] **Sorting Algorithms**: Quick sort, merge sort, heap sort
- [ ] **Search Algorithms**: Binary search, interpolation search
- [ ] **Graph Algorithms**: DFS, BFS, Dijkstra's algorithm
- [ ] **Dynamic Programming**: Knapsack, LCS, edit distance
- [ ] **String Algorithms**: KMP, Rabin-Karp, suffix arrays

#### **Advanced Features**
- [ ] **STL Integration**:  Comprehensive STL usage examples
- [ ] **Object-Oriented Design**: Class-based implementations
- [ ] **Template Programming**: Generic algorithm templates
- [ ] **Multi-threading**: Parallel algorithm implementations
- [ ] **GUI Applications**: Qt or GTK+ based calculators

#### **Educational Enhancements**
```cpp
// Planned additions
class AlgorithmVisualizer {
public:
    void visualizeSorting(vector<int>& arr);
    void animateSearch(vector<int>& arr, int target);
    void showComplexityAnalysis();
};

namespace CompetitiveProgramming {
    template<typename T>
    class FastIO { /* optimized I/O operations */ };
    
    class MathUtils { /* number theory utilities */ };
}
```

### 🎯 **Performance Optimizations**

#### **Code Optimization Techniques**
```cpp
// Fast I/O for competitive programming
inline void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Efficient modular arithmetic
inline long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    while(exp > 0) {
        if(exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Memory-efficient data structures
struct CompactNode {
    int data :  24;    // Use bit fields for memory efficiency
    int flag : 8;
};
```

## 🤝 Contributing

Contributions are welcome! Here's how to contribute:

### 🔄 **Development Guidelines**

#### **Code Style Standards**
```cpp
// Follow consistent naming conventions
class ClassName {           // PascalCase for classes
private:
    int memberVariable_;    // camelCase with underscore suffix
    
public: 
    void methodName();      // camelCase for methods
};

const int GLOBAL_CONSTANT = 42;  // UPPER_CASE for constants

// Function naming
int calculateSum(const vector<int>& numbers);    // Descriptive names
```

#### **Documentation Standards**
```cpp
/**
 * @brief Calculates the nth Fibonacci number using iterative approach
 * @param n The position in Fibonacci sequence (1-indexed)
 * @return The nth Fibonacci number
 * @complexity Time: O(n), Space: O(1)
 * @example fibonacci(5) returns 5 (sequence: 1,1,2,3,5)
 */
long long fibonacci(int n);
```

#### **Testing Guidelines**
```cpp
// Add unit tests for algorithms
#include <cassert>

void testFibonacci() {
    assert(fibonacci(1) == 1);
    assert(fibonacci(2) == 1); 
    assert(fibonacci(5) == 5);
    assert(fibonacci(10) == 55);
    cout << "✅ Fibonacci tests passed!" << endl;
}

void testAllAlgorithms() {
    testFibonacci();
    testPrimeCheck();
    testMatrixOperations();
    // Add more test functions
}
```

### 💡 **Contribution Ideas**

#### **Algorithm Categories Needed**
- [ ] **Sorting Algorithms**: Bubble, selection, insertion, quick, merge
- [ ] **Graph Theory**:  Shortest path, minimum spanning tree
- [ ] **Data Structures**: Linked lists, trees, hash tables
- [ ] **String Processing**: Pattern matching, text analysis
- [ ] **Numerical Methods**: Integration, differentiation, root finding

#### **Application Projects**
- [ ] **Games**: Tic-tac-toe, Snake, Tetris
- [ ] **Utilities**: File manager, text editor, image processor
- [ ] **Simulations**: Physics simulations, genetic algorithms
- [ ] **Network Tools**: Chat client, HTTP server
- [ ] **Database**:  Simple database engine, query processor

## 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

```
MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell... 
```

## 👨‍💻 Author

**Bagas Pangestu** ([@bagaspng](https://github.com/bagaspng))

- 📧 Email: bagaspangestu0407@gmail.com
- 💼 LinkedIn: [Bagas Pangestu](https://linkedin.com/in/bagaspng)  
- 🌐 Portfolio: [bagaspng.dev](https://bagaspng.dev)
- 🎓 Expertise: C++ Programming, Algorithms, Competitive Programming

## 🙏 Acknowledgments

- **C++ Community** - For the rich ecosystem and standard library
- **Competitive Programming Platforms** - HackerRank, Codeforces, AtCoder
- **Algorithm Textbooks** - Cormen CLRS, Sedgewick, Knuth
- **Open Source Contributors** - For inspiration and best practices

## 📚 References

### 📖 **Algorithm Resources**
- [Introduction to Algorithms (CLRS)](https://mitpress.mit.edu/books/introduction-algorithms-third-edition)
- [Algorithms by Robert Sedgewick](https://algs4.cs.princeton.edu/home/)
- [Competitive Programming 3](https://cpbook.net/)

### 🌐 **Online Learning Platforms**
- [LeetCode](https://leetcode.com/) - Algorithm practice
- [HackerRank](https://www.hackerrank.com/) - Programming challenges
- [Codeforces](https://codeforces.com/) - Competitive programming
- [GeeksforGeeks](https://www.geeksforgeeks. org/) - Algorithm tutorials

### 📺 **Video Resources**
- [MIT 6.006 Introduction to Algorithms](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/)
- [Algorithms Specialization (Coursera)](https://www.coursera.org/specializations/algorithms)

## 📞 Support

Need help?  Contact us: 

- 📖 **Documentation**: [Project Wiki](https://github.com/bagaspng/AlgorithmCPP/wiki)
- 🐛 **Issues**: [Report Bugs](https://github.com/bagaspng/AlgorithmCPP/issues)
- 💬 **Discussions**: [Q&A Forum](https://github.com/bagaspng/AlgorithmCPP/discussions)
- 📧 **Email**: bagaspangestu0407@gmail.com

---

<div align="center">

**⚡ Mastering Algorithms, One Line of Code at a Time ⚡**

[![GitHub stars](https://img.shields.io/github/stars/bagaspng/AlgorithmCPP? style=social)](https://github.com/bagaspng/AlgorithmCPP/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/bagaspng/AlgorithmCPP?style=social)](https://github.com/bagaspng/AlgorithmCPP/network/members)

**Made with ❤️ for the Programming Community**

</div>
