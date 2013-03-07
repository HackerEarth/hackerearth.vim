# hackerearth.vim

<p>HackerEarth Vim plugin to compile and run code from the comfort of your favorite editor.
<br>The plugin is built using <a target="_new" href="http://developer.hackerearth.com/">HackerEarth Api</a>.</p>

QUICK INSTALL<br>
==============
<ul>
<li>Download the plugin.</li>
<li>Copy the hackerearth.vim file to <pre>$HOME/.vim/plugin</pre></li>
<li>Register a new client key from <a target="_new" href="http://www.hackerearth.com/api/register/">http://www.hackerearth.com/api/register</a></li>
<li>In your .vimrc file enter the following line:<pre>let g:HackerEarthApiClientKey = "&lt;new-client-key&gt;"</pre></li>
</ul>

COMMAND SHORTCUTS<br>
=================
<ul>
<li>Open a file in vim editor.</li>
<ul>
<li>To run: <b>ctrl+h r</b></li>
<li>To compile: <b>ctrl+h c</b></li>
<li>For help: <b>ctrl+h h</b></li>
</ul>
</ul>

COMMANDS<br>
========
<p>
To run:<pre>:Hrun -s=source.cpp, -i=input.txt, -o=output.txt</pre>
To compile:<pre>:Hcompile -s=source.cpp, -i=input.txt, -o=output.txt</pre>
For help:<pre>:Hhelp</pre>
</p>
<p>Arguments:
<ul>
<li>-s: source file, optional; default value is currently openend file in vim</li>
<li>-i: input file, optionali; give input to your programme from this file</li>
<li>-o: output file, optional; use this if you want to save the output of your programme</li>
<li>-t: time limit, optional</li>
<li>-m: memory limit, optional</li>
</ul>
<b>Note*: </b>File paths can be both absolute and relative(relative to system current working directory).<br>
<b>Tip*: </b>To autocomplete file path, use space after '=' and press TAB.
</p>

INFO<br>
====
<ul>
<li>Supported programming languages: C, CPP, CPP11, CLOJURE, JAVA, JAVASCRIPT, HASKELL, PERL, PHP, PYTHON, RUBY</li>
</ul>
<b>Note*:</b> The plugin will not work without hackerearth api client key.
