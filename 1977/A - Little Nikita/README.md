<h2><a href="https://codeforces.com/contest/1977/problem/A" target="_blank" rel="noopener noreferrer">1977A — Little Nikita</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1977A](https://codeforces.com/contest/1977/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Little Nikita</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The little boy Nikita was given some cubes as a present. He decided to build a tower out of them.</p><p>Initially, the tower doesn't have any cubes. In one move, Nikita either puts exactly $$$1$$$ cube on top of the tower or removes exactly $$$1$$$ cube from the top of the tower. Is it possible that after $$$n$$$ moves, the resulting tower has exactly $$$m$$$ cubes?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line of input contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "Yes" (without quotes) if Nikita can obtain a tower with $$$m$$$ cubes, and "No" (without quotes) otherwise.</p><p>You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0036312192574041013" id="id003585827448252932" class="input-output-copier">Copy</div></div><pre id="id0036312192574041013"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">3 3</div><div class="test-example-line test-example-line-even test-example-line-2">2 4</div><div class="test-example-line test-example-line-odd test-example-line-3">5 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005062946202014208" id="id0007336580051217123" class="input-output-copier">Copy</div></div><pre id="id005062946202014208">Yes
No
Yes
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, Nikita can put $$$1$$$ cube on top of the tower $$$3$$$ times in a row, so the answer is "Yes".</p><p>In the second test case, Nikita can only end up with either a tower with no blocks or a tower with $$$2$$$ blocks, so the answer is "No".</p></div>