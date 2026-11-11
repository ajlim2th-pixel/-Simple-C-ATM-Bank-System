# 🏧 Simple C++ ATM Bank System

A console-based banking application built in C++ designed to simulate core ATM functionalities. This project is a great beginner-friendly example of implementing control flows, loops, functions, and state management in C++.

## 🚀 Features

* **Account Balance Tracking:** Initializes with a default starting balance and updates dynamically across transactions.
* **Secure Deposit:** Allows users to deposit funds with input validation to prevent negative or zero-value transactions.
* **Controlled Withdrawal:** Includes a withdrawal feature with an insufficient funds check and a **3-try security lockout mechanism** to prevent invalid attempts.
* **Balance Inquiry:** Provides real-time updates of the user's current account balance.
* **Interactive Menu:** Features a continuous looping interface allowing multiple transactions until the user chooses to exit.

## 🛠️ Prerequisites

To compile and run this program, you will need:
* A C++ compiler (such as `g++`, Clang, or MSVC)
* Terminal, Command Prompt, or an IDE (like VS Code, Code::Blocks, or CLion)

## 📦 How to Run

1. Clone the repository or download the source code (`main.cpp`).
2. Open your terminal or command prompt in the project directory.
3. Compile the code using your compiler:
   ```bash
   g++ main.cpp -o atm_system
