Given a list of Message intervals merge overlapping intervals and merge messages in those intervals.

A Message interval has a startTime, endTime and a list of string messages received during this interval. Given this list of data, merge messages falling in overlapping intervals. The output should cover all the intervals in the input.

```Input Format```

First line contains number of intervals
Following t line will contain start time, end time, size of message and the message.

```Constraints```

0 <= starti <= endi <= 10^4
intervals[i].length == 4
0 <= message[i].length <= 10^2

```Output Format```

Each line will contain the merged start time and end time followed by the merged message
Each Item will be seperated bya a space

```Sample Input 0```

4
1 3 2 Hi Hello

8 10 3 spring summer rain

2 6 3 How speed data

15 18 3 volume mass physics

```Sample Output 0```

1 6 Hi Hello How speed data

8 10 spring summer rain

15 18 volume mass physics
