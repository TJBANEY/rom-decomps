# Ghidra Learnings

## Commands


### (D) - Disassembly

**Before** &nbsp;(Raw Bytes) - *Raw hex bytes Ghidra hasn't interpreted yet*

```ruby
Address     Bytes               Undefined
--------    ----------------    -----------------------
00000200    4E 75               ???
00000202    60 00               ???
00000204    FF FA               ???
```


**After** &nbsp;(Disassembled Code) - *valid 68k assembly instructions*
```ruby
Address     Bytes               Instruction
--------    ----------------    -----------------------
00000200    4E 75               RTS          ; Return from subroutine
00000202    60 00 FF FA         BRA 0x1FFFE  ; Branch Always
```

---

🧠 **Core Navigation & Viewing**
| Key/Command | Description                                                              |
|-------------|--------------------------------------------------------------------------|
| **G**           | Go to Address — jump to a specific memory address or label.              |
| **L**           | Label — assign a name to a location (helps track functions/data).        |
| **E**           | Edit Instruction — manually change the disassembly bytes.                |
| **D**           | Disassemble — turn raw bytes into machine instructions.                  |
| **U**           | Undisassemble — revert disassembled instructions to raw bytes.           |
| **C**           | Clear Code/Data — clears disassembly or data in a region.                |
| **I**           | Create Instruction — manually define an instruction.                     |
| **A**           | Create Data — define bytes as a data type (e.g. string, word, pointer).  |
| **Shift+A**    | Change Data Type — modify a variable’s or address’s data type.           |

<br>

🔧 **Analysis + Function Management**
| Key/Command    | Description                                                             |
|----------------|-------------------------------------------------------------------------|
| **F**          | Create Function — define a new function at the current location.        |
| **P**          | Set Function Parameters — define function arguments.                    |
| **T**          | Create Structure/Data Type — begin a new structure or custom data type. |
| **R**          | Rename — rename a label, function, variable, etc.                       |
| **Y**          | Create Symbol From Reference — when looking at a reference, create a symbolic link |

<br>

🪛 **Decompilation-Specific**
| Key/Command        | Description                                                        |
|--------------------|--------------------------------------------------------------------|
| **F4**             | Show Decompiler Window — side-by-side C-like view of assembly.     |
| **Ctrl+E**         | Edit Function Signature — change return type, args, etc.           |
| **Ctrl+Shift+E**   | Edit Global Variables used by decompiled functions.                |
| **Ctrl+L**         | Highlight Token in decompiler and sync with disassembly.           |

<br>

📌 **Miscellaneous**
| Key/Command        | Description                                                        |
|--------------------|--------------------------------------------------------------------|
| **Ctrl+Shift+G**   | Search for all references to a symbol/function.                    |
| **Ctrl+T**         | Show Data Type Manager — manage structs, enums, typedefs, etc.     |
| **Ctrl+Alt+H**     | Highlight Flow — highlight instruction flow for current function.  |
| **Ctrl+Q**         | Show Help for selected item (data type, instruction, etc).         |
| **Alt+Right**      | Go Forward — forward through address history.                      |
| **Alt+Left**       | Go Back — back through address history.                            |
