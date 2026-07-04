<h2><a href="https://codeforces.com/contest/1988/problem/C" target="_blank" rel="noopener noreferrer">1988C — Increasing Sequence with Fixed OR</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1988C](https://codeforces.com/contest/1988/problem/C) |

## Topics
`bitmasks` `constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Increasing Sequence with Fixed OR</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive integer $$$n$$$. Find the <span class="tex-font-style-bf">longest</span> sequence of positive integers $$$a=[a_1,a_2,\ldots,a_k]$$$ that satisfies the following conditions, and print the sequence:</p><ul> <li> $$$a_i\le n$$$ for all $$$1\le i\le k$$$. </li><li> $$$a$$$ is strictly increasing. That is, $$$a_i \gt a_{i-1}$$$ for all $$$2\le i\le k$$$. </li><li> $$$a_i\,|\,a_{i-1}=n$$$ for all $$$2\le i\le k$$$, where $$$|$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#OR">bitwise OR operation</a>. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). Description of the test cases follows.</p><p>The only line of each test case contains one integer $$$n$$$ ($$$1\le n\le 10^{18}$$$).</p><p>It's guaranteed that the sum of lengths of the longest valid sequences does not exceed $$$5\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, print two lines. In the first line, print the length of your constructed sequence, $$$k$$$. In the second line, print $$$k$$$ positive integers, denoting the sequence. If there are multiple longest sequences, you can print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0005202314187319135" id="id00869458880776557" class="input-output-copier">Copy</div></div><pre id="id0005202314187319135"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-odd test-example-line-3">14</div><div class="test-example-line test-example-line-even test-example-line-4">23</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005615517275516785" id="id009475378792435815" class="input-output-copier">Copy</div></div><pre id="id005615517275516785">1
1
3
1 2 3
4
4 10 12 14
5
7 18 21 22 23</pre></div></div></div>