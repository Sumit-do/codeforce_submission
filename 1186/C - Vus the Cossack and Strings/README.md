<h2><a href="https://codeforces.com/contest/1186/problem/C" target="_blank" rel="noopener noreferrer">1186C — Vus the Cossack and Strings</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1186C](https://codeforces.com/contest/1186/problem/C) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Vus the Cossack and Strings</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vus the Cossack has two binary strings, that is, strings that consist only of "<span class="tex-font-style-tt">0</span>" and "<span class="tex-font-style-tt">1</span>". We call these strings $$$a$$$ and $$$b$$$. It is known that $$$|b| \leq |a|$$$, that is, the length of $$$b$$$ is at most the length of $$$a$$$.</p><p>The Cossack considers every substring of length $$$|b|$$$ in string $$$a$$$. Let's call this substring $$$c$$$. He matches the corresponding characters in $$$b$$$ and $$$c$$$, after which he counts the number of positions where the two strings are different. We call this function $$$f(b, c)$$$.</p><p>For example, let $$$b = 00110$$$, and $$$c = 11000$$$. In these strings, the first, second, third and fourth positions are different.</p><p>Vus the Cossack counts the number of such substrings $$$c$$$ such that $$$f(b, c)$$$ is <span class="tex-font-style-bf">even</span>.</p><p>For example, let $$$a = 01100010$$$ and $$$b = 00110$$$. $$$a$$$ has four substrings of the length $$$|b|$$$: $$$01100$$$, $$$11000$$$, $$$10001$$$, $$$00010$$$. </p><ul><li> $$$f(00110, 01100) = 2$$$;</li><li> $$$f(00110, 11000) = 4$$$;</li><li> $$$f(00110, 10001) = 4$$$;</li><li> $$$f(00110, 00010) = 1$$$.</li></ul> <p>Since in three substrings, $$$f(b, c)$$$ is even, the answer is $$$3$$$.</p><p>Vus can not find the answer for big strings. That is why he is asking you to help him.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a binary string $$$a$$$ ($$$1 \leq |a| \leq 10^6$$$) — the first string.</p><p>The second line contains a binary string $$$b$$$ ($$$1 \leq |b| \leq |a|$$$) — the second string.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one number — the answer.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007273805119959955" id="id001685199653302889" class="input-output-copier">Copy</div></div><pre id="id007273805119959955">01100010
00110
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004191247763153194" id="id0021165489534715787" class="input-output-copier">Copy</div></div><pre id="id004191247763153194">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001866316817093805" id="id009077251052361182" class="input-output-copier">Copy</div></div><pre id="id001866316817093805">1010111110
0110
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007662913341420446" id="id007486969148537348" class="input-output-copier">Copy</div></div><pre id="id007662913341420446">4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first example is explained in the legend.</p><p>In the second example, there are five substrings that satisfy us: $$$1010$$$, $$$0101$$$, $$$1111$$$, $$$1111$$$.</p></div>