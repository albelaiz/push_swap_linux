   
# 42 Push_Swap

Because swap_push isn't as natural

Given a set of integers, sort it using a predefined set of instructions using two stacks. The program outputs a sequence of operations (listed below) to sort the input integers.
   




---

## 📜 Instruction Set

For the following instructions, if an operation is impossible, the executable part will still execute.

| Code  | Instruction                 | Action                                                  |
|-------|----------------------------|---------------------------------------------------------|
| `sa`  | swap a                     | Swaps the top 2 elements of stack A                     |
| `sb`  | swap b                     | Swaps the top 2 elements of stack B                     |
| `ss`  | swap a + b                 | Executes both `sa` and `sb`                             |
| `pa`  | push a                     | Moves top element of B to top of A                      |
| `pb`  | push b                     | Moves top element of A to top of B                      |
| `ra`  | rotate a                   | Shifts all elements of A up (first becomes last)        |
| `rb`  | rotate b                   | Shifts all elements of B up (first becomes last)        |
| `rr`  | rotate a + b               | Executes both `ra` and `rb`                             |
| `rra` | reverse rotate a           | Shifts all elements of A down (last becomes first)      |
| `rrb` | reverse rotate b           | Shifts all elements of B down (last becomes first)      |
| `rrr` | reverse rotate a + b       | Executes both `rra` and `rrb`                           |

---

## 🧠 Algorithm

### For Small Stacks (≤5 elements)
- Custom optimized sort (see `simple_sort.c` in src folder)
- **Example**: Sorts 5 numbers in ≤11 operations

### For Large Stacks (Radix Sort)
**Key Steps**:
1. **Simplify Numbers**  
   Convert all numbers to their relative positions (e.g., `[-5, 100, 2, -10]` → `[1, 3, 2, 0]`).

2. **Base-2 Radix Sort**  
   Process numbers bit-by-bit from LSB to MSB:
   - **Bit = 0**: Push to stack B (`pb`)
   - **Bit = 1**: Rotate stack A (`ra`)
   - After each bit pass, reunite stacks (`pa` all from B to A)

**Visualization**:
Initial: 87 487 781 100 101 0 1
After 1st pass (LSB):
box 0: 100, 0
box 1: 781, 101, 1
box 7: 87, 487
Recombined: 100 0 781 101 1 87 487

---

## ⚡ Performance

| Stack Size | Max Operations (42) | My Results  | Score |
|------------|---------------------|-------------|-------|
| 3          | 3                   | **2**       | ✅    |
| 5          | 12                  | **8**       | ✅    |
| 100        | 700                 | **≤550**    | 3/5  |
| 500        | 5500                | **≤4500**   | 4/5  |

---

## 🎁 Bonus: Checker

Verifies if instructions sort the stack correctly:
```sh
./push_swap 3 2 1 | ./checker 3 2 1
```
Outputs:

OK if sorted

KO if not

Error on invalid input

📚 Resources

Books

Algorithms, 4th Edition

Author: [albelaiz]

School: 42 [1337med]

Year: 2025



</div>
</p>
