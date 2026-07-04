<h2><a href="https://codeforces.com/contest/2199/problem/C" target="_blank" rel="noopener noreferrer">2199C — Minesweeper</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | Kotlin 1.7 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2199C](https://codeforces.com/contest/2199/problem/C) |

## Topics
`*special` `constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Minesweeper</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You need to construct a field for the game "Minesweeper" consisting of $$$2$$$ rows and several columns. Each cell must either be empty or contain a mine. We say that two cells are <span class="tex-font-style-it">neighboring</span> if they <span class="tex-font-style-bf">share a side and/or a corner</span>.</p><p>The field you are constructing must satisfy the following constraints:</p><ul> <li> each empty cell must be neighboring at most one mine; </li><li> the number of empty cells that have a neighboring cell with a mine is equal to $$$k$$$; </li><li> among all suitable fields, the number of columns must be the minimum possible. </li></ul><p>Construct such a field or report that it is impossible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>Each test case consists of one line containing one integer $$$k$$$ ($$$1 \le k \le 100$$$) — the required number of empty cells which have a neighboring cell with a mine.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the answer as follows:</p><ul> <li> if it is impossible to construct a field that satisfies all constraints, print <span class="tex-font-style-tt">NO</span>; </li><li> otherwise, on the first line print <span class="tex-font-style-tt">YES</span>, and on the second line print an integer $$$n$$$, where $$$n$$$ is the minimum number of columns in the field. On the third and fourth lines, print the description of the field itself. The description of each row of the field must consist of $$$n$$$ characters, each of which is either a dot "<span class="tex-font-style-tt">.</span>" (empty cell) or an asterisk "<span class="tex-font-style-tt">*</span>" (mine). If there are multiple suitable fields, output any of them. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009448269761395494" id="id0006251323582478874" class="input-output-copier">Copy</div></div><pre id="id009448269761395494"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">8</div><div class="test-example-line test-example-line-even test-example-line-4">10</div><div class="test-example-line test-example-line-odd test-example-line-5">9</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007370267565291932" id="id007027076428569277" class="input-output-copier">Copy</div></div><pre id="id007370267565291932">YES
1
*
.
NO
YES
5
*....
...*.
YES
6
.*..*.
......
NO
</pre></div></div></div>