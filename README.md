# C++ Module 04: Subtype Polymorphism, Abstract Classes, and Interfaces

This repository contains the solutions for Module 04 of the C++ curriculum. This module is a deep dive into subtype polymorphism, a cornerstone of object-oriented design that allows objects of different classes to be treated through a common interface.

---

## Core Concepts Covered

This module explores the following key topics:

-   **Subtype Polymorphism**: Using base class pointers or references to manage derived class objects, enabling code that is flexible and extensible.
-   **Virtual Functions**: The mechanism that enables polymorphism in C++, allowing the correct derived class function to be called at runtime.
-   **Abstract Classes**: Creating classes that cannot be instantiated by including at least one pure virtual function (`= 0`), forcing derived classes to provide an implementation.
-   **Interfaces**: Using pure abstract classes (classes with only pure virtual functions) to define contracts that other classes must adhere to.
-   **Virtual Destructors**: Understanding the importance of virtual destructors in a base class to prevent memory leaks when deleting derived objects through a base class pointer.
-   **Deep vs. Shallow Copy**: Implementing proper copy constructors and assignment operators to handle dynamically allocated memory within classes.

---

## Exercise Breakdown

### `ex00: Polymorphism`
-   **Goal**: To introduce subtype polymorphism through the use of `virtual` functions. An `Animal` base class and `Dog` / `Cat` derived classes are created to demonstrate how a virtual `makeSound()` function allows the correct sound to be produced, even when called through a base `Animal` pointer.

### `ex01: I don’t want to set the world on fire`
-   **Goal**: To demonstrate the necessity of virtual destructors and to implement deep copies. A `Brain` class is added to the animals, requiring careful memory management. The key challenge is to correctly delete an array of `Animal` pointers, which fails without a virtual destructor in the base class.

### `ex02: Abstract class`
-   **Goal**: To create an abstract base class. The `Animal` class is modified to be non-instantiable by declaring its `makeSound()` function as pure virtual, thus enforcing that all concrete derived classes must provide their own implementation.

### `ex03: Interface & recap`
-   **Goal**: To build a complete system using interfaces (pure abstract classes). This exercise combines all module concepts by implementing an RPG-style magic system with `ICharacter`, `AMateria`, and `IMateriaSource` interfaces, along with their concrete implementations.

---

## How to Compile and Run

Each exercise is contained in its own directory (`ex00`, `ex01`, etc.) and includes a `Makefile`.

1.  **Navigate to an exercise directory**:
    ```bash
    cd ex00
    ```

2.  **Compile the project**:
    ```bash
    make
    ```

3.  **Run the executable**:
    The executable name is specified in the `Makefile` for each exercise.
    ```bash
    ./a.out
    ```

4.  **Clean up**:
    -   `make clean`: Removes the intermediate object files (`.o`).
    -   `make fclean`: Removes object files and the final executable.
    -   `make re`: Cleans and rebuilds the project.

All projects are compiled using `c++` with the flags `-Wall -Wextra -Werror -std=c++98`.
