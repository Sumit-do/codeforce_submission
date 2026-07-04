<h2><a href="https://codeforces.com/contest/1860/problem/A" target="_blank" rel="noopener noreferrer">1860A — Not a Substring</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1860A](https://codeforces.com/contest/1860/problem/A) |

## Topics
`constructive algorithms` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Not a Substring</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A bracket sequence is a string consisting of characters '<span class="tex-font-style-tt">(</span>' and/or '<span class="tex-font-style-tt">)</span>'. A regular bracket sequence is a bracket sequence that can be transformed into a correct arithmetic expression by inserting characters '<span class="tex-font-style-tt">1</span>' and '<span class="tex-font-style-tt">+</span>' between the original characters of the sequence. For example:</p><ul> <li> bracket sequences "<span class="tex-font-style-tt">()()</span>" and "<span class="tex-font-style-tt">(())</span>" are regular (they can be transformed into "<span class="tex-font-style-tt">(1)+(1)</span>" and "<span class="tex-font-style-tt">((1+1)+1)</span>", respectively); </li><li> bracket sequences "<span class="tex-font-style-tt">)(</span>", "<span class="tex-font-style-tt">(</span>" and "<span class="tex-font-style-tt">)</span>" are not regular. </li></ul><p>You are given a bracket sequence $$$s$$$; let's define its length as $$$n$$$. Your task is to find a regular bracket sequence $$$t$$$ of length $$$2n$$$ such that $$$s$$$ <span class="tex-font-style-bf">does not</span> occur in $$$t$$$ as a <span class="tex-font-style-bf">contiguous substring</span>, or report that there is no such sequence.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The only line of each test case contains a string $$$s$$$ ($$$2 \le |s| \le 50$$$), consisting of characters "<span class="tex-font-style-tt">(</span>" and/or "<span class="tex-font-style-tt">)</span>".</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer to it. If there is no required regular bracket sequence, print <span class="tex-font-style-tt">NO</span> in a separate line. Otherwise, print <span class="tex-font-style-tt">YES</span> in the first line, and the required regular bracket sequence $$$t$$$ itself in the second line. If there are multiple answers — you may print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007690532259616721" id="id006659021667294828" class="input-output-copier">Copy</div></div><pre id="id007690532259616721"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">)(</div><div class="test-example-line test-example-line-even test-example-line-2">(()</div><div class="test-example-line test-example-line-odd test-example-line-3">()</div><div class="test-example-line test-example-line-even test-example-line-4">))()</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000020417141820281426" id="id0007771503591912221" class="input-output-copier">Copy</div></div><pre id="id000020417141820281426">YES
(())
YES
()()()
NO
YES
()(()())
</pre></div></div></div>