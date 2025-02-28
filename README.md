#!/bin/bash

# Generate README.md content
{
cat <<EOF
<p align="center">
  <img src="https://img.shields.io/badge/C-programming-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/C++-object--oriented-blue?style=for-the-badge"/>
</p>

<h1 align="center">Programming Foundations and Algorithms</h1>

<p align="center">
  Welcome to the <b>Programming Foundations and Algorithms</b> repository! This collection contains solutions to 200+ programming problems and 10+ projects developed during a comprehensive C/C++ learning journey.
  <br/>
</p>

---

## 📚 Overview

This repository contains solutions and projects from a structured programming curriculum covering:
- Foundational C programming (200+ problems)
- Object-oriented C++ concepts
- Algorithmic problem solving
- Data structures implementation
- Real-world projects (Bank system, Game development, etc.)

---

## 🧭 Curriculum Structure

### **1. Core Programming (Courses 01-04)**
EOF

# Process foundational courses
for dir in 0{1,2,3,4}__*; do
    if [[ -d "$dir" ]]; then
        echo -e "\n\`\`\`"
        echo "📂 ${dir//__/ - }"
        find "$dir" -type f -name '*.cpp' -print0 | while IFS= read -r -d '' file; do
            base=$(basename "$file")
            clean_name=$(echo "$base" | sed -E 's/problem_([0-9]+)_/\1_/' | sed 's/_cpp//')
            echo "  ├── ${clean_name}"
        done
        echo -e "\`\`\`"
    fi
done

cat <<EOF

### **2. Advanced Projects (Courses 05-07)**
EOF

# Process projects
for dir in 0{5,7}__*; do
    if [[ -d "$dir" ]]; then
        echo -e "\n\`\`\`"
        echo "📂 ${dir//__/ - }"
        find "$dir" -type f \( -name '*.cpp' -o -name '*.h' \) -print0 | while IFS= read -r -d '' file; do
            echo "  ├── $(basename "$file")"
        done
        echo -e "\`\`\`"
    fi
done

cat <<EOF

### **3. OOP & Data Structures (Courses 08-12)**
EOF

# Process OOP and DS
for dir in {08,10,12}__*; do
    if [[ -d "$dir" ]]; then
        echo -e "\n\`\`\`"
        echo "📂 ${dir//__/ - }"
        find "$dir" -type f \( -name '*.cpp' -o -name '*.hpp' \) -print0 | while IFS= read -r -d '' file; do
            echo "  ├── $(basename "$file")"
        done
        echo -e "\`\`\`"
    fi
done

cat <<EOF

---

## 🏆 Key Projects

### Banking System Architecture
\`\`\`
📦07__atm_and_full_bank_system_project
 ┣ 📂data - Transaction records
 ┣ 📂include - Header files
 ┣ 📂src - Core logic
 ┗ 📜Makefile - Build system
\`\`\`

### OOP Framework
\`\`\`
📦10__oop_concepts
 ┣ 📜clsDate.* - Date manipulation
 ┣ 📜clsString.* - String utilities 
 ┣ 📜clsInputValidate.* - Input handling
 ┗ 📜20+ other OOP exercises
\`\`\`

### Algorithm Library
\`\`\`
📦13-Algorithms-ProblemSolvingLevel-5
 ┣ 📜mainOfDynamicArray.cpp - Custom vector
 ┣ 📜mainOfclsDoublyLinkedList.cpp - Doubly LL
 ┣ 📜mainOfclsQueue.cpp - Queue ADT
 ┗ 📜mainOfclsStack.cpp - Stack implementation
\`\`\`

---

## 🛠️ Development Overview

**Code Structure**  
◈ 200+ Algorithm Solutions  
◈ 15+ OOP Concepts Exercises  
◈ 5 Production-grade Projects  
◈ 10+ Custom Data Structures

**Tools Used**  
◈ GCC/G++ Compiler  
◈ Make Build System  
◈ Valgrind Memory Debugger  
◈ Git Version Control

---

<p align="center">
  <i>"The only way to learn programming is to program." - Brian Kernighan</i>
</p>
EOF
} > README.md

echo "README.md generated successfully!"
