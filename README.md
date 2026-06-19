# C Pattern Programs 

Welcome to the **C Pattern Programs** repository! This repository contains a curated collection of programming exercises focused on printing diverse geometric shapes, stars, and numbers using the C language. It is designed to master structural logic, nested `for` loops, and sequential column-to-row grid layouts.

 Features
*Standard Dynamic Input: Uses standard library streams like `scanf()` to accept user input (`num` / `n`) to dynamically scale pattern sizes.
*Structured Grid Looping: Emphasizes native nested `for` loop mechanics (outer loops for vertical rows, inner loops for horizontal character columns).
*Formatted Console Output: Uses formatting specifiers (`%d`) and explicit escape sequences (`\n`, `\t`) for structured grid alignments.

---

@@ Pattern Catalog

| File Name | Pattern Description | Code Implementation |
| :--- | :--- | :--- |
| `01.c` | Solid Rectangle Star Pattern | Width scaled to `num + 2` |
| `02.c` | Solid Square Star Pattern | Equal length `num` row/col spacing |
| `03.c` | Solid Square Number Pattern | Iterative column digits grid |
| `04.c` | Right Half Pyramid Star Triangle | Right half pyramid where inner column star execution is bounded by the row index. |
| `05.c` | Right Half Pyramid Number Triangle | Right half pyramid structure printing sequential row step digits sequentially. |
| `06.c` | Right Half Pyramid Odd Number Triangle | Renders a right half pyramid using an independent `odd` tracker that resets and steps up by 2 on each column. |
| `07.c` | Alphabetical Letter Square Grid | Prints a flat square grid where column values increment dynamically starting from character variable `'A'`. |
| `08.c` | Alternating Number and Char Triangle | Uses conditional parity mapping (`r % 2 != 0`) to alternate between numeric and alphabetic steps. |
| `09.c` | Inverted Left Half Pyramid Star Triangle | An upside-down star triangle utilizing an inverse horizontal grid constraint condition: `1 + n - r`. |
| `10.c` | Inverted Left Half Pyramid Number Triangle | An upside-down triangle structure displaying sequenced column numbers (`c`) bounded up to `n - r + 1`. |
| `11.c` | Alphabetical Letter Uniform Square | Renders a square grid where each row cycles sequentially from character `'A'` to `'A' + n` via character type casting. |
| `12.c` | Full Symmetric Number Pyramid | Constructs an advanced centered pyramid layout combining an inversion space loop (`n - r + 1`), an ascending column loop, and a decrementing loop tracking step-down offsets. |
---

🛠️ How to Compile and Run

To run these programs on your local machine's terminal, make sure you have a C compiler like GCC installed, and run these steps:

 **Compile the file:**
   ```bash
   gcc 01.c -o 01
