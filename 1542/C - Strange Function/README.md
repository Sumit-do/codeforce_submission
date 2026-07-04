<h2><a href="https://codeforces.com/contest/1542/problem/C" target="_blank" rel="noopener noreferrer">1542C — Strange Function</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1542C](https://codeforces.com/contest/1542/problem/C) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Strange Function</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let $$$f(i)$$$ denote the minimum positive integer $$$x$$$ such that $$$x$$$ is <span class="tex-font-style-bf">not</span> a divisor of $$$i$$$.</p><p>Compute $$$\sum_{i=1}^n f(i)$$$ modulo $$$10^9+7$$$. In other words, compute $$$f(1)+f(2)+\dots+f(n)$$$ modulo $$$10^9+7$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\leq t\leq 10^4$$$), the number of test cases. Then $$$t$$$ cases follow.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1\leq n\leq 10^{16}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer $$$ans$$$, where $$$ans=\sum_{i=1}^n f(i)$$$ modulo $$$10^9+7$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0046974474743180894" id="id006767663289793063" class="input-output-copier">Copy</div></div><pre id="id0046974474743180894">6
1
2
3
4
10
10000000000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007857566596063106" id="id0030040028496926585" class="input-output-copier">Copy</div></div><pre id="id007857566596063106">2
5
7
10
26
366580019
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the fourth test case $$$n=4$$$, so $$$ans=f(1)+f(2)+f(3)+f(4)$$$.</p><ul> <li> $$$1$$$ is a divisor of $$$1$$$ but $$$2$$$ isn't, so $$$2$$$ is the minimum positive integer that isn't a divisor of $$$1$$$. Thus, $$$f(1)=2$$$. </li><li> $$$1$$$ and $$$2$$$ are divisors of $$$2$$$ but $$$3$$$ isn't, so $$$3$$$ is the minimum positive integer that isn't a divisor of $$$2$$$. Thus, $$$f(2)=3$$$. </li><li> $$$1$$$ is a divisor of $$$3$$$ but $$$2$$$ isn't, so $$$2$$$ is the minimum positive integer that isn't a divisor of $$$3$$$. Thus, $$$f(3)=2$$$. </li><li> $$$1$$$ and $$$2$$$ are divisors of $$$4$$$ but $$$3$$$ isn't, so $$$3$$$ is the minimum positive integer that isn't a divisor of $$$4$$$. Thus, $$$f(4)=3$$$. </li></ul><p>Therefore, $$$ans=f(1)+f(2)+f(3)+f(4)=2+3+2+3=10$$$.</p></div>