# push_swap

A 42 school project: sort a list of integers using two stacks (`a` and `b`) and a limited set of operations, printing the shortest sequence of moves possible.

## Requirements

- Linux or macOS
- `cc` (gcc or clang)
- `make`
- Bundled libraries in `lib/`: `libft` and `ft_printf` (built automatically)

## Build

```bash
make
```

This produces the `push_swap` executable. Other rules: `make clean`, `make fclean`, `make re`.

## Usage

```bash
./push_swap 3 2 5 1 4
```

Numbers can also be passed as a single string:

```bash
./push_swap "3 2 5 1 4"
```

The program prints the list of operations needed to sort stack `a` in ascending order, one per line.

- No arguments → prints nothing.
- Already sorted → prints nothing.
- Invalid input (non-integers, out of `int` range, duplicates) → prints `Error`.

## How it works

1. **Parsing** – arguments are split, validated and stored in stack `a` (a linked list).
2. **Check** – if `a` is already sorted, the program exits.
3. **Sorting** – numbers are moved between `a` and `b` using only these operations:

| Operation | Effect |
|-----------|--------|
| `sa` / `sb` / `ss` | Swap the first two elements of `a` / `b` / both |
| `pa` / `pb` | Push the top of `b` onto `a` / top of `a` onto `b` |
| `ra` / `rb` / `rr` | Rotate up: first element becomes last |
| `rra` / `rrb` / `rrr` | Rotate down: last element becomes first |

The goal is to end with all numbers sorted in `a` and `b` empty, using as few operations as possible.
