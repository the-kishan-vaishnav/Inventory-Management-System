# 🏬 Inventory Management System (C CLI Based)

* *A simple and efficient command-line Inventory Management System built in C. This project allows you to manage products, track stock levels, and maintain accurate inventory records using a menu-driven interface.*

## 📝 Project Description

*The Inventory Management System is a console application that helps businesses or small stores manage their inventory effectively. Users can:*

* Add new products

* Remove existing products

* Find products by ID

* Modify product details

* View the complete inventory

*The system is built using C structures and arrays and provides a traditional CLI interface for easy interaction. It’s ideal for learning basic data handling, array manipulation, and menu-driven programming in C.*

## ✨ Features

* Add new products with ID, name, stock quantity, and unit price

* Remove products from the inventory

* Search for products using product ID

* Update stock quantity or unit price of existing products

* Display a clean, tabular inventory list

* Menu-driven interface for user-friendly operation

* Handles errors like invalid input and non-existent products

* Supports up to 50 products (can be adjusted using MAX_PRODUCTS)

## 🛠 Tech Stack

Language:

  * C (Standard ANSI C)

Core Concepts Used:

  * Structures (struct) for product representation

  * Arrays for inventory storage

  * Functions for modular code (Add, Remove, Find, Modify, Display)

  * Loops and conditional statements for menu navigation

Architecture:

  * CLI (Command Line Interface) Based System

# 🚀 How to Run the Project
1. Compile the Program

    *If you have GCC installed, compile the C program using:*

        gcc inventory_management.c -o inventory

2. Run the Executable
   
        ./inventory      # Linux / Mac

        inventory.exe    # Windows

4. Use the Menu

    *After running, you’ll see a menu like:*

        1. Add Product
        2. Remove Product
        3. Find Product
        4. Modify Product
        5. View Inventory
        6. Exit


    *Just enter the number for the operation you want to perform and follow the prompts.*

## 📂 Project Structure
inventory-management/

│

├── inventory_management.c

└── README.md
