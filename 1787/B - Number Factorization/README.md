<h2><a href="https://codeforces.com/contest/1787/problem/B" target="_blank" rel="noopener noreferrer">1787B — Number Factorization</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1787B](https://codeforces.com/contest/1787/problem/B) |

## Topics
`greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Number Factorization</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given an integer $$$n$$$.</p><p>Consider all pairs of integer arrays $$$a$$$ and $$$p$$$ of the same length such that $$$n = \prod a_i^{p_i}$$$ (i.e. $$$a_1^{p_1}\cdot a_2^{p_2}\cdot\ldots$$$) ($$$a_i \gt 1;p_i \gt 0$$$) and $$$a_i$$$ is the product of some (possibly one) <span class="tex-font-style-bf">distinct</span> prime numbers.</p><p>For example, for $$$n = 28 = 2^2\cdot 7^1 = 4^1 \cdot 7^1$$$ the array pair $$$a = [2, 7]$$$, $$$p = [2, 1]$$$ is correct, but the pair of arrays $$$a = [4, 7]$$$, $$$p = [1, 1]$$$ is not, because $$$4=2^2$$$ is a product of non-distinct prime numbers.</p><p>Your task is to find the maximum value of $$$\sum a_i \cdot p_i$$$ (i.e. $$$a_1\cdot p_1 + a_2\cdot p_2 + \ldots$$$) over all possible pairs of arrays $$$a$$$ and $$$p$$$. Note that you do not need to minimize or maximize the length of the arrays.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. </p><p>Each test case contains only one integer $$$n$$$ ($$$2 \le n \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the maximum value of $$$\sum a_i \cdot p_i$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008097981986501198" id="id008993782012121294" class="input-output-copier">Copy</div></div><pre id="id008097981986501198"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">100</div><div class="test-example-line test-example-line-even test-example-line-2">10</div><div class="test-example-line test-example-line-odd test-example-line-3">864</div><div class="test-example-line test-example-line-even test-example-line-4">130056192</div><div class="test-example-line test-example-line-odd test-example-line-5">1000000000</div><div class="test-example-line test-example-line-even test-example-line-6">2</div><div class="test-example-line test-example-line-odd test-example-line-7">999999018</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004871647872889595" id="id0042163975073402016" class="input-output-copier">Copy</div></div><pre id="id004871647872889595">20
10
22
118
90
2
333333009
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$100 = 10^2$$$ so that $$$a = [10]$$$, $$$p = [2]$$$ when $$$\sum a_i \cdot p_i$$$ hits the maximum value $$$10\cdot 2 = 20$$$. Also, $$$a = [100]$$$, $$$p = [1]$$$ does not work since $$$100$$$ is not made of distinct prime factors.</p><p>In the second test case, we can consider $$$10$$$ as $$$10^1$$$, so $$$a = [10]$$$, $$$p = [1]$$$. Notice that when $$$10 = 2^1\cdot 5^1$$$, $$$\sum a_i \cdot p_i = 7$$$.</p></div>