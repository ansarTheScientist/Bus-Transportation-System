# Bus-Transportation-System
The Transport System Management System, developed in C, is a comprehensive solution designed to manage passenger data, routes, and billing for both students and staff. It offers a user-friendly menu-driven interface, facilitating the addition, deletion, and viewing of user data, along with the provision of district-wise routing.

# Features
# 1. User Management
Add and Delete Users: Easily add new users and delete existing records.
# 2. District-wise Routing
Efficient Route Management: Provides detailed routes categorized by different districts, ensuring organized transportation services.
# 3. Billing
Billing Generation: Generates accurate bills for both students and staff based on the utilized routes.
# 4. Admin Access
Secure Administrative Access: Allows access to administrative functionalities via a specific password.
Operations: Perform essential operations like deleting user data based on phone numbers.

# Usage

# Setup
# Compile: Use any C compiler. Example: gcc main.c -o TransportSystem.
# Run: Execute the compiled file. Example: ./TransportSystem.

# Functionalities
# Menu Options:
Choose between Student or Staff status. Further options enable adding users or accessing administrative functionalities.
# District Selection: 
Choose a district to view available routes. If a district is full, the system prompts to select another district or exit.

# Admin Access:
Access administrative functionalities by providing the admin password: fast1234.

# File Structure
# main.c:
Main source code file.
# XDD.h: 
Included header file.
studentdata.txt, staffdata.txt: Files storing user data.
studentdata2.txt, staffdata2.txt: Temporary files used during operations.

# Contributing
Contributions are welcomed! To enhance the system with new features or fix issues, create a pull request.

# License
This project is licensed under the MIT License. For more details, see the LICENSE file.
