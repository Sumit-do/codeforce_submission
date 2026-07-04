<h2><a href="https://codeforces.com/contest/1630/problem/A" target="_blank" rel="noopener noreferrer">1630A — And Matching</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1630A](https://codeforces.com/contest/1630/problem/A) |

## Topics
`bitmasks` `constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">A. And Matching</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a set of $$$n$$$ ($$$n$$$ is always a power of $$$2$$$) elements containing all integers $$$0, 1, 2, \ldots, n-1$$$ exactly once.</p><p>Find $$$\frac{n}{2}$$$ pairs of elements such that:</p><ul> <li> Each element in the set is in exactly one pair. </li><li> The sum over all pairs of the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND</a> of its elements must be exactly equal to $$$k$$$. Formally, if $$$a_i$$$ and $$$b_i$$$ are the elements of the $$$i$$$-th pair, then the following must hold: $$$$$$\sum_{i=1}^{n/2}{a_i \& b_i} = k,$$$$$$ where $$$\&$$$ denotes the bitwise AND operation. </li></ul><p>If there are many solutions, print any of them, if there is no solution, print $$$-1$$$ instead.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 400$$$) — the number of test cases. Description of the test cases follows.</p><p>Each test case consists of a single line with two integers $$$n$$$ and $$$k$$$ ($$$4 \leq n \leq 2^{16}$$$, $$$n$$$ is a power of $$$2$$$, $$$0 \leq k \leq n-1$$$).</p><p>The sum of $$$n$$$ over all test cases does not exceed $$$2^{16}$$$. All test cases in each individual input will be pairwise <span class="tex-font-style-bf">different</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if there is no solution, print a single line with the integer $$$-1$$$.</p><p>Otherwise, print $$$\frac{n}{2}$$$ lines, the $$$i$$$-th of them must contain $$$a_i$$$ and $$$b_i$$$, the elements in the $$$i$$$-th pair. </p><p>If there are many solutions, print any of them. Print the pairs and the elements in the pairs in any order.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006396106850634269" id="id009692382191290259" class="input-output-copier">Copy</div></div><pre id="id006396106850634269"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">4 0</div><div class="test-example-line test-example-line-even test-example-line-2">4 1</div><div class="test-example-line test-example-line-odd test-example-line-3">4 2</div><div class="test-example-line test-example-line-even test-example-line-4">4 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0014502341424723808" id="id006666160550542657" class="input-output-copier">Copy</div></div><pre id="id0014502341424723808">0 3
1 2
0 2
1 3
0 1
2 3
-1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test, $$$(0\&3)+(1\&2) = 0$$$.</p><p>In the second test, $$$(0\&2)+(1\&3) = 1$$$.</p><p>In the third test, $$$(0\&1)+(2\&3) = 2$$$.</p><p>In the fourth test, there is no solution.</p></div>