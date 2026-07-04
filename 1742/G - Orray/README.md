<h2><a href="https://codeforces.com/contest/1742/problem/G" target="_blank" rel="noopener noreferrer">1742G — Orray</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1742G](https://codeforces.com/contest/1742/problem/G) |

## Topics
`bitmasks` `brute force` `greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">G. Orray</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ nonnegative integers. </p><p>Let's define the prefix OR array $$$b$$$ as the array $$$b_i = a_1~\mathsf{OR}~a_2~\mathsf{OR}~\dots~\mathsf{OR}~a_i$$$, where $$$\mathsf{OR}$$$ represents the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#OR">bitwise OR operation</a>. In other words, the array $$$b$$$ is formed by computing the $$$\mathsf{OR}$$$ of every prefix of $$$a$$$.</p><p>You are asked to rearrange the elements of the array $$$a$$$ in such a way that its prefix OR array is lexicographically maximum.</p><p>An array $$$x$$$ is lexicographically greater than an array $$$y$$$ if in the first position where $$$x$$$ and $$$y$$$ differ, $$$x_i  \gt  y_i$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. The description of test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 2 \cdot 10^5$$$) — the length of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ <span class="tex-font-style-bf">nonnegative</span> integers $$$a_1, \ldots, a_n$$$ ($$$0 \leq a_i \leq 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print $$$n$$$ integers — any rearrangement of the array $$$a$$$ that obtains the lexicographically maximum prefix OR array.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004713336787920126" id="id006752760416083049" class="input-output-copier">Copy</div></div><pre id="id004713336787920126"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 4 8</div><div class="test-example-line test-example-line-even test-example-line-2">7</div><div class="test-example-line test-example-line-even test-example-line-2">5 1 2 3 4 5 5</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">1 101</div><div class="test-example-line test-example-line-even test-example-line-4">6</div><div class="test-example-line test-example-line-even test-example-line-4">2 3 4 2 3 4</div><div class="test-example-line test-example-line-odd test-example-line-5">8</div><div class="test-example-line test-example-line-odd test-example-line-5">1 4 2 3 4 5 7 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007350203035234792" id="id0005299378828552104" class="input-output-copier">Copy</div></div><pre id="id007350203035234792">8 4 2 1 
5 2 1 3 4 5 5 
101 1 
4 3 2 2 3 4 
7 1 4 2 3 4 5 1 
</pre></div></div></div>