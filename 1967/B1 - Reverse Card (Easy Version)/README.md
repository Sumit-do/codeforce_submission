<h2><a href="https://codeforces.com/contest/1967/problem/B1" target="_blank" rel="noopener noreferrer">1967B1 — Reverse Card (Easy Version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1967B1](https://codeforces.com/contest/1967/problem/B1) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B1. Reverse Card (Easy Version)</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">The two versions are different problems. You may want to read both versions. You can make hacks only if both versions are solved.</span></p><p>You are given two positive integers $$$n$$$, $$$m$$$.</p><p>Calculate the number of ordered pairs $$$(a, b)$$$ satisfying the following conditions:</p><ul> <li> $$$1\le a\le n$$$, $$$1\le b\le m$$$; </li><li> $$$a+b$$$ is a multiple of $$$b \cdot \gcd(a,b)$$$. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1\le t\le 10^4$$$). The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$, $$$m$$$ ($$$1\le n,m\le 2 \cdot 10^6$$$).</p><p>It is guaranteed that neither the sum of $$$n$$$ nor the sum of $$$m$$$ over all test cases exceeds $$$2 \cdot 10^6$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer: the number of valid pairs.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00999151894656891" id="id007822517264442531" class="input-output-copier">Copy</div></div><pre id="id00999151894656891"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 3</div><div class="test-example-line test-example-line-odd test-example-line-3">3 5</div><div class="test-example-line test-example-line-even test-example-line-4">10 8</div><div class="test-example-line test-example-line-odd test-example-line-5">100 1233</div><div class="test-example-line test-example-line-even test-example-line-6">1000000 1145141</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003937966568346719" id="id005132530828852332" class="input-output-copier">Copy</div></div><pre id="id003937966568346719">1
3
4
14
153
1643498
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, only $$$(1,1)$$$ satisfies the conditions.</p><p>In the fourth test case, $$$(1,1),(2,1),(2,2),(3,1),(4,1),(5,1),(6,1),(6,2),(6,3),(7,1),(8,1),(9,1),(10,1),(10,2)$$$ satisfy the conditions.</p></div>