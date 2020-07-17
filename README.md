<h1 align="center">Welcome to simple-vm 👋</h1>
<p>
  <a href="#" target="_blank">
    <img alt="License: MIT" src="https://img.shields.io/badge/License-MIT-yellow.svg" />
  </a>
  <a href="https://twitter.com/WilgnneK" target="_blank">
    <img alt="Twitter: WilgnneK" src="https://img.shields.io/twitter/follow/WilgnneK.svg?style=social" />
  </a>
</p>

> A simple stack-based virtual machine created for educational porposes

### 🏠 [Homepage](https://github.com/Wilgnne/simple-vm)

### The Instruction Set

```s
PSH 5       ; pushes 5 to the stack
PSH 10      ; pushes 10 to the stack
ADD         ; pops two values on top of the stack, adds them pushes to stack
POP         ; pops the value on the stack, will also print it for debugging
SET A 0     ; sets register A to 0
HLT         ; stop the program
```

## Requirements

You'll need a few bits of software to compile the VM:

- clang, gcc, - some C compiler
- make - GNU make

## Usage

```sh
make all && ./ss-vm.out
```

## Author

👤 **Wilgnne Khawan**

* Website: https://wilgnne.github.io/
* Twitter: [@WilgnneK](https://twitter.com/WilgnneK)
* Github: [@Wilgnne](https://github.com/Wilgnne)
* LinkedIn: [@wilgnne](https://linkedin.com/in/wilgnne)

## 🤝 Contributing

Contributions, issues and feature requests are welcome!<br />Feel free to check [issues page](https://github.com/Wilgnne/simple-vm/issues). 

## Show your support

Give a ⭐️ if this project helped you!

***
_This README was generated with ❤️ by [readme-md-generator](https://github.com/kefranabg/readme-md-generator)_
