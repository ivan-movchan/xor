![xor](logo.png#gh-light-mode-only)
![xor](logo-dark.png#gh-dark-mode-only)

[English](README.md) / [Русский](README-RU.md)

A tiny console utility that performs XOR (eXclusive OR) bitwise operation on `stdin` (standard input stream) data byte by byte.

### Installation

#### Dependencies

* `gcc`, `clang` or any other C compiler;
* `make`.

Edit `Makefile` to match your local setup (compilers, libraries, etc.) if need.

#### Build instructions

```bash
$ make
$ sudo make install
```

### Usage

To perform XOR operation on `stdin` data:

```bash
$ xor value [< input_file [> output_file]]`
```

* `value` - a positive integer value;
* `< input_file` - transfer data from `input_file` to `stdin` (standard input stream);
* `> output_file` - transfer data from `stdout` (standard output stream) to `output_file`.

To display program version and exit:

```
$ xor -v
```

### Authors

xor is written by [Ivan Movchan](https://github.com/ivan-movchan).

### License

See [LICENSE](LICENSE) for copyright and licensing details.
