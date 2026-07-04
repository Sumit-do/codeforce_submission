<h2><a href="https://codeforces.com/contest/1461/problem/B" target="_blank" rel="noopener noreferrer">1461B — Find the Spruce</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1461B](https://codeforces.com/contest/1461/problem/B) |

## Topics
`brute force` `dp` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Find the Spruce</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Holidays are coming up really soon. Rick realized that it's time to think about buying a traditional spruce tree. But Rick doesn't want real trees to get hurt so he decided to find some in an $$$n \times m$$$ matrix consisting of "<span class="tex-font-style-tt">*</span>" and "<span class="tex-font-style-tt">.</span>".</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/da2453601cf083c0bb8040496806e7769bacbd2a.png" style="zoom: 20.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>To find every spruce first let's define what a spruce in the matrix is. A set of matrix cells is called a spruce of height $$$k$$$ with origin at point $$$(x, y)$$$ if:</p><ul> <li> All cells in the set contain an "<span class="tex-font-style-tt">*</span>". </li><li> For each $$$1 \le i \le k$$$ all cells with the row number $$$x+i-1$$$ and columns in range $$$[y - i + 1, y + i - 1]$$$ must be a part of the set. All other cells cannot belong to the set. </li></ul> <p>Examples of correct and incorrect spruce trees:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/c6d382429ea6cbc6c8c0cde9819a0d98cc9c2a9f.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>Now Rick wants to know how many spruces his $$$n \times m$$$ matrix contains. Help Rick solve this problem.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains one or more test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10$$$).</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 500$$$) — matrix size.</p><p>Next $$$n$$$ lines of each test case contain $$$m$$$ characters $$$c_{i, j}$$$ — matrix contents. It is guaranteed that $$$c_{i, j}$$$ is either a "<span class="tex-font-style-tt">.</span>" or an "<span class="tex-font-style-tt">*</span>".</p><p>It is guaranteed that the sum of $$$n \cdot m$$$ over all test cases does not exceed $$$500^2$$$ ($$$\sum n \cdot m \le 500^2$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print single integer — the total number of spruces in the matrix.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007676729483262855" id="id00446943910407992" class="input-output-copier">Copy</div></div><pre id="id007676729483262855">4
2 3
.*.
***
2 3
.*.
**.
4 5
.***.
*****
*****
*.*.*
5 7
..*.*..
.*****.
*******
.*****.
..*.*..
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003652573317257721" id="id0018718535367432" class="input-output-copier">Copy</div></div><pre id="id003652573317257721">5
3
23
34
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case the first spruce of height $$$2$$$ has its origin at point $$$(1, 2)$$$, the second spruce of height $$$1$$$ has its origin at point $$$(1, 2)$$$, the third spruce of height $$$1$$$ has its origin at point $$$(2, 1)$$$, the fourth spruce of height $$$1$$$ has its origin at point $$$(2, 2)$$$, the fifth spruce of height $$$1$$$ has its origin at point $$$(2, 3)$$$.</p><p>In the second test case the first spruce of height $$$1$$$ has its origin at point $$$(1, 2)$$$, the second spruce of height $$$1$$$ has its origin at point $$$(2, 1)$$$, the third spruce of height $$$1$$$ has its origin at point $$$(2, 2)$$$.</p></div>