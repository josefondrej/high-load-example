# High Load + Low CPU Usage Example

Build the docker image with some intensive multiprocessing task ...

```
make build
```

... and run it on a single CPU ...

```
make run
```

Now the computer should still have acceptable CPU usage, but the load will be extremely high (you may need to wait a
couple of minutes). In my case it was something like this after a ~minute when I run `htop`.

```
    0[|||||||||||                               21.1%]     4[|||                                        4.1%]
    1[|||                                        4.6%]     5[||||                                       6.6%]
    2[||||                                       7.2%]     6[|||||                                      8.7%]
    3[|||                                        5.4%]     7[|||||||                                   13.6%]
  Mem[||||||||||||||||||||||||||||||||||||5.46G/15.1G]   Tasks: 1177, 1005 thr; 3 running
  Swp[                                       0K/2.00G]   Load average: 510.97 184.83 612.59 
                                                         Uptime: 03:00:40
```