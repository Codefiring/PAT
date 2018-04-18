#1003. 我要通过！(20)

<div id='problemContent'>
  <p>“<b><font color=red>答案正确</font></b>”是自动判题系统给出的最令人欢喜的回复。本题属于PAT的“<b><font color=red>答案正确</font></b>”大派送 —— 只要读入的字符串满足下列条件，系统就输出“<b><font color=red>答案正确</font></b>”，否则输出“<b><font color=green>答案错误</font></b>”。</p>
<p>得到“<b><font color=red>答案正确</font></b>”的条件是：</p>

<p>
1. 字符串中必须仅有P, A, T这三种字符，不可以包含其它字符；<br>
2. 任意形如 xPATx 的字符串都可以获得“<b><font color=red>答案正确</font></b>”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；<br>
3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。</p>

现在就请你为PAT写一个自动裁判程序，判定哪些字符串是可以获得“<b><font color=red>答案正确</font></b>”的。</p>

<p><b>输入格式：</b>
每个测试输入包含1个测试用例。第1行给出一个自然数n (&lt10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过100，且不包含空格。</p>

<p><b>输出格式：</b>每个字符串的检测结果占一行，如果该字符串可以获得“<b><font color=red>答案正确</font></b>”，则输出YES，否则输出NO。</p>
<b>输入样例：</b><pre>
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
</pre>
<b>输出样例：</b><pre>
YES
YES
YES
YES
NO
NO
NO
NO
</pre>

</div>