# Loyalty Threshold Problem

You are given:
- an integer X
- an array a of item prices, where a[i] <= X

You can buy the items in any order.
Let S be the total cost of items purchased so far.

Loyalty level = floor(S / X).

If buying an item causes the loyalty level to increase,
you earn bonus points equal to the price of that item.

Goal: maximize the total bonus points.
