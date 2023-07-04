# classified
[![Build Status](https://travis-ci.org/ddosnikgit/ext-classified.svg?branch=main)](https://travis-ci.org/ddosnikgit/ext-classified)

A simple extension for PHP to work with strings.

# Building
```
git clone https://github.com/ddosnikgit/ext-classified.git
cd ext-classified
phpize
./configure --enable-classified
make && make test && sudo make install
```

# Usage

The extension adds only one (for now) new PHP function:

``str_to_center(string $string = "") : string``
