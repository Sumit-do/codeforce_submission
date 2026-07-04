<h2><a href="https://codeforces.com/contest/1926/problem/E" target="_blank" rel="noopener noreferrer">1926E — Vlad and an Odd Ordering</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1926E](https://codeforces.com/contest/1926/problem/E) |

## Topics
`binary search` `bitmasks` `data structures` `dp` `implementation` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">E. Vlad and an Odd Ordering</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vladislav has $$$n$$$ cards numbered $$$1, 2, \dots, n$$$. He wants to lay them down in a row as follows: </p><ul> <li> First, he lays down all the odd-numbered cards from smallest to largest. </li><li> Next, he lays down all cards that are twice an odd number from smallest to largest (i.e. $$$2$$$ multiplied by an odd number). </li><li> Next, he lays down all cards that are $$$3$$$ times an odd number from smallest to largest (i.e. $$$3$$$ multiplied by an odd number). </li><li> Next, he lays down all cards that are $$$4$$$ times an odd number from smallest to largest (i.e. $$$4$$$ multiplied by an odd number). </li><li> And so on, until all cards are laid down. </li></ul> What is the $$$k$$$-th card he lays down in this process? Once Vladislav puts a card down, he cannot use that card again.</div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 5 \cdot 10^4$$$) — the number of test cases.</p><p>The only line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \leq k \leq n \leq 10^9$$$) — the number of cards Vlad has, and the position of the card you need to output.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the $$$k$$$-th card Vladislav lays down.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008541295936962338" id="id008877246663458581" class="input-output-copier">Copy</div></div><pre id="id008541295936962338"><div class="test-example-line test-example-line-even test-example-line-0">11</div><div class="test-example-line test-example-line-odd test-example-line-1">7 1</div><div class="test-example-line test-example-line-even test-example-line-2">7 2</div><div class="test-example-line test-example-line-odd test-example-line-3">7 3</div><div class="test-example-line test-example-line-even test-example-line-4">7 4</div><div class="test-example-line test-example-line-odd test-example-line-5">7 5</div><div class="test-example-line test-example-line-even test-example-line-6">7 6</div><div class="test-example-line test-example-line-odd test-example-line-7">7 7</div><div class="test-example-line test-example-line-even test-example-line-8">1 1</div><div class="test-example-line test-example-line-odd test-example-line-9">34 14</div><div class="test-example-line test-example-line-even test-example-line-10">84 19</div><div class="test-example-line test-example-line-odd test-example-line-11">1000000000 1000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0018886262031495704" id="id00564440132269122" class="input-output-copier">Copy</div></div><pre id="id0018886262031495704">1
3
5
7
2
6
4
1
27
37
536870912
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first seven test cases, $$$n=7$$$. Vladislav lays down the cards as follows: </p><ul> <li> First — all the odd-numbered cards in the order $$$1$$$, $$$3$$$, $$$5$$$, $$$7$$$. </li><li> Next — all cards that are twice an odd number in the order $$$2$$$, $$$6$$$. </li><li> Next, there are no remaining cards that are $$$3$$$ times an odd number. (Vladislav has only one of each card.) </li><li> Next — all cards that are $$$4$$$ times an odd number, and there is only one such card: $$$4$$$. </li><li> There are no more cards left, so Vladislav stops. </li></ul> Thus the order of cards is $$$1$$$, $$$3$$$, $$$5$$$, $$$7$$$, $$$2$$$, $$$6$$$, $$$4$$$.</div>