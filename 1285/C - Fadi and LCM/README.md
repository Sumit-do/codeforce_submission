<h2><a href="https://codeforces.com/contest/1285/problem/C" target="_blank" rel="noopener noreferrer">1285C — Fadi and LCM</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1285C](https://codeforces.com/contest/1285/problem/C) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Fadi and LCM</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Today, Osama gave Fadi an integer $$$X$$$, and Fadi was wondering about the minimum possible value of $$$max(a, b)$$$ such that $$$LCM(a, b)$$$ equals $$$X$$$. Both $$$a$$$ and $$$b$$$ should be positive integers.</p><p>$$$LCM(a, b)$$$ is the smallest positive integer that is divisible by both $$$a$$$ and $$$b$$$. For example, $$$LCM(6, 8) = 24$$$, $$$LCM(4, 12) = 12$$$, $$$LCM(2, 3) = 6$$$.</p><p>Of course, Fadi immediately knew the answer. Can you be just like Fadi and find any such pair?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only line contains an integer $$$X$$$ ($$$1 \le X \le 10^{12}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two positive integers, $$$a$$$ and $$$b$$$, such that the value of $$$max(a, b)$$$ is minimum possible and $$$LCM(a, b)$$$ equals $$$X$$$. If there are several possible such pairs, you can print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007703722304540747" id="id006137664897237544" class="input-output-copier">Copy</div></div><pre id="id007703722304540747">2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004390119763644841" id="id0021343287268660327" class="input-output-copier">Copy</div></div><pre id="id004390119763644841">1 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009014504470886169" id="id009241961367546133" class="input-output-copier">Copy</div></div><pre id="id009014504470886169">6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0046179422507637324" id="id003218750076905572" class="input-output-copier">Copy</div></div><pre id="id0046179422507637324">2 3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0004428152564576893" id="id009871936306527508" class="input-output-copier">Copy</div></div><pre id="id0004428152564576893">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00549405075764925" id="id0021168312635054531" class="input-output-copier">Copy</div></div><pre id="id00549405075764925">1 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004763130491464105" id="id005594792517336102" class="input-output-copier">Copy</div></div><pre id="id004763130491464105">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006275538321495286" id="id006950580189205522" class="input-output-copier">Copy</div></div><pre id="id006275538321495286">1 1
</pre></div></div></div>