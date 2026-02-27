/**
 * Pi Calculator - A modern, professional mathematical utility
 * 
 * This program provides various Pi-related calculations including:
 * - Multiplication and division with Pi
 * - Circle calculations (area, circumference)
 * - Sphere calculations (volume, surface area)
 * - Cylinder calculations (volume, surface area)
 * - Angle conversions (degrees/radians)
 * 
 * Original concept by: Yunus Emre Vurgun
 * Enhanced version: 2026
 * License: MIT
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// ANSI color codes for better UI
#define COLOR_RESET   "\033[0m"
#define COLOR_BOLD    "\033[1m"
#define COLOR_CYAN    "\033[36m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_YELLOW  "\033[33m"
#define COLOR_BLUE    "\033[34m"
#define COLOR_MAGENTA "\033[35m"

// Function prototypes
void print_header(void);
void print_menu(void);
void multiply_by_pi(void);
void divide_by_pi(void);
void calculate_circle(void);
void calculate_sphere(void);
void calculate_cylinder(void);
void convert_angle(void);
void batch_mode(void);
void clear_input_buffer(void);
int get_menu_choice(void);
double get_positive_number(const char *prompt);

/**
 * Main program entry point
 */
int main(int argc, char *argv[]) {
    int choice;
    int running = 1;

    // Check for command-line arguments
    if (argc > 1) {
        if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0) {
            printf("Usage: %s [OPTIONS]\n", argv[0]);
            printf("Options:\n");
            printf("  --help, -h     Show this help message\n");
            printf("  --version, -v  Show version information\n");
            printf("  --batch, -b    Run in batch mode\n");
            return 0;
        } else if (strcmp(argv[1], "--version") == 0 || strcmp(argv[1], "-v") == 0) {
            printf("Pi Calculator v2.0\n");
            printf("Original concept by Yunus Emre Vurgun\n");
            printf("Enhanced version 2026\n");
            return 0;
        } else if (strcmp(argv[1], "--batch") == 0 || strcmp(argv[1], "-b") == 0) {
            batch_mode();
            return 0;
        }
    }

    print_header();

    while (running) {
        print_menu();
        choice = get_menu_choice();

        switch (choice) {
            case 1:
                multiply_by_pi();
                break;
            case 2:
                divide_by_pi();
                break;
            case 3:
                calculate_circle();
                break;
            case 4:
                calculate_sphere();
                break;
            case 5:
                calculate_cylinder();
                break;
            case 6:
                convert_angle();
                break;
            case 7:
                batch_mode();
                break;
            case 0:
                printf("\n%s%sThank you for using Pi Calculator!%s\n", COLOR_BOLD, COLOR_GREEN, COLOR_RESET);
                printf("Original concept by Yunus Emre Vurgun\n\n");
                running = 0;
                break;
            default:
                printf("\n%s%sInvalid choice. Please try again.%s\n\n", COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
        }
    }

    return 0;
}

/**
 * Print application header
 */
void print_header(void) {
    printf("\n%s%s", COLOR_BOLD, COLOR_CYAN);
    printf("╔════════════════════════════════════════════════════════════╗\n");
    printf("║                                                            ║\n");
    printf("║              🥧  PI CALCULATOR v2.0  🥧                    ║\n");
    printf("║                                                            ║\n");
    printf("║         Professional Mathematical Utility Tool            ║\n");
    printf("║                                                            ║\n");
    printf("╚════════════════════════════════════════════════════════════╝\n");
    printf("%s\n", COLOR_RESET);
    printf("Pi = %.15f\n\n", M_PI);
}

/**
 * Print main menu
 */
