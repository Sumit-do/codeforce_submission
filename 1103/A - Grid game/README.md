<h2><a href="https://codeforces.com/contest/1103/problem/A" target="_blank" rel="noopener noreferrer">1103A — Grid game</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1103A](https://codeforces.com/contest/1103/problem/A) |

## Topics
`constructive algorithms` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Grid game</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a 4x4 grid. You play a game — there is a sequence of tiles, each of them is either 2x1 or 1x2. Your task is to consequently place all tiles from the given sequence in the grid. When tile is placed, each cell which is located in fully occupied row or column is deleted (cells are deleted at the same time independently). You can place tile in the grid at any position, the only condition is that tiles (and tile parts) should not overlap. Your goal is to proceed all given figures and avoid crossing at any time.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains a string $$$s$$$ consisting of zeroes and ones ($$$1 \le |s| \le 1000$$$). Zero describes vertical tile, one describes horizontal tile.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$|s|$$$ lines — for each tile you should output two positive integers $$$r,c$$$, not exceeding $$$4$$$, representing numbers of smallest row and column intersecting with it.</p><p>If there exist multiple solutions, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004277891230033989" id="id001870479721101328" class="input-output-copier">Copy</div></div><pre id="id004277891230033989">010
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006257684533665809" id="id005696032040529851" class="input-output-copier">Copy</div></div><pre id="id006257684533665809">1 1
1 2
1 4</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Following image illustrates the example after placing all three tiles: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/8e0e2831e6907f46111d6a8ee651660aa6324eda.png" style="max-width: 100.0%;max-height: 100.0%;" width="378px"> </center> Then the first row is deleted: <center> <img class="tex-graphics" src="https://espresso.codeforces.com/58a63f52929704b4be8d8f028caaf51565d9dfd1.png" style="max-width: 100.0%;max-height: 100.0%;" width="378px"> </center></div>