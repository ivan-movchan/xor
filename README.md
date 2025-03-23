![xor](logo.png)

[English](README.md) / [Русский](README-RU.md)

A tiny utility that performs XOR (eXclusive OR) bitwise operation on `stdin` (console input stream) data byte by byte.

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
$ xor integer_value [< input_file [> output_file]]`
```

* `integer_value` - a positive integer value;
* `< input_file` - read data from `input_file` file and write into console (`stdin`);
* `> output_file` - write data from `stdout` (console output stream) to `output_file` file.

To display program version and exit:

```
$ xor -v
```

### Authors

xor is written by [Ivan Movchan](https://github.com/ivan-movchan).

### License

See [LICENSE](LICENSE) for copyright and licensing details.
