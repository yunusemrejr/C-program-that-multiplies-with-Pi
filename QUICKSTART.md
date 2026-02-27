# 🚀 Quick Start Guide

Get started with Pi Calculator in under 2 minutes!

## ⚡ Fastest Way to Run

```bash
# Build and run in one command
make run
```

## 📋 Step-by-Step

### 1. Build the Program
```bash
make
```

### 2. Run It
```bash
./pi_calculator
```

### 3. Try It Out
When the menu appears, try these:

**Option 1** - Multiply by Pi:
```
Enter your choice: 1
Enter a number: 5
```
Result: `5 × π = 15.7079632679`

**Option 3** - Calculate Circle:
```
Enter your choice: 3
Enter the radius: 10
```
Results:
- Area = 314.159265
- Circumference = 62.831853

**Option 6** - Convert Angles:
```
Enter your choice: 6
1. Degrees to Radians
Enter your choice: 1
Enter angle in degrees: 180
```
Result: `180° = 3.141593 radians`

## 🎯 Quick Commands

```bash
# Show version
./pi_calculator --version

# Show help
./pi_calculator --help

# Batch mode (multiple calculations)
./pi_calculator --batch

# Clean and rebuild
make clean && make

# Build legacy version
make legacy
```

## 💡 Pro Tips

1. **Batch Mode**: Process multiple numbers at once
   ```bash
   ./pi_calculator --batch
   ```

2. **Use Make**: Easier than manual compilation
   ```bash
   make run    # Build and run
   make clean  # Clean up
   ```

3. **Install System-wide**: Access from anywhere
   ```bash
   make install
   pi_calculator  # Run from any directory
   ```

## 🎨 What You'll See

```
╔════════════════════════════════════════════════════════════╗
║                                                            ║
║              🥧  PI CALCULATOR v2.0  🥧                    ║
║                                                            ║
║         Professional Mathematical Utility Tool            ║
║                                                            ║
╚════════════════════════════════════════════════════════════╝

Pi = 3.141592653589793

┌─────────────────────────────────────────────────────────┐
│                      MAIN MENU                          │
├─────────────────────────────────────────────────────────┤
│  1. Multiply number by Pi                              │
│  2. Divide number by Pi                                │
│  3. Circle calculations (area, circumference)          │
│  4. Sphere calculations (volume, surface area)         │
│  5. Cylinder calculations (volume, surface area)       │
│  6. Angle conversion (degrees ↔ radians)               │
│  7. Batch mode (multiple calculations)                 │
│  0. Exit                                                │
└─────────────────────────────────────────────────────────┘
```

## 🆘 Troubleshooting

**Problem**: `gcc: command not found`
```bash
# Amazon Linux / RHEL / CentOS
sudo dnf install gcc

# Ubuntu / Debian
sudo apt install gcc

# macOS
xcode-select --install
```

**Problem**: Compilation errors
```bash
# Make sure you have math library
gcc -o pi_calculator pi_calculator.c -lm
```

**Problem**: Colors not showing
- Your terminal may not support ANSI colors
- Try a modern terminal (iTerm2, Windows Terminal, GNOME Terminal)

## 📚 Learn More

- Full documentation: See [README.md](README.md)
- All changes: See [CHANGELOG.md](CHANGELOG.md)
- Original version: See `C program that multiplies input with Pi/multiPi.c`

## 🎓 Example Session

```
$ ./pi_calculator

[Beautiful colored menu appears]

Enter your choice: 3

=== CIRCLE CALCULATIONS ===

Enter the radius: 5

Results for circle with radius 5.0000:
  Area          = π × r² = 78.539816
  Circumference = 2πr    = 31.415927

[Menu appears again]

Enter your choice: 0

Thank you for using Pi Calculator!
Original concept by Yunus Emre Vurgun
```

---

**Ready to calculate? Run `make run` now! 🚀**
