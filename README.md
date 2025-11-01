# Dynamic-Hashmap

A lean, dynamic hash-map implementation in C++ (100% native) for high-performance, low-level use.  
Designed to handle growth, collisions, and dynamic resizing with minimal overhead.

## 🔧 Features

- Generic key/value mapping using templates.  
- Automatic resizing when load factor crosses threshold.  
- Handles collisions via chaining (linked lists) or open addressing (depending on build).  
- Straightforward API: insert, remove, find, clear, iterate.  
- Minimal dependencies — just standard C++ library.  
- Optimised for systems programming, kernel-adjacent work, or high-throughput infrastructure.  

## 📦 What’s in the repo?

- `HashMap/` folder: core hash-map template implementation.  
- `LinkedList/` folder: auxiliary linked-list class used for chaining.  
- Pre-compiled binary/shared objects (`.so`) for quick testing.  
- Support files and examples (if any) to demonstrate usage.  

## 🧠 Why use this?

If you’ve outgrown `std::unordered_map` or need finer control over memory allocation, performance characteristics, and resizing strategy — this implementation gives you the tools to build a custom, high-performance associative container tailored to your needs.  
Also ideal for educational purposes: understanding how hash maps work under the hood.

