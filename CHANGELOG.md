# Changelog

All notable changes to the Pi Calculator project.

## [2.0.0] - 2026-02-27

### 🎉 Major Enhancements

#### New Features
- **Interactive Menu System**: Beautiful colored terminal UI with Unicode box-drawing characters
- **Multiple Calculation Modes**:
  - Multiply by Pi (original feature, enhanced)
  - Divide by Pi (NEW)
  - Circle calculations - area and circumference (NEW)
  - Sphere calculations - volume and surface area (NEW)
  - Cylinder calculations - volume and surface area (NEW)
  - Angle conversion - degrees ↔ radians (NEW)
  - Batch mode - process multiple calculations at once (NEW)

#### Code Quality Improvements
- **Input Validation**: Comprehensive error handling for all user inputs
- **High Precision**: Uses `M_PI` constant from `math.h` (15 decimal places)
- **Modular Design**: Well-organized functions with clear responsibilities
- **Documentation**: Extensive inline comments and function documentation
- **Standards Compliance**: Follows C11 standard with strict compiler warnings (`-Wall -Wextra`)

#### User Experience
- **ANSI Color Support**: Beautiful colored output for better visual feedback
- **Command-line Arguments**: Support for `--help`, `--version`, and `--batch` flags
- **Professional UI**: Clean, modern interface with proper formatting
- **Error Messages**: Clear, helpful error messages with color coding

#### Build System
- **Makefile**: Professional build automation with multiple targets
- **Cross-platform**: Builds on Linux, macOS, and Windows (MinGW)
- **Installation Support**: System-wide installation with `make install`

#### Documentation
- **Comprehensive README**: Detailed usage examples and technical documentation
- **Code Comments**: Extensive documentation for all functions
- **Changelog**: This file tracking all changes
- **License**: MIT License maintained from original

### 🔧 Technical Details

#### Mathematical Formulas Added
- Circle: `A = πr²`, `C = 2πr`
- Sphere: `V = (4/3)πr³`, `A = 4πr²`
- Cylinder: `V = πr²h`, `A = 2πr(r + h)`
- Angle conversion: `rad = deg × π/180`, `deg = rad × 180/π`

#### Code Structure
```
Before (Legacy):
- Single main() function
- Basic printf/scanf
- Hardcoded Pi value
- Minimal error handling
- ~20 lines of code

After (Modern):
- 15+ modular functions
- Comprehensive input validation
- Standard library Pi constant
- Extensive error handling
- ~500+ lines of well-documented code
```

### 📊 Comparison with Legacy Version

| Aspect | Legacy v1.0 | Modern v2.0 |
|--------|-------------|-------------|
| Lines of Code | ~20 | ~500+ |
| Functions | 1 (main) | 15+ |
| Features | 1 | 7 |
| Input Types | Integer only | Integer & Float |
| Error Handling | None | Comprehensive |
| UI | Plain text | Colored, formatted |
| Documentation | Minimal | Extensive |
| Build System | Manual | Makefile |
| CLI Arguments | None | --help, --version, --batch |
| Code Standard | None | C11 with strict warnings |

### 🎨 Visual Improvements
- Unicode box-drawing characters for menus
- ANSI color codes (cyan, green, yellow, blue, magenta)
- Formatted output with proper alignment
- Professional header and branding

### 🚀 Performance
- Optimized compilation with `-O2` flag
- Efficient memory usage
- Fast execution for all operations

### 📦 Project Structure
```
New files added:
- pi_calculator.c (modern version)
- Makefile (build automation)
- README.md (comprehensive documentation)
- CHANGELOG.md (this file)
- .gitignore (C project ignore rules)

Preserved:
- C program that multiplies input with Pi/multiPi.c (original)
- LICENSE (MIT License)
```

### 🙏 Credits
- **Original Concept**: Yunus Emre Vurgun (2022)
- **Enhanced Version**: 2026
- **License**: MIT (maintained from original)

---

## [1.0.0] - 2022 (Original)

### Initial Release by Yunus Emre Vurgun
- Basic integer multiplication with Pi
- Simple console input/output
- Hardcoded Pi value (3.14159265359)
- Author signature in output
- MIT License

---

**Note**: Version 2.0 maintains full backward compatibility with the original concept while adding professional features and modern C programming practices.
