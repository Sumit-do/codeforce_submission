<h2><a href="https://codeforces.com/contest/2094/problem/F" target="_blank" rel="noopener noreferrer">2094F — Trulimero Trulicina</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2094F](https://codeforces.com/contest/2094/problem/F) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">F. Trulimero Trulicina</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Trulicina gives you integers $$$n$$$, $$$m$$$, and $$$k$$$. It is guaranteed that $$$k\geq 2$$$ and $$$n\cdot m\equiv 0 \pmod{k}$$$.</p><p>Output a $$$n$$$ by $$$m$$$ grid of integers such that each of the following criteria hold:</p><ul> <li> Each integer in the grid is between $$$1$$$ and $$$k$$$, inclusive. </li><li> Each integer from $$$1$$$ to $$$k$$$ appears an equal number of times. </li><li> No two cells that share an edge have the same integer. </li></ul><p>It can be shown that such a grid always exists. If there are multiple solutions, output any.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains three integers $$$n$$$, $$$m$$$, and $$$k$$$ ($$$2 \leq n\cdot m\leq 2\cdot 10^5, 2\leq k\leq n\cdot m, n\cdot m\equiv 0 \pmod{k})$$$.</p><p>It is guaranteed that the sum of $$$n\cdot m$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$n$$$ lines, each containing $$$m$$$ integers that satisfy the criteria. If there are multiple solutions, output any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023726572962807968" id="id007173043241665792" class="input-output-copier">Copy</div></div><pre id="id0023726572962807968"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">2 2 2</div><div class="test-example-line test-example-line-even test-example-line-2">3 4 6</div><div class="test-example-line test-example-line-odd test-example-line-3">5 5 25</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007071685831223969" id="id0003363177815972396" class="input-output-copier">Copy</div></div><pre id="id007071685831223969">1 2
2 1
1 6 1 6
2 5 2 5
3 4 3 4
17 2 12 25 14
3 1 6 19 11
8 20 23 24 4
9 10 5 13 21
22 7 15 18 16
</pre></div></div></div>