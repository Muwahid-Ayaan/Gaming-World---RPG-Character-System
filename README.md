# 🕹️ Gaming World – RPG Character System

## 📌 Overview
The **RPG Character System** is a C++ project designed to demonstrate advanced **Object-Oriented Programming (OOP)** concepts, focusing on **inheritance, polymorphism, virtual functions, and abstract classes**.  

The system models different RPG characters (fighters, casters, hybrids) with unique abilities and behaviors. It also includes a **Battle Arena** where polymorphism is showcased as different character types interact through battles.

---

## 🎯 Learning Objectives
- Practice **all types of inheritance**: single, multilevel, and multiple.
- Implement and use **abstract classes**.
- Explore **virtual functions and polymorphism**.
- Understand the importance of a **virtual destructor** in inheritance hierarchies.

---

## 🏗 System Design

### 1. **Base Class: GameCharacter (Abstract)**
- **Protected Members**: `name`, `health`, `mana`, `level`  
- **Pure Virtual Functions**:  
  - `attack()`  
  - `defend()`  
  - `useSpecialAbility()`  
  - `getCharacterType()`  
- **Virtual Destructor**: Ensures proper cleanup when deleting derived objects via a base pointer.  
- **Method**: `displayStats()` to show character info.  

---

### 2. **Intermediate Classes (Single Inheritance)**
- **PhysicalFighter** (inherits `GameCharacter`)  
  - Attribute: `strength`  
  - Overrides `attack()` using strength-based damage.  

- **MagicalCaster** (inherits `GameCharacter`)  
  - Attribute: `intelligence`  
  - Overrides `attack()` using magic-based damage.  

---

### 3. **Concrete Classes (Multilevel Inheritance)**
- **Warrior** → inherits `PhysicalFighter`.  
- **Berserker** → inherits `Warrior` (3-level chain).  
- **Wizard** → inherits `MagicalCaster`.  
- **Necromancer** → inherits `Wizard` (3-level chain).  

---

### 4. **Multiple Inheritance Challenge**
- **Paladin** → inherits from both `PhysicalFighter` and `MagicalCaster`.  
- Handles the **diamond problem** using **virtual inheritance**.  

---

### 5. **Polymorphism Demonstration**
- **BattleArena Class**  
  - Maintains a `vector<GameCharacter*>` of participants.  
  - `addCharacter(GameCharacter* character)` → Adds new fighters.  
  - `startBattle()` → Each character attacks in turn (demonstrates polymorphism).  
  - `healAll()` → Polymorphic healing.  
  - Destructor cleans up allocated resources.  

---

## 🛠 Technologies Used
- Language: **C++17**  
- Build System: **CMake**  
- OOP Concepts: Inheritance (single, multilevel, multiple), virtual functions, polymorphism, abstract classes, dynamic dispatch.  

---
