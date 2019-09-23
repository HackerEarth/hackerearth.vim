# hackerearth.vim

HackerEarth Vim plugin can be used to compile and run code directly from vim editor. This plugin is built using [HackerEarth API](http://developer.hackerearth.com/).

## QUICK INSTALL

1. Download the plugin.</li>
2. Copy the hackerearth.vim file to `$HOME/.vim/plugin`.
3. Register a new client key from [http://www.hackerearth.com/api/register](http://www.hackerearth.com/api/register).
4. In your `.vimrc` file enter the following line:

    ```sh
    let g:HackerEarthApiClientKey = "<api-client-key>"
    ```

## COMMAND SHORTCUTS

1. To run: <kbd>ctrl</kbd> + <kbd>h</kbd> <kbd>r</kbd>
2. To compile: <kbd>ctrl</kbd> + <kbd>h</kbd> <kbd>c</kbd>
3. For help: <kbd>ctrl</kbd> + <kbd>h</kbd> <kbd>h</kbd>

## COMMANDS

To run:

```sh
:Hrun -s=source.cpp, -i=input.txt, -o=output.txt
```

To compile:

```sh
:Hcompile -s=source.cpp, -i=input.txt, -o=output.txt
```

For help:

```sh
:Hhelp
```

Arguments:

- -s: source file, optional; default value is currently opened file in vim
- -i: input file, optional; give input to your programme from this file
- -o: output file, optional; use this if you want to save the output of your programme
- -t: time limit, optional
- -m: memory limit, optional

> Note: File paths can be both absolute and relative(relative to system current working directory).

> Tip: To autocomplete file path, use space after `=` and press <kbd>TAB</kbd>.

### INFO

- Supported programming languages: C, CPP, CPP11, CLOJURE, JAVA, JAVASCRIPT, HASKELL, PERL, PHP, PYTHON, RUBY

> Note: The plugin will not work without HackerEarth API client key.