void print_menu(void) {
    printf("%s%s┌─────────────────────────────────────────────────────────┐%s\n", COLOR_BOLD, COLOR_BLUE, COLOR_RESET);
    printf("%s%s│                      MAIN MENU                          │%s\n", COLOR_BOLD, COLOR_BLUE, COLOR_RESET);
    printf("%s%s├─────────────────────────────────────────────────────────┤%s\n", COLOR_BOLD, COLOR_BLUE, COLOR_RESET);
    printf("%s│  1. Multiply number by Pi                              │%s\n", COLOR_BLUE, COLOR_RESET);
    printf("%s│  2. Divide number by Pi                                │%s\n", COLOR_BLUE, COLOR_RESET);
    printf("%s│  3. Circle calculations (area, circumference)          │%s\n", COLOR_BLUE, COLOR_RESET);
    printf("%s│  4. Sphere calculations (volume, surface area)         │%s\n", COLOR_BLUE, COLOR_RESET);
    printf("%s│  5. Cylinder calculations (volume, surface area)       │%s\n", COLOR_BLUE, COLOR_RESET);
    printf("%s│  6. Angle conversion (degrees ↔ radians)               │%s\n", COLOR_BLUE, COLOR_RESET);
    printf("%s│  7. Batch mode (multiple calculations)                 │%s\n", COLOR_BLUE, COLOR_RESET);
    printf("%s│  0. Exit                                                │%s\n", COLOR_BLUE, COLOR_RESET);
    printf("%s%s└─────────────────────────────────────────────────────────┘%s\n", COLOR_BOLD, COLOR_BLUE, COLOR_RESET);
    printf("\n%sEnter your choice: %s", COLOR_BOLD, COLOR_RESET);
}

/**
 * Get menu choice from user
 */
int get_menu_choice(void) {
    int choice;
    if (scanf("%d", &choice) != 1) {
        clear_input_buffer();
        return -1;
    }
    clear_input_buffer();
    return choice;
}

/**
 * Get a positive number from user with validation
 */
