# 🥧 Pi Calculator v2.0

A modern, professional mathematical utility tool for Pi-related calculations.

**Original concept by:** Yunus Emre Vurgun  
**Enhanced version:** 2026  
**License:** MIT

## 🌟 Features

### Core Functionality
- ✨ **Multiply/Divide by Pi** - Perform basic arithmetic operations with Pi
- 🔵 **Circle Calculations** - Calculate area and circumference
- 🌐 **Sphere Calculations** - Calculate volume and surface area
- 🛢️ **Cylinder Calculations** - Calculate volume and surface area
- 📐 **Angle Conversion** - Convert between degrees and radians
- 📊 **Batch Mode** - Process multiple calculations at once

### Modern Enhancements
- 🎨 Beautiful colored terminal UI with Unicode box-drawing characters
- ✅ Comprehensive input validation and error handling
- 🔢 High-precision Pi constant (15 decimal places)
- 📝 Command-line argument support
- 🚀 Interactive menu system
- 💪 Professional code structure with modular functions

## 🚀 Quick Start

### Prerequisites
- GCC compiler (or any C compiler)
- Make (optional, for easier building)
- Linux/Unix/macOS terminal (for best color support)

### Building

#### Using Make (Recommended)
```bash
# Build the modern version
make

# Build and run
make run

# Build the legacy version
make legacy

# Clean build artifacts
make clean
```

#### Manual Compilation
```bash
# Modern version
gcc -Wall -Wextra -O2 -std=c11 -o pi_calculator pi_calculator.c -lm

# Legacy version
gcc -Wall -Wextra -O2 -o multiPi "C program that multiplies input with Pi/multiPi.c" -lm
```

### Running

```bash
# Interactive mode
./pi_calculator

# Show help
./pi_calculator --help

# Show version
./pi_calculator --version

# Batch mode
./pi_calculator --batch
```

## 📖 Usage Examples

### Example 1: Multiply by Pi
```
Enter your choice: 1

=== MULTIPLY BY PI ===

Enter a number: 5

Result:
  5.0000000000 × π = 15.7079632679
```

### Example 2: Circle Calculations
```
Enter your choice: 3

=== CIRCLE CALCULATIONS ===

Enter the radius: 10

Results for circle with radius 10.0000:
  Area          = π × r² = 314.159265
  Circumference = 2πr    = 62.831853
```

### Example 3: Sphere Calculations
```
Enter your choice: 4

=== SPHERE CALCULATIONS ===

Enter the radius: 5

Results for sphere with radius 5.0000:
  Volume       = (4/3)πr³ = 523.598776
  Surface Area = 4πr²     = 314.159265
```

### Example 4: Angle Conversion
```
Enter your choice: 6

=== ANGLE CONVERSION ===

1. Degrees to Radians
2. Radians to Degrees

Enter your choice: 1
Enter angle in degrees: 180

Result:
  180.0000° = 3.141593 radians
```

### Example 5: Batch Mode
```
Enter your choice: 7

=== BATCH MODE: MULTIPLY BY PI ===

How many numbers do you want to multiply by Pi? 3

Results:
Input           Result (× π)        
─────────────────────────────────────
Enter number 1: 1
1.0000          3.141593            
Enter number 2: 2
2.0000          6.283185            
Enter number 3: 3
3.0000          9.424778            
```

## 🎯 Menu Options

| Option | Description |
|--------|-------------|
| 1 | Multiply number by Pi |
| 2 | Divide number by Pi |
| 3 | Circle calculations (area, circumference) |
| 4 | Sphere calculations (volume, surface area) |
| 5 | Cylinder calculations (volume, surface area) |
| 6 | Angle conversion (degrees ↔ radians) |
| 7 | Batch mode (multiple calculations) |
| 0 | Exit |

## 🛠️ Technical Details

### Code Improvements
- **Input Validation**: Robust error handling for all user inputs
- **Precision**: Uses `M_PI` from `math.h` for maximum precision
- **Modularity**: Well-organized functions with clear responsibilities
- **Documentation**: Comprehensive comments and function documentation
- **Standards**: Follows C11 standard with strict compiler warnings
- **UI/UX**: ANSI color codes for better visual feedback

### Mathematical Formulas Used

**Circle:**
- Area: `A = πr²`
- Circumference: `C = 2πr`

**Sphere:**
- Volume: `V = (4/3)πr³`
- Surface Area: `A = 4πr²`

**Cylinder:**
- Volume: `V = πr²h`
- Surface Area: `A = 2πr(r + h)`

**Angle Conversion:**
- Degrees to Radians: `radians = degrees × π / 180`
- Radians to Degrees: `degrees = radians × 180 / π`

## 📦 Installation

### System-wide Installation
```bash
# Install to /usr/local/bin
make install

# Now you can run from anywhere
pi_calculator
```

### Uninstall
```bash
make uninstall
```

## 🔧 Development

### Project Structure
```
.
├── pi_calculator.c              # Modern enhanced version
├── C program that multiplies input with Pi/
│   ├── multiPi.c               # Original legacy version
│   └── multiPi.exe             # Windows executable
├── Makefile                     # Build automation
├── README.md                    # This file
├── .gitignore                   # Git ignore rules
└── LICENSE                      # MIT License
```

### Building for Different Platforms

**Linux/Unix:**
```bash
gcc -Wall -Wextra -O2 -std=c11 -o pi_calculator pi_calculator.c -lm
```

**macOS:**
```bash
gcc -Wall -Wextra -O2 -std=c11 -o pi_calculator pi_calculator.c -lm
```

**Windows (MinGW):**
```bash
gcc -Wall -Wextra -O2 -std=c11 -o pi_calculator.exe pi_calculator.c -lm
```

## 🎨 Features Comparison

| Feature | Legacy Version | Modern Version |
|---------|---------------|----------------|
| Multiply by Pi | ✅ | ✅ |
| Divide by Pi | ❌ | ✅ |
| Circle Calculations | ❌ | ✅ |
| Sphere Calculations | ❌ | ✅ |
| Cylinder Calculations | ❌ | ✅ |
| Angle Conversion | ❌ | ✅ |
| Batch Mode | ❌ | ✅ |
| Input Validation | ❌ | ✅ |
| Colored UI | ❌ | ✅ |
| Command-line Args | ❌ | ✅ |
| Error Handling | Basic | Comprehensive |
| Code Documentation | Minimal | Extensive |

## 🤝 Contributing

Contributions are welcome! Feel free to:
- Report bugs
- Suggest new features
- Submit pull requests
- Improve documentation

## 📄 License

MIT License - see [LICENSE](LICENSE) file for details.

Copyright (c) 2022 Yunus Emre Vurgun (Original concept)  
Copyright (c) 2026 Enhanced version

## 🙏 Acknowledgments

- Original concept and implementation by **Yunus Emre Vurgun**
- Enhanced with modern C programming practices
- Inspired by the need for a professional mathematical utility tool

## 📞 Support

For issues, questions, or suggestions, please open an issue in the repository.

---

**Made with ❤️ and π**
