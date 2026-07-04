<h2><a href="https://codeforces.com/contest/1095/problem/C" target="_blank" rel="noopener noreferrer">1095C — Powers Of Two</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1095C](https://codeforces.com/contest/1095/problem/C) |

## Topics
`bitmasks` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Powers Of Two</div><div class="time-limit"><div class="property-title">time limit per test</div>4 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A positive integer $$$x$$$ is called a <span class="tex-font-style-it">power of two</span> if it can be represented as $$$x = 2^y$$$, where $$$y$$$ is a non-negative integer. So, the <span class="tex-font-style-it">powers of two</span> are $$$1, 2, 4, 8, 16, \dots$$$.</p><p>You are given two positive integers $$$n$$$ and $$$k$$$. Your task is to represent $$$n$$$ as the <span class="tex-font-style-bf">sum</span> of <span class="tex-font-style-bf">exactly</span> $$$k$$$ <span class="tex-font-style-it">powers of two</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line of the input contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 10^9$$$, $$$1 \le k \le 2 \cdot 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>If it is impossible to represent $$$n$$$ as the sum of $$$k$$$ powers of two, print <span class="tex-font-style-tt">NO</span>.</p><p>Otherwise, print <span class="tex-font-style-tt">YES</span>, and then print $$$k$$$ positive integers $$$b_1, b_2, \dots, b_k$$$ such that each of $$$b_i$$$ is a power of two, and $$$\sum \limits_{i = 1}^{k} b_i = n$$$. If there are multiple answers, you may print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002531726778738066" id="id008563258774997141" class="input-output-copier">Copy</div></div><pre id="id002531726778738066">9 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009843364230397155" id="id009902355172970364" class="input-output-copier">Copy</div></div><pre id="id009843364230397155">YES
1 2 2 4 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00616801212960718" id="id007952404608389733" class="input-output-copier">Copy</div></div><pre id="id00616801212960718">8 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000032601968566543515" id="id007163572898884353" class="input-output-copier">Copy</div></div><pre id="id000032601968566543515">YES
8 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0026217522048067265" id="id0003840623997514503" class="input-output-copier">Copy</div></div><pre id="id0026217522048067265">5 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005492550646163102" id="id004947954335854219" class="input-output-copier">Copy</div></div><pre id="id005492550646163102">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005130408083754664" id="id0005269144708352258" class="input-output-copier">Copy</div></div><pre id="id005130408083754664">3 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0032184498943847306" id="id004136906372607758" class="input-output-copier">Copy</div></div><pre id="id0032184498943847306">NO
</pre></div></div></div>