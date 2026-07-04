<h2><a href="https://codeforces.com/contest/1437/problem/B" target="_blank" rel="noopener noreferrer">1437B — Reverse Binary Strings</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1437B](https://codeforces.com/contest/1437/problem/B) |

## Topics
`constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Reverse Binary Strings</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$s$$$ of even length $$$n$$$. String $$$s$$$ is binary, in other words, consists only of <span class="tex-font-style-tt">0</span>'s and <span class="tex-font-style-tt">1</span>'s.</p><p>String $$$s$$$ has exactly $$$\frac{n}{2}$$$ zeroes and $$$\frac{n}{2}$$$ ones ($$$n$$$ is even).</p><p>In one operation you can reverse any substring of $$$s$$$. A substring of a string is a contiguous subsequence of that string.</p><p>What is the minimum number of operations you need to make string $$$s$$$ <span class="tex-font-style-it">alternating</span>? A string is alternating if $$$s_i \neq s_{i + 1}$$$ for all $$$i$$$. There are two types of alternating strings in general: <span class="tex-font-style-tt">01010101...</span> or <span class="tex-font-style-tt">10101010...</span></p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 10^5$$$; $$$n$$$ is even) — the length of string $$$s$$$.</p><p>The second line of each test case contains a binary string $$$s$$$ of length $$$n$$$ ($$$s_i \in$$$ {<span class="tex-font-style-tt">0</span>, <span class="tex-font-style-tt">1</span>}). String $$$s$$$ has exactly $$$\frac{n}{2}$$$ zeroes and $$$\frac{n}{2}$$$ ones.</p><p>It's guaranteed that the total sum of $$$n$$$ over test cases doesn't exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the minimum number of operations to make $$$s$$$ alternating.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id000396231049732918" id="id0029011086844084166" class="input-output-copier">Copy</div></div><pre id="id000396231049732918">3
2
10
4
0110
8
11101000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005083874675454335" id="id008196209027727117" class="input-output-copier">Copy</div></div><pre id="id005083874675454335">0
1
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, string <span class="tex-font-style-tt">10</span> is already alternating.</p><p>In the second test case, we can, for example, reverse the last two elements of $$$s$$$ and get: <span class="tex-font-style-tt">01<span class="tex-font-style-underline">10</span></span> $$$\rightarrow$$$ <span class="tex-font-style-tt">0101</span>.</p><p>In the third test case, we can, for example, make the following two operations: </p><ol> <li> <span class="tex-font-style-tt">1<span class="tex-font-style-underline">11010</span>00</span> $$$\rightarrow$$$ <span class="tex-font-style-tt">10101100</span>; </li><li> <span class="tex-font-style-tt">10101<span class="tex-font-style-underline">10</span>0</span> $$$\rightarrow$$$ <span class="tex-font-style-tt">10101010</span>. </li></ol></div>