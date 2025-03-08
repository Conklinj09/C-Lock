# C-Lock: A Simple Password Generator in C

## Overview
C-Lock is a lightweight, command-line password generator written in C. It generates secure passwords by randomly selecting characters from a predefined set, including uppercase letters, lowercase letters, digits, and special characters.

## Features
- Generates passwords of user-specified length
- Includes uppercase, lowercase, numbers, and special characters
- Uses a randomized approach with `rand()` and `srand(time(NULL))` for entropy
- Simple and easy-to-use command-line interface (CLI)

## How It Works
1. The program prompts the user to enter the desired password length.
2. A password is randomly generated using a mix of characters.
3. The generated password is displayed on the screen.

## Installation & Compilation
### Prerequisites
Ensure you have a C compiler installed (e.g., `gcc`).

### Steps
1. Clone this repository:
   ```sh
   git clone https://github.com/yourusername/C-Lock.git
   cd C-Lock
   ```
2. Compile the program using GCC:
   ```sh
   gcc password_generator.c -o C-Lock
   ```
3. Run the program:
   ```sh
   ./C-Lock
   ```

## Example Usage
```sh
Enter the length of the password: 12
Generated Password: A7f$kL3!pQz
```

## Future Enhancements
- Allow users to specify character types (e.g., only letters, exclude special characters)
- Implement a GUI version
- Improve randomness using a cryptographic library

## Contributing
Feel free to fork this project, improve the code, and submit a pull request!

## License
This project is licensed under the MIT License.

---
Made with ❤️ in C.

