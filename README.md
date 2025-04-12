![xor](logo.png#gh-light-mode-only)
![xor](logo-dark.png#gh-dark-mode-only)

[English](README.md) / [Русский](README-RU.md)

**xor** is a tiny utility that performs XOR (eXclusive OR) bitwise operation
on text. That's all.

### Installation

Pre-compiled binaries for Windows and GNU/Linux systems are available
for download in ["Releases"](https://github.com/ivan-movchan/xor/releases).

For building from sources install any C compiler (GCC, Clang, etc.)
and GNU make, then edit `Makefile` if need and run `make`.
It is recommended to build in *NIX environment like MSYS2,
Windows Subsystem for Linux (WSL) or real *NIX system.

You can run `make install` to install xor and `make uninstall` to uninstall it.
(Actual for *NIX systems, root privileges are required.)

### Usage

```bash
$ xor [-v] value [< input_file [> output_file]]
```

* `value` — a positive integer value. Mandatory to be specified.
* `-v` — display program version and exit.
* `< input_file` — process data from `input_file`.
* `> output_file` — write XOR\'ed data to `output_file`.

### Authors

xor is written by [Ivan Movchan](https://github.com/ivan-movchan).

### Contributing

Want to make the project better?

* Feel free to fork the repository, improve the program and make a pull request
  to accept your code to the project. Read the source code
  for better understanding coding style
  (max. 80 symbols per line, 4 spaces indent, etc.).

* Do not hesitate to report bugs/crashes and suggest new ideas
  using ["Issues"](https://github.com/ivan-movchan/xor/issues)
  or by contacting the developer.

  Before reporting a bug/crash make sure you are using the latest
  program version — your problem may have been already fixed in latest version.
  When reporting a bug/crash, also tell the operating system version
  (i. e. *Windows 7 x64*) and error messages the program displays.

### History

See [CHANGELOG.md](CHANGELOG.md) for version history.

### License

xor is free software released under the terms of MIT License.
See [LICENSE](LICENSE) file for further details.
