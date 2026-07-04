<h2><a href="https://codeforces.com/contest/1202/problem/A" target="_blank" rel="noopener noreferrer">1202A — You Are Given Two Binary Strings...</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1202A](https://codeforces.com/contest/1202/problem/A) |

## Topics
`bitmasks` `greedy`

---

## Problem Statement

<div class="header"><div class="title">A. You Are Given Two Binary Strings...</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two binary strings $$$x$$$ and $$$y$$$, which are binary representations of some two integers (let's denote these integers as $$$f(x)$$$ and $$$f(y)$$$). You can choose any integer $$$k \ge 0$$$, calculate the expression $$$s_k = f(x) + f(y) \cdot 2^k$$$ and write the binary representation of $$$s_k$$$ in <span class="tex-font-style-bf">reverse order</span> (let's denote it as $$$rev_k$$$). For example, let $$$x = 1010$$$ and $$$y = 11$$$; you've chosen $$$k = 1$$$ and, since $$$2^1 = 10_2$$$, so $$$s_k = 1010_2 + 11_2 \cdot 10_2 = 10000_2$$$ and $$$rev_k = 00001$$$.</p><p>For given $$$x$$$ and $$$y$$$, you need to choose such $$$k$$$ that $$$rev_k$$$ is <span class="tex-font-style-bf">lexicographically minimal</span> (read notes if you don't know what does "lexicographically" means).</p><p>It's guaranteed that, with given constraints, $$$k$$$ exists and is finite.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$T$$$ ($$$1 \le T \le 100$$$) — the number of queries.</p><p>Next $$$2T$$$ lines contain a description of queries: two lines per query. The first line contains one binary string $$$x$$$, consisting of no more than $$$10^5$$$ characters. Each character is either <span class="tex-font-style-tt">0</span> or <span class="tex-font-style-tt">1</span>.</p><p>The second line contains one binary string $$$y$$$, consisting of no more than $$$10^5$$$ characters. Each character is either <span class="tex-font-style-tt">0</span> or <span class="tex-font-style-tt">1</span>.</p><p>It's guaranteed, that $$$1 \le f(y) \le f(x)$$$ (where $$$f(x)$$$ is the integer represented by $$$x$$$, and $$$f(y)$$$ is the integer represented by $$$y$$$), both representations don't have any leading zeroes, the total length of $$$x$$$ over all queries doesn't exceed $$$10^5$$$, and the total length of $$$y$$$ over all queries doesn't exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$T$$$ integers (one per query). For each query print such $$$k$$$ that $$$rev_k$$$ is lexicographically minimal.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002581166610344132" id="id0034254230714646816" class="input-output-copier">Copy</div></div><pre id="id002581166610344132">4
1010
11
10001
110
1
1
1010101010101
11110000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005947616744082932" id="id0042079789660741385" class="input-output-copier">Copy</div></div><pre id="id005947616744082932">1
3
0
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first query was described in the legend.</p><p>In the second query, it's optimal to choose $$$k = 3$$$. The $$$2^3 = 1000_2$$$ so $$$s_3 = 10001_2 + 110_2 \cdot 1000_2 = 10001 + 110000 = 1000001$$$ and $$$rev_3 = 1000001$$$. For example, if $$$k = 0$$$, then $$$s_0 = 10111$$$ and $$$rev_0 = 11101$$$, but $$$rev_3 = 1000001$$$ is lexicographically smaller than $$$rev_0 = 11101$$$.</p><p>In the third query $$$s_0 = 10$$$ and $$$rev_0 = 01$$$. For example, $$$s_2 = 101$$$ and $$$rev_2 = 101$$$. And $$$01$$$ is lexicographically smaller than $$$101$$$.</p><p>The quote from Wikipedia: "To determine which of two strings of characters comes when arranging in <span class="tex-font-style-it">lexicographical order</span>, their first letters are compared. If they differ, then the string whose first letter comes earlier in the alphabet comes before the other string. If the first letters are the same, then the second letters are compared, and so on. If a position is reached where one string has no more letters to compare while the other does, then the first (shorter) string is deemed to come first in alphabetical order."</p></div>