double get_positive_number(const char *prompt) {
    double number;
    int valid = 0;

    while (!valid) {
        printf("%s", prompt);
        if (scanf("%lf", &number) == 1 && number >= 0) {
            valid = 1;
        } else {
            printf("%s%sInvalid input. Please enter a positive number.%s\n", COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
            clear_input_buffer();
        }
    }
    clear_input_buffer();
    return number;
}

/**
 * Clear input buffer
 */
void clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/**
 * Multiply a number by Pi
 */
void multiply_by_pi(void) {
    double number, result;

    printf("\n%s%s=== MULTIPLY BY PI ===%s\n\n", COLOR_BOLD, COLOR_MAGENTA, COLOR_RESET);
    printf("Enter a number: ");
    
    if (scanf("%lf", &number) != 1) {
        printf("%s%sInvalid input!%s\n\n", COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
        clear_input_buffer();
        return;
    }
    clear_input_buffer();

    result = number * M_PI;

    printf("\n%s%sResult:%s\n", COLOR_BOLD, COLOR_GREEN, COLOR_RESET);
    printf("  %.10f × π = %s%.10f%s\n\n", number, COLOR_GREEN, result, COLOR_RESET);
}

/**
 * Divide a number by Pi
 */
void divide_by_pi(void) {
    double number, result;

    printf("\n%s%s=== DIVIDE BY PI ===%s\n\n", COLOR_BOLD, COLOR_MAGENTA, COLOR_RESET);
    printf("Enter a number: ");
    
    if (scanf("%lf", &number) != 1) {
        printf("%s%sInvalid input!%s\n\n", COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
        clear_input_buffer();
        return;
    }
    clear_input_buffer();

    result = number / M_PI;

    printf("\n%s%sResult:%s\n", COLOR_BOLD, COLOR_GREEN, COLOR_RESET);
    printf("  %.10f ÷ π = %s%.10f%s\n\n", number, COLOR_GREEN, result, COLOR_RESET);
}

/**
 * Calculate circle properties
 */
void calculate_circle(void) {
    double radius, area, circumference;

    printf("\n%s%s=== CIRCLE CALCULATIONS ===%s\n\n", COLOR_BOLD, COLOR_MAGENTA, COLOR_RESET);
    radius = get_positive_number("Enter the radius: ");

    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    printf("\n%s%sResults for circle with radius %.4f:%s\n", COLOR_BOLD, COLOR_GREEN, radius, COLOR_RESET);
    printf("  Area          = π × r² = %s%.6f%s\n", COLOR_GREEN, area, COLOR_RESET);
    printf("  Circumference = 2πr    = %s%.6f%s\n\n", COLOR_GREEN, circumference, COLOR_RESET);
}

/**
 * Calculate sphere properties
 */
void calculate_sphere(void) {
    double radius, volume, surface_area;

    printf("\n%s%s=== SPHERE CALCULATIONS ===%s\n\n", COLOR_BOLD, COLOR_MAGENTA, COLOR_RESET);
    radius = get_positive_number("Enter the radius: ");

    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    surface_area = 4 * M_PI * pow(radius, 2);

    printf("\n%s%sResults for sphere with radius %.4f:%s\n", COLOR_BOLD, COLOR_GREEN, radius, COLOR_RESET);
    printf("  Volume       = (4/3)πr³ = %s%.6f%s\n", COLOR_GREEN, volume, COLOR_RESET);
    printf("  Surface Area = 4πr²     = %s%.6f%s\n\n", COLOR_GREEN, surface_area, COLOR_RESET);
}

/**
 * Calculate cylinder properties
 */
void calculate_cylinder(void) {
    double radius, height, volume, surface_area;

    printf("\n%s%s=== CYLINDER CALCULATIONS ===%s\n\n", COLOR_BOLD, COLOR_MAGENTA, COLOR_RESET);
    radius = get_positive_number("Enter the radius: ");
    height = get_positive_number("Enter the height: ");

    volume = M_PI * pow(radius, 2) * height;
    surface_area = 2 * M_PI * radius * (radius + height);

    printf("\n%s%sResults for cylinder (r=%.4f, h=%.4f):%s\n", COLOR_BOLD, COLOR_GREEN, radius, height, COLOR_RESET);
    printf("  Volume       = πr²h        = %s%.6f%s\n", COLOR_GREEN, volume, COLOR_RESET);
    printf("  Surface Area = 2πr(r + h)  = %s%.6f%s\n\n", COLOR_GREEN, surface_area, COLOR_RESET);
}

/**
 * Convert between degrees and radians
 */
void convert_angle(void) {
    int choice;
    double angle, result;

    printf("\n%s%s=== ANGLE CONVERSION ===%s\n\n", COLOR_BOLD, COLOR_MAGENTA, COLOR_RESET);
    printf("1. Degrees to Radians\n");
    printf("2. Radians to Degrees\n");
    printf("\nEnter your choice: ");

    if (scanf("%d", &choice) != 1) {
        printf("%s%sInvalid input!%s\n\n", COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
        clear_input_buffer();
        return;
    }
    clear_input_buffer();

    if (choice == 1) {
        printf("Enter angle in degrees: ");
        if (scanf("%lf", &angle) != 1) {
            printf("%s%sInvalid input!%s\n\n", COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
            clear_input_buffer();
            return;
        }
        clear_input_buffer();
        result = angle * M_PI / 180.0;
        printf("\n%s%sResult:%s\n", COLOR_BOLD, COLOR_GREEN, COLOR_RESET);
        printf("  %.4f° = %s%.6f radians%s\n\n", angle, COLOR_GREEN, result, COLOR_RESET);
    } else if (choice == 2) {
        printf("Enter angle in radians: ");
        if (scanf("%lf", &angle) != 1) {
            printf("%s%sInvalid input!%s\n\n", COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
            clear_input_buffer();
            return;
        }
        clear_input_buffer();
        result = angle * 180.0 / M_PI;
        printf("\n%s%sResult:%s\n", COLOR_BOLD, COLOR_GREEN, COLOR_RESET);
        printf("  %.6f radians = %s%.4f°%s\n\n", angle, COLOR_GREEN, result, COLOR_RESET);
    } else {
        printf("%s%sInvalid choice!%s\n\n", COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
    }
}

/**
 * Batch mode for multiple calculations
 */
void batch_mode(void) {
    int count, i;
    double number, result;

    printf("\n%s%s=== BATCH MODE: MULTIPLY BY PI ===%s\n\n", COLOR_BOLD, COLOR_MAGENTA, COLOR_RESET);
    printf("How many numbers do you want to multiply by Pi? ");

    if (scanf("%d", &count) != 1 || count <= 0) {
        printf("%s%sInvalid input!%s\n\n", COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
        clear_input_buffer();
        return;
    }
    clear_input_buffer();

    printf("\n%s%sResults:%s\n", COLOR_BOLD, COLOR_GREEN, COLOR_RESET);
    printf("%-15s %-20s\n", "Input", "Result (× π)");
    printf("─────────────────────────────────────\n");

    for (i = 0; i < count; i++) {
        printf("Enter number %d: ", i + 1);
        if (scanf("%lf", &number) != 1) {
            printf("%s%sInvalid input, skipping...%s\n", COLOR_BOLD, COLOR_YELLOW, COLOR_RESET);
            clear_input_buffer();
            continue;
        }
        clear_input_buffer();

        result = number * M_PI;
        printf("%-15.4f %s%-20.6f%s\n", number, COLOR_GREEN, result, COLOR_RESET);
    }
    printf("\n");
}
