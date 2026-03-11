# Flex Programs

This directory contains Flex (Fast Lexical Analyzer Generator) programs used for lexical analysis in compiler design.

## Table of Contents
- [What is Flex?](#what-is-flex)
- [What is Bison?](#what-is-bison)
- [Prerequisites](#prerequisites)
- [File Descriptions](#file-descriptions)
- [CLI Commands - Flex Only](#cli-commands---flex-only)
- [CLI Commands - Flex with Bison](#cli-commands---flex-with-bison)
- [Step-by-Step Examples](#step-by-step-examples)

## What is Flex?

Flex (Fast Lexical Analyzer Generator) is a tool that generates C code for a lexical scanner. It takes a set of patterns (regular expressions) and converts them into a C program that can recognize those patterns in input text. Flex is commonly used in the first phase of a compiler to break input into tokens.

## What is Bison?

Bison (formerly Yacc) is a parser generator that works with Flex to create complete language processors. While Flex handles lexical analysis (breaking input into tokens), Bison handles syntax analysis (parsing the tokens into a grammar). They are typically used together in compiler construction.

## Prerequisites

### On Linux/WSL:
```bash
sudo apt-get install flex bison build-essential
```

### On macOS:
```bash
brew install flex bison
```

### On Windows:
- Install GnuWin32 Flex and Bison, or
- Use WSL (Windows Subsystem for Linux) for a more complete experience

## File Descriptions

| File | Purpose |
|------|---------|
| `1prog.l` | First flex program - basic example |
| `2prog.l` | Second flex program |
| `3prog.l` | Third flex program |
| `4prog.l` | Fourth flex program |
| `lex.yy.c` | Generated C code from flex (auto-generated) |
| `1prog.exe` | Compiled executable from flex program |
| `a.out` | Compiled executable (Linux/WSL) |

## CLI Commands - Flex Only

### Basic Compilation Steps:

#### Step 1: Generate C file from .l file
```bash
flex program_name.l
```
This creates `lex.yy.c` - the C source code generated from your flex file.

#### Step 2: Compile the C file to create executable
```bash
gcc -o program_name lex.yy.c -lfl
```
- `-o program_name`: Specifies the output executable name
- `-lfl`: Links with the flex library (providing the yywrap() function)

#### Step 3: Run the executable
```bash
./program_name
```

### Complete One-Liner (Flex Only)
```bash
flex program_name.l && gcc -o program_name lex.yy.c -lfl && ./program_name
```

## CLI Commands - Flex with Bison

### File Structure:
- **`.l` file**: Flex lexer specification
- **`.y` file**: Bison parser specification

### Step 1: Generate Bison Parser
```bash
bison -d program_name.y
```
- `-d`: Creates `program_name.tab.h` (header file with token definitions)
- Generated files: `program_name.tab.c` and `program_name.tab.h`

### Step 2: Generate Flex Lexer
```bash
flex program_name.l
```
- Generates `lex.yy.c` (lexical analyzer C code)

### Step 3: Compile All Together
```bash
gcc -o program_name lex.yy.c program_name.tab.c -lfl -ly
```
- `-lfl`: Flex library
- `-ly`: Bison library (for yyparse())

### Complete One-Liner (Flex + Bison)
```bash
bison -d program_name.y && flex program_name.l && gcc -o program_name lex.yy.c program_name.tab.c -lfl -ly && ./program_name
```

## Step-by-Step Examples

### Example 1: Simple Flex Program (Flex Only)

If you have `count.l` (counts words/lines/characters):

```bash
# Step 1: Generate C code
flex count.l

# Step 2: Compile to executable
gcc -o count lex.yy.c -lfl

# Step 3: Run with input
./count < input.txt

# Or pipe input directly
echo "hello world" | ./count
```

### Example 2: Calculator using Flex + Bison

If you have `calc.l` and `calc.y`:

```bash
# Step 1: Generate parser from grammar file
bison -d calc.y

# Step 2: Generate lexer from pattern file
flex calc.l

# Step 3: Compile everything together
gcc -o calc lex.yy.c calc.tab.c -lfl -ly

# Step 4: Run the program
./calc
```

Then type expressions like:
```
2 + 3 * 4
10 / 2
5 - 3
exit
```

### Example 3: Running Flex Program with Input File

If you have `lexer.l` and an `input.txt` file:

```bash
# Generate and compile
flex lexer.l
gcc -o lexer lex.yy.c -lfl

# Run with input file
./lexer < input.txt

# Or process sample input
echo "100 + 200" | ./lexer
```

## Important Notes

1. **yywrap() function**: Required by flex. The `-lfl` flag provides a default implementation that returns 1 when EOF is reached.

2. **Redirection**: Input can come from:
   - Standard input (keyboard): `./program`
   - File redirection: `./program < input.txt`
   - Pipe: `echo "input" | ./program`

3. **Object vs Executable**: After `flex program.l`, only `lex.yy.c` is created. You must compile it with `gcc` to get an executable.

4. **Multiple Flex/Bison Programs**: If you have multiple programs, use different output names to avoid overwriting:
   ```bash
   flex -o lex_custom.c program.l
   gcc -o program lex_custom.c -lfl
   ```

5. **Token Definitions**: When using Flex with Bison, the `.y` file defines tokens (using `%token`) and the `.l` file references them. Bison generates `program.tab.h` which contains token macros.

## Troubleshooting

| Error | Solution |
|-------|----------|
| `ld returned 1 exit status` | Use `-lfl` flag when linking |
| `undefined reference to yylex` | Generate lexer with `flex` before compiling |
| `undefined reference to yyparse` | Use `-ly` flag when linking with bison |
| No input processing | Check that `yywrap()` returns 1 at EOF |

## Quick Reference

```bash
# Flex only
flex file.l
gcc -o exe lex.yy.c -lfl
./exe < input.txt

# Flex + Bison
bison -d file.y
flex file.l
gcc -o exe lex.yy.c file.tab.c -lfl -ly
./exe < input.txt
```
