## UVA10252_Common_Permutation_11
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1193
------
```c++
vector<char> save;
```
I used vector to same character.
------
```c++
for(int i=0;i<in1.length();i++)
{
  for(int j=0;j<in2.length();j++)
  {
    if(in1[i]==in2[j])
    {
      .....
      in2.erase(j,1);
      .....
```
It is like bubble sort. we have to check what character is same .
+ if we found the same character then erase the character in save[j].
+ -> (Avoid duplication)
