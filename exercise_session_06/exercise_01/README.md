# Exercise 1
I implemented the synchronous send mode and standard receive mode. <br />
**What happens? Why?** deadlock because the send blocks the buffer and the processors wait for a receive that won't happen. <br />
Then the even/odd grouping. <br />
**Why does this approach solve the problem? Is it an optimal solution?** The buffers don't get blocked as the neighbors "expect" a send. I guess it's not optimal as it needs 2 cycles of sending and receiving. <br />
Then the non-blocking communications <br />
**Why are these methods better solutions than synchronous communication for our ring
problem ?** It allows the communication to overlap, which is more efficient

